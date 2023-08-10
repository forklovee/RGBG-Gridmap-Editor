#pragma once
#include "GridmapRoom.h"
#include "DataAssets/GridmapLevelCollectionDataAsset.h"
#include "DataAssets/GridMapRoomDataAsset.h"
#include "NavMesh/NavMeshBoundsVolume.h"

#include "BuildingFloorGenerator.generated.h"

class ALevelInstance;
class AGridMapRoom;

UENUM(BlueprintType)
enum EGenerationEndState
{
	SUCCESS UMETA(DisplayName = "Success"),
	FAILURE UMETA(DisplayName = "Failure")
};

USTRUCT()
struct FRoom
{
	GENERATED_BODY()

	FRoom()
	{
		
	}
	
	FRoom( int Id, ERoomType RoomType )
	{
		this->Id = Id;
		this->RoomType = RoomType;
	}

	int Id = -1;

	bool bIsBuilt = false;
	bool bIsPlaced = false;
	bool bIsOnMap = false;
	bool bIsDynamicCorridor = false;

	ERoomType RoomType;
	TSoftObjectPtr<class UGridMapRoomDataAsset> RoomData;

	TWeakObjectPtr<ALevelInstance> RoomLevel;
	TWeakObjectPtr<AGridMapRoom> RoomActor;
	
	TArray< TArray<ERoomType> > RuleCollection;

	int ParentId = -1;
	uint8 BranchDirection = 0;
	TArray<int> ChildrenIds;

	TMap<FVector, uint8> OpenSockets;
	FVector RoomPosition;
	TArray<FVector> RoomTilePositions;
	TArray<FTileData> RoomTiles;
};

USTRUCT()
struct FOpenSocket
{
	GENERATED_BODY()

	FOpenSocket()
	{
		
	}
	FOpenSocket(FVector _SocketGridPosition, FRoom* _RoomA, FRoom* _RoomB, uint8 _DoorPlacement, FVector _SocketDirectionVector, UTileStyle* _TileStyle)
	{
		SocketGridPosition = _SocketGridPosition;
		DoorPlacement = _DoorPlacement;
		SocketDirectionVector = _SocketDirectionVector;
		
		RoomA = _RoomA;
		RoomB = _RoomB;
		
		TileStyle = _TileStyle;
		if (TileStyle.IsValid())
		{
			TileSize = TileStyle->TileSize;
		}

		DoorWorldPosition = SocketGridPosition*TileSize - SocketDirectionVector*TileSize*.5;
	}
	
	FVector SocketGridPosition = FVector::ZeroVector;
	FVector DoorWorldPosition = FVector::ZeroVector;
	uint8 DoorPlacement = 0;
	FVector SocketDirectionVector = FVector::ZeroVector;
	
	float TileSize = 0.f;

	FRoom* RoomA = nullptr;
	FRoom* RoomB = nullptr;

	TWeakObjectPtr<ALevelDoor> Door;

	TWeakObjectPtr<UTileStyle> TileStyle;
};

UCLASS()
class GRIDMAP_API ABuildingFloorGenerator : public AActor
{
	GENERATED_BODY()

public:
	ABuildingFloorGenerator();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Level Collection")
	UGridmapLevelCollectionDataAsset* LevelCollectionDataAsset;

	UFUNCTION(BlueprintCallable)
	EGenerationEndState Generate();
	
	TWeakObjectPtr<AGridMapRoom> ActiveRoom;
	TWeakObjectPtr<AGridMapRoom> PreviewedRoom;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Void Plane Mesh")
	UStaticMesh* VoidMesh;
private:
	TArray<FRoom> GetFloorLayout();
	void ExpandNecessaryBranches(int ParentId, TArray<FRoom>& FloorLayout);
	// void ExpandRandomCorridorBranches(FRoom *Room, TArray<FRoom>& FloorLayout);

	TArray< TArray<ERoomType> > GetSafeRuleCollections(ERoomType RoomType);
	TArray<int> GetRuleCollectionIdsSortedByFunGrade(TArray< TArray<ERoomType> > &RuleCollections) const;

	bool PlaceRoom(FRoom& Room, TArray<FRoom>& FloorLayout);
	bool PlaceChildRooms(FRoom& Room, TArray<FRoom>& FloorLayout);
	bool GetRoomPlacement(FTransform& RoomTransform, FRoom& Room, TArray<FRoom>& FloorLayout);
	bool CreateDynamicCorridor(FRoom& ParentRoom, FRoom& ChildRoom, TArray<FRoom>& FloorLayout);

	bool FillUpOccupationMap(FRoom& Room);
	void FillVoid();
	
	static FVector GetGlobalTilePosition(const FVector& TilePosition, const int TileSize, const FVector& RoomPosition);

	// Door Creation
	void CreateDoors();

	// Door Events
	UFUNCTION()
	void ChangeActiveRoom(ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn);

	UFUNCTION()
	void ShowFogOfWarOnPreviewedRoom(ALevelDoor* Door, APawn* Pawn);
	
	UFUNCTION()
	void ChangePreviewedRoom(ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn);

	UFUNCTION()
	void ResetPreviewedRoom(ALevelDoor* Door, APawn* Pawn);
	
	TArray<class ALevelInstance*> LevelInstances;
	TArray<UGridMapRoomDataAsset*> RoomDataAssets;

	TMap<ERoomType, uint8> RoomTypeLimits;

	TArray<FVector> LevelOccupationMap;

	TMap<FVector, int> DoorSocketIndexes;
	TArray<FOpenSocket> DoorSocketList;
	
	TArray<ALevelDoor*> LevelDoors;
	
	UInstancedStaticMeshComponent* VoidMeshComponent;

	float LevelTileSize;
};