// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/DataAssets/GridmapLevelCollectionDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridmapLevelCollectionDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridmapLevelCollectionDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridmapLevelCollectionDataAsset_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_ERoomType();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FLevelRoomData();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FRuleCollection();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERoomType;
	static UEnum* ERoomType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ERoomType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ERoomType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_ERoomType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("ERoomType"));
		}
		return Z_Registration_Info_UEnum_ERoomType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<ERoomType>()
	{
		return ERoomType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_ERoomType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_ERoomType_Statics::Enumerators[] = {
		{ "ERoomType::NONE", (int64)ERoomType::NONE },
		{ "ERoomType::BASIC", (int64)ERoomType::BASIC },
		{ "ERoomType::START", (int64)ERoomType::START },
		{ "ERoomType::CORRIDOR", (int64)ERoomType::CORRIDOR },
		{ "ERoomType::MINI_BOSS", (int64)ERoomType::MINI_BOSS },
		{ "ERoomType::BOSS", (int64)ERoomType::BOSS },
		{ "ERoomType::KEY_LOCKED", (int64)ERoomType::KEY_LOCKED },
		{ "ERoomType::PATH_TO_KEY", (int64)ERoomType::PATH_TO_KEY },
		{ "ERoomType::KEY", (int64)ERoomType::KEY },
		{ "ERoomType::SECRET_ROOM_WALL_BLOCKED", (int64)ERoomType::SECRET_ROOM_WALL_BLOCKED },
		{ "ERoomType::MELEE_WEAPON_STASH", (int64)ERoomType::MELEE_WEAPON_STASH },
		{ "ERoomType::POWERFUL_MELEE_WEAPON_STASH", (int64)ERoomType::POWERFUL_MELEE_WEAPON_STASH },
		{ "ERoomType::FIREARM_WEAPON_STASH", (int64)ERoomType::FIREARM_WEAPON_STASH },
		{ "ERoomType::POWERFUL_FIREARM_WEAPON_STASH", (int64)ERoomType::POWERFUL_FIREARM_WEAPON_STASH },
		{ "ERoomType::ITEM_STASH", (int64)ERoomType::ITEM_STASH },
		{ "ERoomType::CLONE_REGENERATION_MACHINE", (int64)ERoomType::CLONE_REGENERATION_MACHINE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_ERoomType_Statics::Enum_MetaDataParams[] = {
		{ "BASIC.DisplayName", "Basic" },
		{ "BASIC.Name", "ERoomType::BASIC" },
		{ "BlueprintType", "true" },
		{ "BOSS.DisplayName", "Boss" },
		{ "BOSS.Name", "ERoomType::BOSS" },
		{ "CLONE_REGENERATION_MACHINE.DisplayName", "Clone Regeneration Machine" },
		{ "CLONE_REGENERATION_MACHINE.Name", "ERoomType::CLONE_REGENERATION_MACHINE" },
		{ "CORRIDOR.DisplayName", "Corridor" },
		{ "CORRIDOR.Name", "ERoomType::CORRIDOR" },
		{ "FIREARM_WEAPON_STASH.DisplayName", "Firearm Weapon Stash" },
		{ "FIREARM_WEAPON_STASH.Name", "ERoomType::FIREARM_WEAPON_STASH" },
		{ "ITEM_STASH.DisplayName", "Item Stash" },
		{ "ITEM_STASH.Name", "ERoomType::ITEM_STASH" },
		{ "KEY.DisplayName", "Key" },
		{ "KEY.Name", "ERoomType::KEY" },
		{ "KEY_LOCKED.DisplayName", "Key Locked" },
		{ "KEY_LOCKED.Name", "ERoomType::KEY_LOCKED" },
		{ "MELEE_WEAPON_STASH.DisplayName", "Melee Weapon Stash" },
		{ "MELEE_WEAPON_STASH.Name", "ERoomType::MELEE_WEAPON_STASH" },
		{ "MINI_BOSS.DisplayName", "Mini Boss" },
		{ "MINI_BOSS.Name", "ERoomType::MINI_BOSS" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
		{ "NONE.DisplayName", "Choose Room Type..." },
		{ "NONE.Name", "ERoomType::NONE" },
		{ "PATH_TO_KEY.DisplayName", "Path to Key" },
		{ "PATH_TO_KEY.Name", "ERoomType::PATH_TO_KEY" },
		{ "POWERFUL_FIREARM_WEAPON_STASH.DisplayName", "Powerful Firearm Weapon Stash" },
		{ "POWERFUL_FIREARM_WEAPON_STASH.Name", "ERoomType::POWERFUL_FIREARM_WEAPON_STASH" },
		{ "POWERFUL_MELEE_WEAPON_STASH.DisplayName", "Powerful Melee Weapon Stash" },
		{ "POWERFUL_MELEE_WEAPON_STASH.Name", "ERoomType::POWERFUL_MELEE_WEAPON_STASH" },
		{ "SECRET_ROOM_WALL_BLOCKED.DisplayName", "Secret Room Wall Blocked" },
		{ "SECRET_ROOM_WALL_BLOCKED.Name", "ERoomType::SECRET_ROOM_WALL_BLOCKED" },
		{ "START.DisplayName", "Start" },
		{ "START.Name", "ERoomType::START" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_ERoomType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"ERoomType",
		"ERoomType",
		Z_Construct_UEnum_GridMap_ERoomType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_ERoomType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_ERoomType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_ERoomType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_ERoomType()
	{
		if (!Z_Registration_Info_UEnum_ERoomType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERoomType.InnerSingleton, Z_Construct_UEnum_GridMap_ERoomType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ERoomType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LevelRoomData;
class UScriptStruct* FLevelRoomData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LevelRoomData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LevelRoomData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelRoomData, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("LevelRoomData"));
	}
	return Z_Registration_Info_UScriptStruct_LevelRoomData.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FLevelRoomData>()
{
	return FLevelRoomData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FLevelRoomData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRoomData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelRoomData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType_MetaData[] = {
		{ "Category", "RoomType" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelRoomData, RoomType), Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType_MetaData)) }; // 807971084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomData_MetaData[] = {
		{ "Category", "LevelRoomData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FLevelRoomData, RoomData), Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelRoomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewProp_RoomData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelRoomData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"LevelRoomData",
		sizeof(FLevelRoomData),
		alignof(FLevelRoomData),
		Z_Construct_UScriptStruct_FLevelRoomData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRoomData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelRoomData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelRoomData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelRoomData()
	{
		if (!Z_Registration_Info_UScriptStruct_LevelRoomData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LevelRoomData.InnerSingleton, Z_Construct_UScriptStruct_FLevelRoomData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_LevelRoomData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuleCollection;
class UScriptStruct* FRuleCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuleCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuleCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuleCollection, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("RuleCollection"));
	}
	return Z_Registration_Info_UScriptStruct_RuleCollection.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FRuleCollection>()
{
	return FRuleCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuleCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomType;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomsToAddChain_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomsToAddChain_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomsToAddChain_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomsToAddChain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleCollection_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuleCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuleCollection>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType_MetaData[] = {
		{ "Category", "RuleCollection" },
		{ "DisplayName", "Target Room" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType = { "RoomType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuleCollection, RoomType), Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType_MetaData)) }; // 807971084
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_Inner = { "RoomsToAddChain", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(nullptr, 0) }; // 807971084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_MetaData[] = {
		{ "Category", "RuleCollection" },
		{ "DisplayName", "Chain of rooms to add to Target Room" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain = { "RoomsToAddChain", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuleCollection, RoomsToAddChain), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_MetaData)) }; // 807971084
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuleCollection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuleCollection_Statics::NewProp_RoomsToAddChain,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuleCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"RuleCollection",
		sizeof(FRuleCollection),
		alignof(FRuleCollection),
		Z_Construct_UScriptStruct_FRuleCollection_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleCollection_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuleCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuleCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuleCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_RuleCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuleCollection.InnerSingleton, Z_Construct_UScriptStruct_FRuleCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuleCollection.InnerSingleton;
	}
	void UGridmapLevelCollectionDataAsset::StaticRegisterNativesUGridmapLevelCollectionDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridmapLevelCollectionDataAsset);
	UClass* Z_Construct_UClass_UGridmapLevelCollectionDataAsset_NoRegister()
	{
		return UGridmapLevelCollectionDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomLimit_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomLimit;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelRooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelRooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelRooms;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomTypeFunGrade_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomTypeFunGrade_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomTypeFunGrade_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeFunGrade_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoomTypeFunGrade;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomTypeLimits_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RoomTypeLimits_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RoomTypeLimits_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTypeLimits_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RoomTypeLimits;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BuildRules_Inner_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_BuildRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BuildRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BuildRules;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Rules;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAssets/GridmapLevelCollectionDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomLimit_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomLimit = { "RoomLimit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, RoomLimit), nullptr, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomLimit_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms_Inner = { "LevelRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLevelRoomData, METADATA_PARAMS(nullptr, 0) }; // 2152236551
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms_MetaData[] = {
		{ "Category", "Level" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms = { "LevelRooms", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, LevelRooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms_MetaData)) }; // 2152236551
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_ValueProp = { "RoomTypeFunGrade", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_Key_KeyProp = { "RoomTypeFunGrade_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(nullptr, 0) }; // 807971084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_MetaData[] = {
		{ "Category", "Rules" },
		{ "DisplayName", "Room Fun Grade" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
		{ "ToolTip", "Used when calculating the fun grade of the level and it's individual paths (branches).\n Relevant range is (0-10)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade = { "RoomTypeFunGrade", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, RoomTypeFunGrade), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_MetaData)) }; // 807971084
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_ValueProp = { "RoomTypeLimits", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_Key_KeyProp = { "RoomTypeLimits_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(nullptr, 0) }; // 807971084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits = { "RoomTypeLimits", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, RoomTypeLimits), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_MetaData)) }; // 807971084
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_Inner = { "BuildRules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GridMap_ERoomType, METADATA_PARAMS(nullptr, 0) }; // 807971084
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_MetaData[] = {
		{ "Category", "Rules" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
		{ "ToolTip", "The rules that will be used to generate the level.\nDefine additions to these rules in the Rule Collections section." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules = { "BuildRules", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, BuildRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_MetaData)) }; // 807971084
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules_Inner = { "Rules", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRuleCollection, METADATA_PARAMS(nullptr, 0) }; // 98176375
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules_MetaData[] = {
		{ "Category", "Rules" },
		{ "DisplayName", "Rule Collections" },
		{ "ModuleRelativePath", "Public/DataAssets/GridmapLevelCollectionDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules = { "Rules", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridmapLevelCollectionDataAsset, Rules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules_MetaData)) }; // 98176375
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_LevelRooms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeFunGrade,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_RoomTypeLimits,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_Inner_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_BuildRules,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::NewProp_Rules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridmapLevelCollectionDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::ClassParams = {
		&UGridmapLevelCollectionDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridmapLevelCollectionDataAsset()
	{
		if (!Z_Registration_Info_UClass_UGridmapLevelCollectionDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridmapLevelCollectionDataAsset.OuterSingleton, Z_Construct_UClass_UGridmapLevelCollectionDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridmapLevelCollectionDataAsset.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<UGridmapLevelCollectionDataAsset>()
	{
		return UGridmapLevelCollectionDataAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridmapLevelCollectionDataAsset);
	UGridmapLevelCollectionDataAsset::~UGridmapLevelCollectionDataAsset() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::EnumInfo[] = {
		{ ERoomType_StaticEnum, TEXT("ERoomType"), &Z_Registration_Info_UEnum_ERoomType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 807971084U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FLevelRoomData::StaticStruct, Z_Construct_UScriptStruct_FLevelRoomData_Statics::NewStructOps, TEXT("LevelRoomData"), &Z_Registration_Info_UScriptStruct_LevelRoomData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLevelRoomData), 2152236551U) },
		{ FRuleCollection::StaticStruct, Z_Construct_UScriptStruct_FRuleCollection_Statics::NewStructOps, TEXT("RuleCollection"), &Z_Registration_Info_UScriptStruct_RuleCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuleCollection), 98176375U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridmapLevelCollectionDataAsset, UGridmapLevelCollectionDataAsset::StaticClass, TEXT("UGridmapLevelCollectionDataAsset"), &Z_Registration_Info_UClass_UGridmapLevelCollectionDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridmapLevelCollectionDataAsset), 675784721U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_817295595(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_GridmapLevelCollectionDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
