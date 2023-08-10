// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GridmapLevelCollectionDataAsset.generated.h"

class UGridMapRoomDataAsset;

UENUM(BlueprintType)
enum class ERoomType : uint8
{
	NONE UMETA(DisplayName = "Choose Room Type..."),
	BASIC UMETA(DisplayName = "Basic"),
	START UMETA(DisplayName = "Start"),
	CORRIDOR UMETA(DisplayName = "Corridor"),

	MINI_BOSS UMETA(DisplayName = "Mini Boss"),
	BOSS UMETA(DisplayName = "Boss"),
	
	KEY_LOCKED UMETA(DisplayName = "Key Locked"),
	PATH_TO_KEY UMETA(DisplayName = "Path to Key"),
	KEY UMETA(DisplayName = "Key"),
	
	SECRET_ROOM_WALL_BLOCKED UMETA(DisplayName = "Secret Room Wall Blocked"),

	MELEE_WEAPON_STASH UMETA(DisplayName = "Melee Weapon Stash"),
	POWERFUL_MELEE_WEAPON_STASH UMETA(DisplayName = "Powerful Melee Weapon Stash"),
	FIREARM_WEAPON_STASH UMETA(DisplayName = "Firearm Weapon Stash"),
	POWERFUL_FIREARM_WEAPON_STASH UMETA(DisplayName = "Powerful Firearm Weapon Stash"),

	ITEM_STASH UMETA(DisplayName = "Item Stash"),
	
	CLONE_REGENERATION_MACHINE UMETA(DisplayName = "Clone Regeneration Machine")
};

USTRUCT(BlueprintType)
struct FLevelRoomData
{
	GENERATED_BODY()

	FLevelRoomData()
	{
		
	}
	FLevelRoomData(ERoomType _RoomType, TSoftObjectPtr<UGridMapRoomDataAsset> _RoomData)
	{
		this->RoomType = _RoomType;
		this->RoomData = _RoomData;
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RoomType")
	ERoomType RoomType = ERoomType::BASIC;
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftObjectPtr<UGridMapRoomDataAsset> RoomData;
};

USTRUCT(BlueprintType)
struct FRuleCollection
{
	GENERATED_BODY()

	FRuleCollection()
	{
		
	}
	
	FRuleCollection(ERoomType RoomType)
	{
		this->RoomType = RoomType;
		this->RoomsToAddChain = TArray<ERoomType>();
	}
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(DisplayName="Target Room"))
	ERoomType RoomType;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta=(DisplayName="Chain of rooms to add to Target Room"))
	TArray<ERoomType> RoomsToAddChain;
};

UCLASS(BlueprintType)
class GRIDMAP_API UGridmapLevelCollectionDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UGridmapLevelCollectionDataAsset();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Level")
	uint8 RoomLimit = 20;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Level")
	TArray<FLevelRoomData> LevelRooms;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Rules", meta=(DisplayName="Room Fun Grade"), meta=(ToolTip="Used when calculating the fun grade of the level and it's individual paths (branches).\n Relevant range is (0-10)."))
	TMap<ERoomType, uint8> RoomTypeFunGrade;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Rules")
	TMap<ERoomType, uint8> RoomTypeLimits;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Rules", meta=(ToolTip="The rules that will be used to generate the level.\nDefine additions to these rules in the Rule Collections section."))
	TArray<ERoomType> BuildRules;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Rules", meta=(DisplayName="Rule Collections"))
	TArray<FRuleCollection> Rules;

	TArray<FLevelRoomData> GetRoomDataArrayOfType(ERoomType RoomType);
	TArray< TArray<ERoomType> > GetRulesOfType(ERoomType RoomType);

private:
	static TMap<ERoomType, uint8> InitRoomTypeFunGrade();
};
