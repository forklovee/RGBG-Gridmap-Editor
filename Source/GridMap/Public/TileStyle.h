// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TileStyle.generated.h"

UENUM()
enum class EMeshType : uint8
{
	NONE = 254,
	
	FLOOR = 0,
	ONEWALL = 1,
	CORNERWALL = 2,
	TUNNELWALL = 3,
	UWALL = 4,

	ONEWALL_UP = 11,
	
	CORNERWALL_UP = 21,
	CORNERWALL_RIGHT = 22,
	CORNERWALL_UPRIGHT = 23,

	TUNNELWALL_UP = 31,
	TUNNELWALL_UPDOWN = 32,
	
	UWALL_UP = 41,
	UWALL_RIGHT = 42,
	UWALL_UPRIGHT = 44,
	UWALL_UPDOWN = 45,
	UWALL_FULL = 47,

	CORNER = 48,
	FOG_OF_WAR = 49
};
UENUM()
enum class EWallType : uint8
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
enum class E4WallType : uint8
{
	UP = 1,
	RIGHT = 2,
	DOWN = 4,
	LEFT = 8,
};
/**
 * 
 */
UCLASS()
class GRIDMAP_API UTileStyle : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category="Style Properties")
	int32 TileSize = 100;
	
	UPROPERTY(EditAnywhere, Category="Floor Mesh")
	UStaticMesh* FloorMesh;
	UPROPERTY(EditAnywhere, Category="Wall Meshes")
	UStaticMesh* OneWallMesh;
	UPROPERTY(EditAnywhere, Category="Wall Meshes")
	UStaticMesh* CornerWallMesh;
	UPROPERTY(EditAnywhere, Category="Wall Meshes")
	UStaticMesh* TunnelWallMesh;
	UPROPERTY(EditAnywhere, Category="Wall Meshes")
	UStaticMesh* UWallMesh;

	UPROPERTY(EditAnywhere, Category="Wall Corner Meshes")
	UStaticMesh* OneCornerMesh;
	UPROPERTY(EditAnywhere, Category="Wall Corner Meshes")
	UStaticMesh* TwoCornerMesh;
	UPROPERTY(EditAnywhere, Category="Wall Corner Meshes")
	UStaticMesh* TwoCornerDiagonalMesh;
	UPROPERTY(EditAnywhere, Category="Wall Corner Meshes")
	UStaticMesh* ThreeCornerMesh;
	UPROPERTY(EditAnywhere, Category="Wall Corner Meshes")
	UStaticMesh* FullCornerMesh;
	
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* OneWallDoorSlot;
	
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* CornerWallDoorSlotUp;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* CornerWallDoorSlotRight;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* CornerWallDoorSlotUpRight;
	
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* UWallDoorSlotUp;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* UWallDoorSlotUpRight;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* UWallDoorSlotRight;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* UWallDoorSlotUpDown;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* UWallDoorSlotFull;

	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* TunnelWallDoorSlotUp;
	UPROPERTY(EditAnywhere, Category="Wall Door Slot Meshes")
	UStaticMesh* TunnelWallDoorSlotUpDown;

	UPROPERTY(EditAnywhere, Category="Fog of War")
	UStaticMesh* FogOfWarPlane;
	UPROPERTY(EditAnywhere, Category="Fog of War")
	UMaterial* FogOfWarMaterial;

	UPROPERTY(EditAnywhere, Category="Door")
	TSubclassOf<class ALevelDoor> SingleLevelDoorAsset;

	UPROPERTY(EditAnywhere, Category="Door")
	TSubclassOf<ALevelDoor> DoubleLevelDoorAsset;
	
	TObjectPtr<UStaticMesh> ThumbnailMesh;
	
	UStaticMesh* GetThumbnailMesh();
	TSoftObjectPtr<UStaticMesh> GetRandomTileOfAdjacency(uint8 Adjacency);
	EMeshType GetMeshType(uint8& WallVariant, uint8& DoorPlacement, double& Rotation, uint8& MirrorX);
};
