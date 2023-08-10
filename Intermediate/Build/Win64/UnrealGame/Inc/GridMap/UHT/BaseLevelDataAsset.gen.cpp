// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/DataAssets/BaseLevelDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseLevelDataAsset() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_UBaseLevelDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_UBaseLevelDataAsset_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FRoomDataToRoomAmount();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount;
class UScriptStruct* FRoomDataToRoomAmount::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoomDataToRoomAmount, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("RoomDataToRoomAmount"));
	}
	return Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FRoomDataToRoomAmount>()
{
	return FRoomDataToRoomAmount::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxRoomAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_MaxRoomAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RoomData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomSpawnProbability_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RoomSpawnProbability;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoomDataToRoomAmount>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_MaxRoomAmount_MetaData[] = {
		{ "Category", "RoomDataToRoomAmount" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_MaxRoomAmount = { "MaxRoomAmount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomDataToRoomAmount, MaxRoomAmount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_MaxRoomAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_MaxRoomAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomData_MetaData[] = {
		{ "Category", "RoomDataToRoomAmount" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomDataToRoomAmount, RoomData), Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomSpawnProbability_MetaData[] = {
		{ "Category", "RoomDataToRoomAmount" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomSpawnProbability = { "RoomSpawnProbability", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRoomDataToRoomAmount, RoomSpawnProbability), METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomSpawnProbability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomSpawnProbability_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_MaxRoomAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewProp_RoomSpawnProbability,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"RoomDataToRoomAmount",
		sizeof(FRoomDataToRoomAmount),
		alignof(FRoomDataToRoomAmount),
		Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoomDataToRoomAmount()
	{
		if (!Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.InnerSingleton, Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount.InnerSingleton;
	}
	void UBaseLevelDataAsset::StaticRegisterNativesUBaseLevelDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseLevelDataAsset);
	UClass* Z_Construct_UClass_UBaseLevelDataAsset_NoRegister()
	{
		return UBaseLevelDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLevelDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StageId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StageId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartRoomId_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_StartRoomId;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelRooms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelRooms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelRooms;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLevelDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLevelDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/BaseLevelDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelName_MetaData[] = {
		{ "Category", "Basic Data" },
		{ "Comment", "/**\n\x09 *Name of the level.\n\x09 *\n\x09 *Has to be UNIQUE for each level in COMPILATION!\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
		{ "ToolTip", "Name of the level.\n\nHas to be UNIQUE for each level in COMPILATION!" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseLevelDataAsset, LevelName), METADATA_PARAMS(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StageId_MetaData[] = {
		{ "Category", "Basic Data" },
		{ "Comment", "/**\n\x09 *\n\x09 *Used to determine the mood of a level, hostiles' behaviour and more...\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
		{ "ToolTip", "Used to determine the mood of a level, hostiles' behaviour and more..." },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StageId = { "StageId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseLevelDataAsset, StageId), METADATA_PARAMS(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StageId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StartRoomId_MetaData[] = {
		{ "Category", "Level Rooms" },
		{ "Comment", "/**\n\x09 *\n\x09 *Set a room you want to make the \"center room\".\n\x09 *In many cases that would be a lobby with a elevator or some stairs\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
		{ "ToolTip", "Set a room you want to make the \"center room\".\nIn many cases that would be a lobby with a elevator or some stairs" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StartRoomId = { "StartRoomId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseLevelDataAsset, StartRoomId), METADATA_PARAMS(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StartRoomId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StartRoomId_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms_Inner = { "LevelRooms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRoomDataToRoomAmount, METADATA_PARAMS(nullptr, 0) }; // 4019699333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms_MetaData[] = {
		{ "Category", "Level Rooms" },
		{ "Comment", "/**\n\x09 *\n\x09 *Rooms used to generate a level.\n\x09 *Max amount and probability rate are crucial for expected effects.\n\x09 *\n\x09 *If probability rate is less than 100 (which guarantees that a room will show up in the level), then Max amount is considered as a roll amount.\n\x09 *\n\x09 *eg. Room: max amount = 3, probability = 80.\n\x09 *There will be 3 rolls and if roll value is less or equal to 80, the room will spawn.\n\x09 */" },
		{ "ModuleRelativePath", "Public/DataAssets/BaseLevelDataAsset.h" },
		{ "ToolTip", "Rooms used to generate a level.\nMax amount and probability rate are crucial for expected effects.\n\nIf probability rate is less than 100 (which guarantees that a room will show up in the level), then Max amount is considered as a roll amount.\n\neg. Room: max amount = 3, probability = 80.\nThere will be 3 rolls and if roll value is less or equal to 80, the room will spawn." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms = { "LevelRooms", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBaseLevelDataAsset, LevelRooms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms_MetaData)) }; // 4019699333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseLevelDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StageId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_StartRoomId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseLevelDataAsset_Statics::NewProp_LevelRooms,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLevelDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLevelDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseLevelDataAsset_Statics::ClassParams = {
		&UBaseLevelDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseLevelDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLevelDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLevelDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLevelDataAsset()
	{
		if (!Z_Registration_Info_UClass_UBaseLevelDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseLevelDataAsset.OuterSingleton, Z_Construct_UClass_UBaseLevelDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseLevelDataAsset.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<UBaseLevelDataAsset>()
	{
		return UBaseLevelDataAsset::StaticClass();
	}
	UBaseLevelDataAsset::UBaseLevelDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLevelDataAsset);
	UBaseLevelDataAsset::~UBaseLevelDataAsset() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FRoomDataToRoomAmount::StaticStruct, Z_Construct_UScriptStruct_FRoomDataToRoomAmount_Statics::NewStructOps, TEXT("RoomDataToRoomAmount"), &Z_Registration_Info_UScriptStruct_RoomDataToRoomAmount, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoomDataToRoomAmount), 4019699333U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseLevelDataAsset, UBaseLevelDataAsset::StaticClass, TEXT("UBaseLevelDataAsset"), &Z_Registration_Info_UClass_UBaseLevelDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseLevelDataAsset), 2135870001U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_740492359(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_DataAssets_BaseLevelDataAsset_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
