// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/GridMapRoomDataAsset.h"
#include "EdMode.h"
#include "GridMapEditorTypes.h"
#include "GridMapEditorUISettings.h"

class APreviewRoom;
struct GRIDMAP_API FRoomTile;

class FGridMapEditorMode : public FEdMode
{
protected:
	typedef TPair<class AGridMapStaticMeshActor*, uint32> FAdjacentTile;

public:
	const static FEditorModeID EM_GridMapEditorModeId;

public:
	FGridMapEditorMode();
	virtual ~FGridMapEditorMode();

	// FEdMode interface
	virtual void Enter() override;
	virtual void Exit() override;
	virtual void Tick(FEditorViewportClient* ViewportClient, float DeltaTime) override;
	//virtual void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
	//virtual void ActorSelectionChangeNotify() override;
	bool UsesToolkits() const override;
	virtual void AddReferencedObjects(FReferenceCollector& Collector) override;

	virtual bool StartTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool EndTracking(FEditorViewportClient* InViewportClient, FViewport* InViewport) override;
	virtual bool MouseMove(FEditorViewportClient* ViewportClient, FViewport* Viewport, int32 MouseX, int32 MouseY) override;
	virtual bool CapturedMouseMove(FEditorViewportClient* InViewportClient, FViewport* InViewport, int32 InMouseX, int32 InMouseY) override;
	virtual bool InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey, EInputEvent InEvent) override;
	virtual bool HandleClick(FEditorViewportClient* InViewportClient, HHitProxy *HitProxy, const FViewportClick &Click) override;	

	virtual bool Select(AActor* InActor, bool bInSelected) override;
	virtual bool IsSelectionAllowed(AActor* InActor, bool bInSelection) const override;
	// End of FEdMode interface

	/** Return the current grid map editing state */
	EGridMapEditingState GetEditingState() const;

	/** Simgple wrapper to know if we can edit the grid map based on edit state */
	bool IsEditingEnabled() const
	{
		return GetEditingState() == EGridMapEditingState::Enabled;
	}

	void AddActiveTileStyle(class UTileStyle* TileSet);
	const TArray<class UTileStyle*>& GetActiveTileStyles() const;
	void SetActiveTileStyle(class UTileStyle* TileSet);

	TSoftObjectPtr<UGridMapRoomDataAsset> GetEditedRoomData();
	APreviewRoom* GetPreviewRoom();

	FTileData* GetSelectedTileData();
	FVector& GetSelectedGridLocation();
	void UpdateDoors(FVector& Location);

private:
	void BindCommandList();
	void ClearAllToolSelection();
	void OnSetPaintTiles();
	void OnSetSelectTiles();
	void OnSetTileSettings();
	
	void OnSetPaintRoomMode();
	void OnSetPaintDoorMode();

	void GridMapBrushTrace(FEditorViewportClient* ViewportClient, const FVector& InRayOrigin, const FVector& InRayDirection);
	
	int32 GetTileSize() const;

	FVector SnapLocation(const FVector& InLocation);

	void PaintTile();
	void SelectTile();
	
	FString CreateActorLabel(const class UTileStyle* TileSet) const;

public:
	FGridMapEditorUISettings UISettings;

	/** Command list lives here so that the key bindings on the commands can be processed in the viewport. */
	TSharedPtr<FUICommandList> UICommandList;
	TSharedPtr<FUICommandList> UIDoorCommandList;
	
private:
	bool bIsPaintRoomSet;
	bool bIsPainting;
	bool bBrushTraceValid;
	FVector BrushLocation;
	FVector BrushTraceDirection;
	TWeakObjectPtr<class AActor> BrushTraceHitActor;
	UStaticMeshComponent* TileBrushComponent;
	/** The dynamic material of the tile brush. */
	class UMaterialInstanceDynamic* BrushMID;
	FColor BrushPaintHighlightColor;
	FColor BrushSelectHighlightColor;
	FColor BrushSelectedHighlightColor;
	FColor BrushWarningHighlightColor;
	FColor BrushCurrentHighlightColor;

	TWeakObjectPtr<APreviewRoom> PreviewRoom;
	
	TArray<FTileData> EditedRoomCopy;

	FTileData* SelectedRoomTile;
	FVector SelectedGridLocation = FVector::OneVector;
	
	UPROPERTY()
	TArray<class UTileStyle*> ActiveTileStyles;
	
	UPROPERTY()
	class UTileStyle* ActiveTileStyle;
};
