
#pragma once

#include "GridmapRoom.h"
#include "PreviewRoom.generated.h"

UCLASS()
class GRIDMAP_API APreviewRoom : public AGridMapRoom
{
	GENERATED_BODY()
	
public:	
	APreviewRoom();

	virtual void BeginPlay() override;
#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif WITH_EDITOR
	
	void BuildRoomFromRoomTiles(TArray<FTileData>& RoomTiles);
	TArray<FTileData> GetRoomTilesData();
	
	//ELEVATOR
	void CreateElevatorActor();
	AActor* GetElevatorActor() const {return ElevatorActor;}
	UClass* GetElevatorActorClass() const {return ElevatorActorClass;}
	void SetElevatorActorClass(UClass* Class) {ElevatorActorClass = Class;}
	bool GetHasElevator() const {return HasElevator;}
	void SetHasElevator(const bool _HasElevator) {HasElevator = _HasElevator;}
	FTransform GetElevatorTransform() const {return FTransform(FRotator(0.f, ElevatorYawRotation, 0.f), ElevatorPosition);}
	void SetElevatorTransform(const FTransform ElevatorTransform)
	{
		ElevatorPosition = ElevatorTransform.GetLocation();
		ElevatorYawRotation = ElevatorTransform.GetRotation().Y;
	}
	void SetElevatorPosition(const FVector _ElevatorPosition) {ElevatorPosition = _ElevatorPosition;}
	void SetElevatorYawRotation(const float Yaw) {ElevatorYawRotation = Yaw;}
	float GetElevatorYawRotation() const {return ElevatorYawRotation;}

	void BrushSetTile(FVector& Location, UTileStyle* TileStyle);
	void BrushUnsetTile(FVector& Location);

	void BrushSetDoor(FVector& Location, uint8 ForcedDoorPlacement);
	void BrushUnsetDoor(FVector& Location);

	void UpdateTile(FVector& GridLocation, UTileStyle* ForceTileStyle);
	
	FTileData* GetTileData(FVector& Location);

	int GetTileSize();
	FVector GetOverlapVolumeBoxExtent();
	FVector GetOverlapVolumeRelativePosition();
protected:
	void CreateWall(FVector& Location, UTileStyle* TileStyle);
	void CreateFloor(FVector& Location, UTileStyle* TileStyle);

	uint8 GetWallVariant(FVector& TilePosition) const;
	TArray<FVector> GetWallDirections(FVector& TilePosition) const;
	static TArray<FVector> GetDoorDirections(uint8 DoorPlacement);
	void RemoveWallMesh(FVector& GridLocation);
	void UpdateNearTiles(FVector& GridLocation, UTileStyle* TileStyle);
	void RemoveFloorMesh(FVector& GridLocation);
private:
	AActor* ElevatorActor = nullptr;
	bool HasElevator = false;
	UClass* ElevatorActorClass = nullptr;
	FVector ElevatorPosition = FVector::ZeroVector;
	float ElevatorYawRotation = 0.f;
	
	void UpdateOverlapVolume(FVector& BrushLocation, bool IsErasing);
};
