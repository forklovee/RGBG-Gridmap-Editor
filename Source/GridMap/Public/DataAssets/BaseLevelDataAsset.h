// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DataAssets/GridMapRoomDataAsset.h"
#include "Engine/DataAsset.h"
#include "BaseLevelDataAsset.generated.h"

USTRUCT()
struct FRoomDataToRoomAmount
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	uint16 MaxRoomAmount = 1;
	UPROPERTY(EditAnywhere)
	UGridMapRoomDataAsset* RoomData;
	UPROPERTY(EditAnywhere)
	float RoomSpawnProbability = 0;
};

UCLASS()
class GRIDMAP_API UBaseLevelDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	/**
	 *Name of the level.
	 *
	 *Has to be UNIQUE for each level in COMPILATION!
	 */
	UPROPERTY(EditAnywhere, Category="Basic Data")
	FString LevelName = "Level";
	/**
	 *
	 *Used to determine the mood of a level, hostiles' behaviour and more...
	 */
	UPROPERTY(EditAnywhere, Category="Basic Data")
	uint16 StageId = 0;
	UPROPERTY(EditAnywhere, Category="Level Rooms")
	/**
	 *
	 *Set a room you want to make the "center room".
	 *In many cases that would be a lobby with a elevator or some stairs
	 */
	uint16 StartRoomId = 0;
	/**
	 *
	 *Rooms used to generate a level.
	 *Max amount and probability rate are crucial for expected effects.
	 *
	 *If probability rate is less than 100 (which guarantees that a room will show up in the level), then Max amount is considered as a roll amount.
	 *
	 *eg. Room: max amount = 3, probability = 80.
	 *There will be 3 rolls and if roll value is less or equal to 80, the room will spawn.
	 */
	UPROPERTY(EditAnywhere, Category="Level Rooms")
	TArray<FRoomDataToRoomAmount> LevelRooms = {};

};
