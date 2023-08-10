// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GridMapEditorMode.h"
#include "DrawDebugHelpers.h"
#include "EditorModeManager.h"
#include "EditorViewportClient.h"
#include "Engine/CollisionProfile.h"
#include "Engine/Engine.h"
#include "Engine/EngineTypes.h"
#include "Engine/World.h"
#include "Framework/Commands/UICommandList.h"
#include "GridMapEditCommands.h"
#include "GridMapEditorModeToolkit.h"
#include "PreviewRoom.h"
#include "Materials/MaterialInstanceDynamic.h"

#include "DataAssets/GridMapRoomDataAsset.h"
#include "TileStyle.h"
#include "Kismet/GameplayStatics.h"
#include "Toolkits/ToolkitManager.h"

static FName GridMapBrushHighlightColorParamName("HighlightColor");

const FEditorModeID FGridMapEditorMode::EM_GridMapEditorModeId = TEXT("EM_GridMapEditorMode");

FGridMapEditorMode::FGridMapEditorMode()
	: FEdMode()
	, ActiveTileStyle(nullptr)
{
	BrushPaintHighlightColor = FColor(127, 127, 255, 255);
	BrushWarningHighlightColor = FColor::Red;

	// Load resources and construct brush component
	UStaticMesh* StaticMesh = nullptr;
	if (!IsRunningCommandlet())
	{
		UMaterial* BrushMaterial = LoadObject<UMaterial>(nullptr, TEXT("/GridMapEditor/M_TileBrushCube.M_TileBrushCube"), nullptr, LOAD_None, nullptr);
		BrushMID = UMaterialInstanceDynamic::Create(BrushMaterial, GetTransientPackage());
		check(BrushMID != nullptr);
		FLinearColor DefaultColor;
		BrushMID->GetVectorParameterDefaultValue(GridMapBrushHighlightColorParamName, DefaultColor);
		BrushPaintHighlightColor = DefaultColor.ToFColor(false);
		StaticMesh = LoadObject<UStaticMesh>(nullptr, TEXT("/GridMapEditor/SM_TileBrushCube.SM_TileBrushCube"), nullptr, LOAD_None, nullptr);
	}
	//Spawn TileBrush
	BrushCurrentHighlightColor = BrushPaintHighlightColor;
	TileBrushComponent = NewObject<UStaticMeshComponent>(GetTransientPackage(), TEXT("TileBrushComponent"));
	TileBrushComponent->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
	TileBrushComponent->SetCollisionObjectType(ECC_WorldDynamic);
	TileBrushComponent->SetStaticMesh(StaticMesh);
	TileBrushComponent->SetMaterial(0, BrushMID);
	TileBrushComponent->SetAbsolute(true, true, true);
	TileBrushComponent->CastShadow = false;
	
	bBrushTraceValid = false;
	BrushLocation = FVector::ZeroVector;

	bIsPaintRoomSet = true;
	// Setup and bind commands
	UICommandList = MakeShareable(new FUICommandList);
	UIDoorCommandList = MakeShareable(new FUICommandList);
	BindCommandList();
}

FGridMapEditorMode::~FGridMapEditorMode()
{

}

void FGridMapEditorMode::BindCommandList()
{
	const FGridMapEditCommands& Commands = FGridMapEditCommands::Get();

	UICommandList->MapAction(
		Commands.SetPaintTiles,
		FExecuteAction::CreateRaw(this, &FGridMapEditorMode::OnSetPaintTiles),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([=]
		{
			return UISettings.GetPaintToolSelected();
		}));

	UICommandList->MapAction(
		Commands.SetSelectTiles,
		FExecuteAction::CreateRaw(this, &FGridMapEditorMode::OnSetSelectTiles),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([=]
		{
			return UISettings.GetSelectToolSelected();
		}));

	UICommandList->MapAction(
		Commands.SetTileSettings,
		FExecuteAction::CreateRaw(this, &FGridMapEditorMode::OnSetTileSettings),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([=]
		{
			return UISettings.GetSettingsToolSelected();
		}));

	UIDoorCommandList->MapAction(
		Commands.SetDoorPaintMode,
		FExecuteAction::CreateRaw(this, &FGridMapEditorMode::OnSetPaintDoorMode),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([=]
		{
			return !bIsPaintRoomSet;
		}));

	UIDoorCommandList->MapAction(
		Commands.SetRoomPaintMode,
		FExecuteAction::CreateRaw(this, &FGridMapEditorMode::OnSetPaintRoomMode),
		FCanExecuteAction(),
		FIsActionChecked::CreateLambda([=]
		{
			return bIsPaintRoomSet;
		}));
}

void FGridMapEditorMode::Enter()
{
	FEdMode::Enter();

	// Clear any selections
	const bool bNoteSelectionChange(false);
	const bool bDeslectBSPSurfs(true);
	GEditor->SelectNone(bNoteSelectionChange, bDeslectBSPSurfs);
	
	if (!Toolkit.IsValid() && UsesToolkits())
	{
		Toolkit = MakeShareable(new FGridMapEditorModeToolkit);
		Toolkit->Init(Owner->GetToolkitHost());
	}
	
	//Spawn GeneratorRoom
	if (!PreviewRoom.IsValid())
	{
		TArray<AActor*> ExistentRooms;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), APreviewRoom::StaticClass(), ExistentRooms);
		
		if (ExistentRooms.Num() > 0)
		{
			AActor* OldPreviewRoomActor = ExistentRooms.Pop();
			APreviewRoom* OldPreviewRoom = Cast<APreviewRoom>(OldPreviewRoomActor);
			PreviewRoom = OldPreviewRoom;
			
			for (AActor* Room : ExistentRooms)
			{
				if (IsValid(Room) && Room)
				{
					Room->Destroy();
				}
			}
		}

		if (!PreviewRoom.IsValid())
		{
			PreviewRoom = GetWorld()->SpawnActor<APreviewRoom>();
		}
	}
	if (PreviewRoom.IsValid())
	{
		PreviewRoom->SetActorTransform(FTransform::Identity);
	}
	if (PreviewRoom.IsValid() && GetEditedRoomData() != nullptr)
	{
		PreviewRoom->BuildRoomFromRoomTiles(GetEditedRoomData()->GetRoomTiles());
	}
	
	const bool bNewVisibility(true);
	TileBrushComponent->SetVisibility(bNewVisibility);
}

void FGridMapEditorMode::Exit()
{
	if (Toolkit.IsValid())
	{
		FToolkitManager::Get().CloseToolkit(Toolkit.ToSharedRef());
		Toolkit.Reset();
	}

	// Remove the brush
	TileBrushComponent->UnregisterComponent();
	// if (PreviewRoom != nullptr)
	// {
	// 	PreviewRoom->Destroy();
	// 	PreviewRoom = nullptr;
	// }

	//Destroy all GeneratorRooms
	TArray<AActor*> GarbageRooms;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APreviewRoom::StaticClass(), GarbageRooms);
	if (GarbageRooms.Num() >= 1 && PreviewRoom != nullptr)
	{
		AActor* PreviewRoomActor = Cast<AActor>(PreviewRoom);
		if (GarbageRooms.Contains(PreviewRoomActor))
		{
			GarbageRooms.Remove(PreviewRoomActor);
		}
	}
	for (AActor* GarbageRoom : GarbageRooms)
	{
		GarbageRoom->Destroy();
	}
	
	// Call base Exit method to ensure proper cleanup
	FEdMode::Exit();
}

void FGridMapEditorMode::Tick(FEditorViewportClient* ViewportClient, float DeltaTime)
{
	bool PaintToolNoData = UISettings.GetPaintToolSelected() && (UISettings.GetCurrentRoomData() == nullptr || UISettings.GetCurrentTileSet() == nullptr);
	//Brush visibility and location change
	
	if (!IsEditingEnabled() && UISettings.GetSettingsToolSelected()) return;
	if (PaintToolNoData) return;
	
	if (bBrushTraceValid)
	{
		FTransform BrushTransform = FTransform(FQuat::Identity, BrushLocation, FVector::OneVector*(GetTileSize()/100));
		TileBrushComponent->SetRelativeTransform(BrushTransform);

		// warning color if we're erasing tiles
		FColor BrushHighlightColor = BrushPaintHighlightColor;
		if (UISettings.GetSelectToolSelected()) BrushHighlightColor = BrushSelectHighlightColor;
		if (UISettings.GetPaintMode() == EGridMapPaintMode::EraseRoom || UISettings.GetPaintMode() == EGridMapPaintMode::EraseDoor)
		{
			BrushHighlightColor = BrushWarningHighlightColor;
		}
		
		// adjust color if needed
		if (BrushCurrentHighlightColor != BrushHighlightColor)
		{
			BrushCurrentHighlightColor = BrushHighlightColor;
			BrushMID->SetVectorParameterValue(GridMapBrushHighlightColorParamName, BrushHighlightColor);
		}		

		if (!TileBrushComponent->IsRegistered())
		{
			TileBrushComponent->RegisterComponentWithWorld(ViewportClient->GetWorld());
		}
	}
	else
	{
		if (TileBrushComponent->IsRegistered())
		{
			TileBrushComponent->UnregisterComponent();
		}
	}

}

bool FGridMapEditorMode::UsesToolkits() const
{
	return true;
}

void FGridMapEditorMode::AddReferencedObjects(FReferenceCollector& Collector)
{
	FEdMode::AddReferencedObjects(Collector);
	Collector.AddReferencedObject(TileBrushComponent);
}

bool FGridMapEditorMode::StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	return FEdMode::StartTracking(InViewportClient, InViewport);
}

bool FGridMapEditorMode::EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport)
{
	return FEdMode::EndTracking(InViewportClient, InViewport);
}

bool FGridMapEditorMode::MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY)
{
	if (IsEditingEnabled())
	{
		// Compute a world space ray from the screen space mouse coordinates
		FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
			ViewportClient->Viewport,
			ViewportClient->GetScene(),
			ViewportClient->EngineShowFlags)
			.SetRealtimeUpdate(ViewportClient->IsRealtime()));

		FSceneView* View = ViewportClient->CalcSceneView(&ViewFamily);
		FViewportCursorLocation MouseViewportRay(View, ViewportClient, MouseX, MouseY);
		BrushTraceDirection = MouseViewportRay.GetDirection();

		FVector BrushTraceStart = MouseViewportRay.GetOrigin();
		if (ViewportClient->IsOrtho())
		{
			BrushTraceStart += -WORLD_MAX * BrushTraceDirection;
		}

		GridMapBrushTrace(ViewportClient, BrushTraceStart, BrushTraceDirection);
	}
	return false;
}

bool FGridMapEditorMode::CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX, int32 InMouseY)
{
	//Compute a world space ray from the screen space mouse coordinates
	FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
		InViewportClient->Viewport,
		InViewportClient->GetScene(),
		InViewportClient->EngineShowFlags)
		.SetRealtimeUpdate(InViewportClient->IsRealtime()));

	FSceneView* View = InViewportClient->CalcSceneView(&ViewFamily);
	FViewportCursorLocation MouseViewportRay(View, InViewportClient, InMouseX, InMouseY);
	BrushTraceDirection = MouseViewportRay.GetDirection();

	FVector BrushTraceStart = MouseViewportRay.GetOrigin();
	if (InViewportClient->IsOrtho())
	{
		BrushTraceStart += -WORLD_MAX * BrushTraceDirection;
	}

	GridMapBrushTrace(InViewportClient, BrushTraceStart, BrushTraceDirection);
	
	if (UISettings.GetPaintToolSelected())
	{
		PaintTile();
	}
	
	return true;
}

void FGridMapEditorMode::PaintTile()
{
	if (!bIsPainting || !bBrushTraceValid || !UISettings.GetCurrentRoomData().IsValid()) return;
	if (!PreviewRoom.IsValid()) return;

	UTileStyle* TileStyle = UISettings.GetCurrentTileSet().Get();
	bool IsErasing = false;
	switch (UISettings.GetPaintMode())
	{
	case EGridMapPaintMode::PaintRoom:
		PreviewRoom->BrushSetTile(BrushLocation, TileStyle);
		break;
	case EGridMapPaintMode::EraseRoom:
		PreviewRoom->BrushUnsetTile(BrushLocation);
		IsErasing = true;
		break;
	case EGridMapPaintMode::PaintDoor:
		PreviewRoom->BrushSetDoor(BrushLocation, 0);
		break;
	case EGridMapPaintMode::EraseDoor:
		PreviewRoom->BrushUnsetDoor(BrushLocation);
		break;
	}
	// UE_LOG(LogTemp, Display, TEXT("Fuck you %i, %i"), BrushLocation.X, BrushLocation.Y)
	// PreviewRoom->UpdateOverlapVolume(BrushLocation, IsErasing);
}

void FGridMapEditorMode::SelectTile()
{
	if (!bIsPainting || !bBrushTraceValid || !PreviewRoom.IsValid())
	{
		SelectedRoomTile = nullptr;
		return;
	}
	FVector GridLocation = BrushLocation/GetTileSize();
	SelectedRoomTile = PreviewRoom->GetTileData(GridLocation);
	SelectedGridLocation = GridLocation;
	// if (SelectedRoomTile != nullptr)
	// {
	// 	UE_LOG(LogTemp, Display, TEXT("Selected Tile: %i"), SelectedRoomTile->DoorPlacement);
	// }
	
}

void FGridMapEditorMode::UpdateDoors(FVector& GridLocation)
{
	UE_LOG(LogTemp, Display, TEXT("Update Doors!!!!"))
	if (!PreviewRoom.IsValid()) return;
	PreviewRoom->UpdateTile(GridLocation, nullptr);
}

bool FGridMapEditorMode::InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey, EInputEvent InEvent)
{
	bool bHandled = false;

	const bool bEventIsLeftButtonDown = (InKey == EKeys::LeftMouseButton && InEvent != IE_Released);
	const bool bKeystateIsLeftButtonDown = InViewport->KeyState(EKeys::LeftMouseButton);
	const bool bWantsToErase = InViewport->KeyState(EKeys::LeftControl) || InViewport->KeyState(EKeys::RightControl);

	const bool bIsLeftButtonDown =  bEventIsLeftButtonDown || bKeystateIsLeftButtonDown;
	if (InViewportClient->EngineShowFlags.ModeWidgets)
	{
		const bool bUserWantsPaint = bIsLeftButtonDown;
		bIsPainting = bUserWantsPaint;

		// check paint mode?
		if (bWantsToErase)
		{
			UISettings.SetPaintMode(bIsPaintRoomSet ? EGridMapPaintMode::EraseRoom : EGridMapPaintMode::EraseDoor);
		}
		else
		{
			UISettings.SetPaintMode(bIsPaintRoomSet ? EGridMapPaintMode::PaintRoom : EGridMapPaintMode::PaintDoor);
		}

		if (bUserWantsPaint)
		{
			bHandled = true;
			if (UISettings.GetPaintToolSelected())
			{
				PaintTile();
			}
			else if (UISettings.GetSelectToolSelected())
			{
				SelectTile();
			}
		}
	}

	if (!bHandled)
	{
		bHandled = FEdMode::InputKey(InViewportClient, InViewport, InKey, InEvent);
	}

	return bHandled;
}

bool FGridMapEditorMode::HandleClick(FEditorViewportClient* InViewportClient, HHitProxy *HitProxy, const FViewportClick &Click)
{
	return true;
}

void FGridMapEditorMode::GridMapBrushTrace(FEditorViewportClient* ViewportClient, const FVector& InRayOrigin, const FVector& InRayDirection)
{
	bBrushTraceValid = false;
	BrushTraceHitActor.Reset();

	if (ViewportClient == nullptr || (!ViewportClient->IsMovingCamera() && ViewportClient->IsVisible()))
	{
		if (UISettings.GetPaintToolSelected() || UISettings.GetSelectToolSelected())
		{
			const FPlane GroundPlane(UISettings.GetPaintOrigin(), FVector::UpVector);

			FVector IntersectionLocation = FMath::RayPlaneIntersection(InRayOrigin, InRayDirection, GroundPlane);
			BrushLocation = SnapLocation(IntersectionLocation);
			bBrushTraceValid = true;

			TArray<AActor*> HitTiles;
			// TilesAt(GetWorld(), BrushLocation, HitTiles);
			if (HitTiles.Num() > 0)
			{
				BrushTraceHitActor = HitTiles[0];
			}
		}
	}
}

APreviewRoom* FGridMapEditorMode::GetPreviewRoom()
{
	return PreviewRoom.Get();
}

FTileData* FGridMapEditorMode::GetSelectedTileData()
{
	return SelectedRoomTile;
}

FVector& FGridMapEditorMode::GetSelectedGridLocation()
{
	return SelectedGridLocation;
}

FVector FGridMapEditorMode::SnapLocation(const FVector& InLocation)
{
	int32 SnapWidth = GetTileSize();
	if (SnapWidth <= 0) {
		return InLocation;
	}
	float X = InLocation.X / SnapWidth;
	float Y = InLocation.Y / SnapWidth;
	float Z = InLocation.Z / SnapWidth;

	X = FMath::RoundToInt(X) * SnapWidth;
	Y = FMath::RoundToInt(Y) * SnapWidth;
	Z = FMath::RoundToInt(Z) * SnapWidth;
	return FVector(X, Y, Z);
}

bool FGridMapEditorMode::Select(AActor* InActor, bool bInSelected)
{
	// return true if you filter that selection
	// however - return false if we are trying to deselect so that it will infact do the deselection
	if (bInSelected == false)
	{
		return false;
	}
	return true;
}

bool FGridMapEditorMode::IsSelectionAllowed(AActor* InActor, bool bInSelection) const
{
	return false;
}

void FGridMapEditorMode::ClearAllToolSelection()
{
	UISettings.SetPaintToolSelected(false);
	UISettings.SetSelectToolSelected(false);
	UISettings.SetSettingsToolSelected(false);
}

void FGridMapEditorMode::OnSetPaintTiles()
{
	ClearAllToolSelection();
	SelectedRoomTile = nullptr;
	UISettings.SetPaintToolSelected(true);
	//HandleToolChanged();
}

void FGridMapEditorMode::OnSetSelectTiles()
{
	ClearAllToolSelection();
	bIsPaintRoomSet = false;
	UISettings.SetSelectToolSelected(true);
}

void FGridMapEditorMode::OnSetTileSettings()
{
	ClearAllToolSelection();
	bIsPaintRoomSet = false;
	UISettings.SetSettingsToolSelected(true);
}

void FGridMapEditorMode::OnSetPaintRoomMode()
{
	bIsPaintRoomSet = true;
	UISettings.SetPaintToolSelected(true);
}

void FGridMapEditorMode::OnSetPaintDoorMode()
{
	bIsPaintRoomSet = false;
	UISettings.SetPaintToolSelected(true);
}

EGridMapEditingState FGridMapEditorMode::GetEditingState() const
{
	UWorld* World = GetWorld();

	if (GEditor->bIsSimulatingInEditor)
	{
		return EGridMapEditingState::SIEWorld;
	}
	else if (GEditor->PlayWorld != NULL)
	{
		return EGridMapEditingState::PIEWorld;
	}
	else if (World == nullptr)
	{
		return EGridMapEditingState::Unknown;
	}

	return EGridMapEditingState::Enabled;
}

TSoftObjectPtr<UGridMapRoomDataAsset> FGridMapEditorMode::GetEditedRoomData()
{
	TSoftObjectPtr<UGridMapRoomDataAsset> RoomData = UISettings.GetCurrentRoomData().Get();
	if (RoomData.IsValid())
	{
		EditedRoomCopy = RoomData->RoomTiles;
	}
	else
	{
		EditedRoomCopy = {};
	}
	return RoomData;
}

int32 FGridMapEditorMode::GetTileSize() const
{
	if (ActiveTileStyle)
		return ActiveTileStyle->TileSize;

	// fallback on the editor grid size
	return GEditor->GetGridSize();
}

void FGridMapEditorMode::AddActiveTileStyle(UTileStyle* TileStyle)
{
	// don't add duplicates
	for (const UTileStyle* ExistingTileStyle : ActiveTileStyles)
	{
		if (ExistingTileStyle->GetName() == TileStyle->GetName())
			return;
	}

	ActiveTileStyles.Add(TileStyle);
}

const TArray<UTileStyle*>& FGridMapEditorMode::GetActiveTileStyles() const
{
	return ActiveTileStyles;
}

void FGridMapEditorMode::SetActiveTileStyle(UTileStyle* TileSet)
{
	ActiveTileStyle = TileSet;
	for (UTileStyle* ExistingTileSet : ActiveTileStyles)
	{
		if (TileSet != nullptr && ExistingTileSet->GetName() == TileSet->GetName())
		{
			ActiveTileStyle = ExistingTileSet;
		}
	}

	UISettings.SetCurrentTileStyle(ActiveTileStyle);
}

FString FGridMapEditorMode::CreateActorLabel(const class UTileStyle* TileStyle) const
{
	FString TileSetName = TileStyle->GetName();
	FString CleanTileSetName = TileSetName.StartsWith("TS_") ? TileSetName.RightChop(3) : TileSetName;
	return FString::Printf(TEXT("SM_%s"), *CleanTileSetName);
}
