
#include "GridmapRoom.h"

#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "DataAssets/GridMapRoomDataAsset.h"
#include "LevelDoor/LevelDoor.h"
#include "Engine/Font.h"

AGridMapRoom::AGridMapRoom()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	OverlapVolume = CreateDefaultSubobject<UBoxComponent>(TEXT("OverlapVolume"));
	OverlapVolume->SetupAttachment(RootComponent);
}

void AGridMapRoom::BeginPlay()
{
	Super::BeginPlay();
	
	SetActorTickEnabled(false);
}

void AGridMapRoom::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (CurrentFogOfWarOpacity != TargetFogOfWarOpacity)
	{
		const float FadeSpeed = 10.f;
		
		CurrentFogOfWarOpacity = FMath::FInterpTo(CurrentFogOfWarOpacity, TargetFogOfWarOpacity, DeltaSeconds, FadeSpeed);
		const float MidFogOfWarOpacity = FMath::Clamp(CurrentFogOfWarOpacity * 3.f, 0.f, 1.f);

		if (FogOfWarMaterialInstance)
		{
			FogOfWarMaterialInstance->SetScalarParameterValue("MidOpacity", MidFogOfWarOpacity);
			FogOfWarMaterialInstance->SetScalarParameterValue("MainOpacity", CurrentFogOfWarOpacity);
		}
	}
	else
	{
		SetActorTickEnabled(false);
	}
}

#if WITH_EDITOR
void AGridMapRoom::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (!RoomData.IsValid() && !RoomData.IsNull())
	{
		RoomData = RoomData.LoadSynchronous();
	}
	
	if (RoomData.IsValid())
	{
		BuildRoom();
		UE_LOG(LogTemp, Warning, TEXT("Room built!"))
	}
	UE_LOG(LogTemp, Warning, TEXT("Room built?"))
}
#endif


void AGridMapRoom::BuildRoom()
{
	if (RoomData.IsNull())
	{
		UE_LOG(LogTemp, Warning, TEXT("No Room Data Asset set!"))
		return;
	}
	if (!RoomData.IsValid())
	{
		RoomData = RoomData.LoadSynchronous();
	}
	Clear();
	
	//yes, it needs a copy unless you want to change shit in data asset.
	//don't judge me for not using a reference here >:( 
	TArray<FTileData> RoomTilesData = RoomData->GetRoomTilesCopy();
	if (RoomTilesData.Num() == 0) return;
	if (!RoomTilesData[0].TileStyle) return;
	TileSize = RoomTilesData[0].TileStyle->TileSize;
	
	for (FTileData& RoomTileData : RoomTilesData)
	{
		UTileStyle* TileStyle = RoomTileData.TileStyle;
		if (!TileStyle) continue;
		
		FVector GridPosition = RoomTileData.Position;
		FRotator GlobalRotation = FRotator(0, RoomTileData.YawWallRotation, 0);

		if (!TileStyles.Contains(TileStyle))
		{
			TileStyles.Add(TileStyle);

			//create instanced static mesh components for each mesh type
			RegisterInstancedStaticMeshComponent(TileStyle);
		}
		FTileData& TileData = RoomTiles.Add(GridPosition, RoomTileData);
		
		//Walls + floor
		FTransform Transform = FTransform(GlobalRotation, GridPosition, FVector(1, 1, 1));

		//Fog of war
// #ifndef WITH_EDITOR
		if (!bIsPreviewRoom)
		{
			EMeshType FogOfWarMeshType = EMeshType::FOG_OF_WAR;
			FTransform FogOfWarTransform = Transform;
			const float WallHeight = 1.05f;
			FVector FogOfWarLocation = Transform.GetLocation() + FVector(0, 0, WallHeight);
			FogOfWarTransform.SetLocation(FogOfWarLocation);
			TTuple<UTileStyle*, EMeshType> FogOfWarKey = TTuple<UTileStyle*, EMeshType>(TileStyle, FogOfWarMeshType);
			CreateMeshInstance(TileData, FogOfWarKey, FogOfWarTransform);
		}
// #endif
		
		uint8 DoorPlacement = (InGame_OpenSockets.Contains(GridPosition)) ? InGame_OpenSockets[GridPosition] : 0;
		if (bIsPreviewRoom) DoorPlacement = TileData.DoorPlacement;
		
		uint8 MirrorX = 1;
		TileData.MeshType = TileStyle->GetMeshType(TileData.WallPlacement, DoorPlacement, TileData.YawWallRotation, MirrorX);
		
		TTuple<UTileStyle*, EMeshType> WallKey = TTuple<UTileStyle*, EMeshType>(TileStyle, TileData.MeshType);
		if (TileData.MeshType != EMeshType::FLOOR) //add floor underneath walls
		{
			EMeshType FloorMeshType = EMeshType::FLOOR;
			TTuple<UTileStyle*, EMeshType> FloorKey = TTuple<UTileStyle*, EMeshType>(TileStyle, FloorMeshType);
			CreateMeshInstance(TileData, FloorKey, Transform);
		}
		
		Transform = FTransform(GlobalRotation, GridPosition, FVector(1, 1, 1)); //reset transform
		CreateMeshInstance(TileData, WallKey, Transform);

		//Corners
		const uint8 CornerPlacement = TileData.WallPlacement >> 4;
		if (CornerPlacement == 0) continue; //no corners
		
		TTuple<UTileStyle*, EMeshType> CornerBrushKey = TTuple<UTileStyle*, EMeshType>(TileData.TileStyle, EMeshType::CORNER);
		
		if (!InstancedStaticMeshComponents.Contains(CornerBrushKey) || !InstancedStaticMeshComponents[CornerBrushKey]) continue;
		UInstancedStaticMeshComponent* InstancedStaticMeshComponent = InstancedStaticMeshComponents[CornerBrushKey];
		
		if (!InstancedStaticMeshIndexes.Contains(InstancedStaticMeshComponent))
		{
			InstancedStaticMeshIndexes.Add(InstancedStaticMeshComponent, TArray<FVector>());
		}
		
		for (uint8 CornerId = 0; CornerId < 4; CornerId++)
		{
			if ((CornerPlacement & (1 << CornerId)) == 0) continue;
		
			const FVector CornerLocation = GridPosition+FVector(0, 0, CornerId);
			const double CornerYawRotation = 180.f+(90.f*CornerId);
		
			Transform = FTransform(FRotator(0, CornerYawRotation, 0).Quaternion(), GridPosition*TileSize, FVector(1, 1, 1));
		
			if(InstancedStaticMeshIndexes.Contains(InstancedStaticMeshComponent) && !InstancedStaticMeshIndexes[InstancedStaticMeshComponent].Contains(CornerLocation))
			{
				TileData.CornerInstancedStaticMeshComponent = InstancedStaticMeshComponent;
				InstancedStaticMeshIndexes[InstancedStaticMeshComponent].Add(CornerLocation);
				InstancedStaticMeshComponent->AddInstance(Transform);
			}
		}
	}
}

void AGridMapRoom::BuildRoom(const TSoftObjectPtr<UGridMapRoomDataAsset> _RoomDataAsset)
{
	if (_RoomDataAsset.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("Empty pointer to Room Data Asset!"))
		return;
	}
	if (!_RoomDataAsset.IsValid())
	{
		RoomData = _RoomDataAsset.LoadSynchronous();
	}

	BuildRoom();
}

void AGridMapRoom::SetFogOfWarVisibility(bool bIsVisible)
{
	if (!FogOfWarMaterialInstance) return;

	TargetFogOfWarOpacity = (bIsVisible) ? 1.f : 0.f;
	SetActorTickEnabled(true);
}

void AGridMapRoom::CreateMeshInstance(FTileData &TileData, TTuple<UTileStyle*, EMeshType> &Key, const FTransform &Transform)
{
	if (!InstancedStaticMeshComponents.Contains(Key)) return;
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent = InstancedStaticMeshComponents[Key];

	if (!InstancedStaticMeshIndexes.Contains(InstancedStaticMeshComponent))
	{
		InstancedStaticMeshIndexes.Add(InstancedStaticMeshComponent, TArray<FVector>());
	}
	if (InstancedStaticMeshIndexes[InstancedStaticMeshComponent].Contains(Transform.GetLocation())) return;

	TileData.InstancedStaticMeshComponent = InstancedStaticMeshComponent;
	InstancedStaticMeshIndexes[InstancedStaticMeshComponent].Add(Transform.GetLocation());
	
	FTransform TileTransform = Transform;
	TileTransform.SetLocation(Transform.GetLocation() * TileSize);
	InstancedStaticMeshComponent->AddInstance(TileTransform);
}

void AGridMapRoom::Clear()
{
	if (InstancedStaticMeshIndexes.Num() > 0)
	{
		TArray<UInstancedStaticMeshComponent*> CreatedInstancedStaticMeshComponents;
		InstancedStaticMeshIndexes.GetKeys(CreatedInstancedStaticMeshComponents);
		if (CreatedInstancedStaticMeshComponents.Num() > 0)
		{
			for (UInstancedStaticMeshComponent* Ismc : CreatedInstancedStaticMeshComponents)
			{
				if (!IsValid(Ismc)) continue;
				Ismc->DestroyComponent();
			}
		}
	}
	
	RoomTiles.Empty();
	InstancedStaticMeshIndexes.Empty();
	TileStyles.Empty();
	InstancedStaticMeshComponents.Empty();
	RoomExtends = FVector4d(-50, 50, -50, 50);
	if (OverlapVolume != nullptr && IsValid(OverlapVolume)) OverlapVolume->SetBoxExtent(FVector::ZeroVector);
}

void AGridMapRoom::RegisterInstancedStaticMeshComponent(UTileStyle* TileStyle)
{
	if(!TileStyle) return;
	
	for (uint8 IntMeshType = 0; IntMeshType <= (uint8)EMeshType::FOG_OF_WAR; IntMeshType++)
	{
		EMeshType MeshType = static_cast<EMeshType>(IntMeshType);
		TTuple<UTileStyle*, EMeshType> Key = TTuple<UTileStyle*, EMeshType>(TileStyle, MeshType);
		
		UStaticMesh* WallMesh = nullptr;
		switch (MeshType)
		{
		case EMeshType::FOG_OF_WAR:
			WallMesh = TileStyle->FogOfWarPlane;
			break;
		case EMeshType::FLOOR:
			WallMesh = TileStyle->FloorMesh;
			break;
		case EMeshType::ONEWALL:
			WallMesh = TileStyle->OneWallMesh;
			break;
		case EMeshType::UWALL:
			WallMesh = TileStyle->UWallMesh;
			break;
		case EMeshType::TUNNELWALL:
			WallMesh = TileStyle->TunnelWallMesh;
			break;
		case EMeshType::CORNERWALL:
			WallMesh = TileStyle->CornerWallMesh;
			break;

		case EMeshType::ONEWALL_UP:
			WallMesh = TileStyle->OneWallDoorSlot;
			break;
		case EMeshType::CORNERWALL_UP:
			WallMesh = TileStyle->CornerWallDoorSlotUp;
			break;
		case EMeshType::CORNERWALL_RIGHT:
			WallMesh = TileStyle->CornerWallDoorSlotRight;
			break;
		case EMeshType::CORNERWALL_UPRIGHT:
			WallMesh = TileStyle->CornerWallDoorSlotUpRight;
			break;
		case EMeshType::TUNNELWALL_UP:
			WallMesh = TileStyle->TunnelWallDoorSlotUp;
			break;
		case EMeshType::TUNNELWALL_UPDOWN:
			WallMesh = TileStyle->TunnelWallDoorSlotUpDown;
			break;
		case EMeshType::UWALL_UP:
			WallMesh = TileStyle->UWallDoorSlotUp;
			break;
		case EMeshType::UWALL_RIGHT:
			WallMesh = TileStyle->UWallDoorSlotRight;
			break;
		case EMeshType::UWALL_UPRIGHT:
			WallMesh = TileStyle->UWallDoorSlotUpRight;
			break;
		case EMeshType::UWALL_UPDOWN:
			WallMesh = TileStyle->UWallDoorSlotUpDown;
			break;
		case EMeshType::UWALL_FULL:
			WallMesh = TileStyle->UWallDoorSlotFull;
			break;
		case EMeshType::CORNER:
			WallMesh = TileStyle->OneCornerMesh;
		}
		
		if (WallMesh == nullptr)
		{
			continue;
		}
		InstancedStaticMeshComponents.Add(Key, CreateIsmComponent(WallMesh, TileStyle, MeshType));
	}
}

UInstancedStaticMeshComponent* AGridMapRoom::CreateIsmComponent(UStaticMesh* StaticMesh, UTileStyle* TileStyle, EMeshType MeshType)
{
	UInstancedStaticMeshComponent* ParentIsmComponent = nullptr;
	if (StaticMesh == nullptr) return nullptr;
	if (MeshType != EMeshType::FLOOR)
	{
		const TTuple<UTileStyle*, EMeshType> InstancedFloorKey = TTuple<UTileStyle*, EMeshType>(TileStyle, EMeshType::FLOOR);
		if (InstancedStaticMeshComponents.Contains(InstancedFloorKey) && !InstancedStaticMeshComponents[InstancedFloorKey])
		{
			ParentIsmComponent = InstancedStaticMeshComponents[InstancedFloorKey];
		}
	}
	UActorComponent* ActorComponent = NewObject<UActorComponent>(this, UInstancedStaticMeshComponent::StaticClass());
	ActorComponent->RegisterComponent();
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent = Cast<UInstancedStaticMeshComponent>(ActorComponent);
	InstancedStaticMeshComponent->SetRelativeTransform(FTransform::Identity);

	if (MeshType == EMeshType::FOG_OF_WAR)
	{
		if (TileStyle->FogOfWarMaterial != nullptr)
		{
			FogOfWarMaterialInstance = UMaterialInstanceDynamic::Create(TileStyle->FogOfWarMaterial, InstancedStaticMeshComponent);
			InstancedStaticMeshComponent->SetMaterial(0, FogOfWarMaterialInstance);
		}
	}
	
	InstancedStaticMeshComponent->SetStaticMesh(StaticMesh);
	if (ParentIsmComponent != nullptr)
	{
		InstancedStaticMeshComponent->AttachToComponent(ParentIsmComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
	else
	{
		InstancedStaticMeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}
	
	return InstancedStaticMeshComponent;
}

void AGridMapRoom::SetOverlapVolumeExtends()
{
	if (!RoomData || !OverlapVolume) return;
	
	OverlapVolume->SetBoxExtent(RoomData->OverlapVolumeExtent);
	OverlapVolume->SetRelativeLocation(RoomData->OverlapVolumePosition);
}
