// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/GridmapLevelCollectionDataAsset.h"

UGridmapLevelCollectionDataAsset::UGridmapLevelCollectionDataAsset()
{
	if (RoomTypeFunGrade.Num() < static_cast<uint8>(ERoomType::CLONE_REGENERATION_MACHINE))
	{
		RoomTypeFunGrade = InitRoomTypeFunGrade();
	}
}

TArray<FLevelRoomData> UGridmapLevelCollectionDataAsset::GetRoomDataArrayOfType(ERoomType RoomType)
{
	return LevelRooms.FilterByPredicate([&](const FLevelRoomData &RoomData)
	{
		return RoomData.RoomType == RoomType;
	});
}

TArray< TArray<ERoomType> > UGridmapLevelCollectionDataAsset::GetRulesOfType(ERoomType RoomType)
{
	TArray< TArray<ERoomType> > RulesArray;
	for (FRuleCollection RuleCollection : Rules)
	{
		if (RuleCollection.RoomType == RoomType)
		{
			RulesArray.Add(RuleCollection.RoomsToAddChain);
		}
	}
	return RulesArray;
}

TMap<ERoomType, uint8> UGridmapLevelCollectionDataAsset::InitRoomTypeFunGrade()
{
	TMap<ERoomType, uint8> RoomTypeFunGradeReturn;
	for (uint8 i = 1; i <= static_cast<uint8>(ERoomType::CLONE_REGENERATION_MACHINE); i++)
	{
		const ERoomType RoomType = static_cast<ERoomType>(i);
		if (!RoomTypeFunGradeReturn.Contains(RoomType))
		{
			RoomTypeFunGradeReturn.Add(RoomType, 0);
		}
	}
	return RoomTypeFunGradeReturn;
}
