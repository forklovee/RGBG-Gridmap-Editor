// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TileStyle.h"
#include "Engine/DataAsset.h"
#include "GridMapRoomDataAsset.generated.h"

UENUM(BlueprintType)
enum class EWallVariant : uint8
{
	FLOOR = 0,
	UP = 1,
	RIGHT = 2,
	UPRIGHT = 3,
	DOWN = 4,
	UPDOWN = 5,
	RIGHTDOWN = 6,
	UPRIGHTDOWN = 7,
	LEFT = 8,
	UPLEFT = 9,
	LEFTRIGHT = 10,
	LEFTUPRIGHT = 11,
	LEFTDOWN = 12,
	UPLEFTDOWN = 13,
	LEFTDOWNRIGHT = 14
};

UENUM()
enum class ESocketDirection : uint8
{
	ZERO = 0,
	UP = 1,
	RIGHT = 2,
	DOWN = 3,
	LEFT = 4
};

UENUM(BlueprintType)
enum class EDoorType : uint8
{
	NONE = 0,
	SINGLE = 1,
	DOUBLE = 2
};

UENUM()
enum class EAssetPackType
{
	DEFAULT = 0,
	HEALTH = 1
};

USTRUCT(BlueprintType)
struct GRIDMAP_API FTileData
{
	GENERATED_BODY();
	FTileData()
	{
		Position = FVector::ZeroVector;
		TileStyle = nullptr;
		MeshType = EMeshType::NONE;
		InstancedStaticMeshComponent = nullptr;
		CornerInstancedStaticMeshComponent = nullptr;
		DoorPlacement = 0;
		InGame_DoorPlacement = 0;

		YawWallRotation = 0.f;
		WallPlacement = 0;
	};
	FTileData(FVector _Position, UTileStyle* _TileStyle)
	{
		Position = _Position;
		TileStyle = _TileStyle;
		MeshType = EMeshType::NONE;
		InstancedStaticMeshComponent = nullptr;
		CornerInstancedStaticMeshComponent = nullptr;
		DoorPlacement = 0;
		InGame_DoorPlacement = 0;
		
		YawWallRotation = 0.f;
		WallPlacement = 0;
	};

	FTileData(FVector _Position, UTileStyle* _TileStyle, EMeshType _MeshType, UInstancedStaticMeshComponent* _InstancedStaticMeshComponent)
	{
		Position = _Position;
		TileStyle = _TileStyle;
		MeshType = _MeshType;
		InstancedStaticMeshComponent = _InstancedStaticMeshComponent;
		CornerInstancedStaticMeshComponent = nullptr;
		DoorPlacement = 0;
		InGame_DoorPlacement = 0;

		YawWallRotation = 0.f;
		WallPlacement = 0;
	};

	FTileData(const FTileData* Other_TileData)
	{
		Position = Other_TileData->Position;
		TileStyle = Other_TileData->TileStyle;
		MeshType = Other_TileData->MeshType;
		InstancedStaticMeshComponent = nullptr;
		CornerInstancedStaticMeshComponent = nullptr;
		DoorPlacement = Other_TileData->DoorPlacement;
		WallPlacement = Other_TileData->WallPlacement;
		InGame_DoorPlacement = 0;

		YawWallRotation = 0.f;
		WallPlacement = 0;
	}
	UPROPERTY(EditAnywhere)
	FVector Position = FVector::ZeroVector;
	UPROPERTY(EditAnywhere)
	UTileStyle* TileStyle;
	UPROPERTY(VisibleAnywhere)
	EMeshType MeshType;
	UPROPERTY(VisibleAnywhere)
	uint8 DoorPlacement;
	UPROPERTY(EditAnywhere)
	uint8 InGame_DoorPlacement;
	UPROPERTY(VisibleAnywhere)
	double YawWallRotation = 0.f;
	UPROPERTY(VisibleAnywhere)
	uint8 WallPlacement = 0.f;
	
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent;
	UInstancedStaticMeshComponent* CornerInstancedStaticMeshComponent;
};

UCLASS()
class GRIDMAP_API UGridMapRoomDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Elevator Properties")
	bool HasElevator = false;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Elevator Properties", meta=(EditCondition="HasElevator", EditConditionHides))
	UClass* ElevatorObjectClass = nullptr;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Elevator Properties", meta=(EditCondition="HasElevator", EditConditionHides))
	FVector ElevatorPosition = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Elevator Properties", meta=(EditCondition="HasElevator", EditConditionHides))
	float ElevatorYawRotation = 0.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Basic Properties")
	FString RoomName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Basic Properties")
	TSoftObjectPtr<UWorld> RoomLevel;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Basic Properties")
	int BaseTileSize = -100;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Basic Properties")
	FVector OverlapVolumePosition;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Basic Properties")
	FVector OverlapVolumeExtent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	TArray<FTileData> RoomTiles;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Mesh Collection")
	TArray<TSoftObjectPtr<UTileStyle>> TileStyles;
	
	/** Door objects used in room. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Mesh Collection")
	TMap<EDoorType, TSoftObjectPtr<UStaticMesh>> DoorObjects = {};
	
	static int GetRandomSocketDirection();
	static int GetOppositeSocketDirection(const uint8 SocketDirection);
	static FVector SocketDirectionToVector(const uint8 SocketDirection);
	TArray<FTileData>& GetRoomTiles();
	TArray<FTileData> GetRoomTilesCopy();

	TSet<int>& GetRoomBoundingTiles();
	
	TArray<FTileData> GetDoorSocketsOfDirection(const uint8 SocketDirection);

	FTileData* GetTileDataAtPosition(const FVector& Position);
	
	int& GetTileSize();
	void SetTileSize(int NewTileSize);

	void UpdateRoomTilesIndexMap();

	bool TileExists(const FVector& TilePosition);
private:
	FVector4d RoomExtends = FVector4d::Zero();
	FVector4d TileMapBounds = FVector4d::Zero();

	TMap<FVector, int> RoomTilesIndexMap = {};
	TSet<int> RoomBoundingTiles = {};
};
