// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/DataAssets/GridMapRoomDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridMapRoomDataAsset() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridMapRoomDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UTileStyle_NoRegister();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EAssetPackType();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EDoorType();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EMeshType();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_ESocketDirection();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EWallVariant();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FTileData();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallVariant;
	static UEnum* EWallVariant_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallVariant.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallVariant.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EWallVariant, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EWallVariant"));
		}
		return Z_Registration_Info_UEnum_EWallVariant.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EWallVariant>()
	{
		return EWallVariant_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EWallVariant_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enumerators[] = {
		{ "EWallVariant::FLOOR", (int64)EWallVariant::FLOOR },
		{ "EWallVariant::UP", (int64)EWallVariant::UP },
		{ "EWallVariant::RIGHT", (int64)EWallVariant::RIGHT },
		{ "EWallVariant::UPRIGHT", (int64)EWallVariant::UPRIGHT },
		{ "EWallVariant::DOWN", (int64)EWallVariant::DOWN },
		{ "EWallVariant::UPDOWN", (int64)EWallVariant::UPDOWN },
		{ "EWallVariant::RIGHTDOWN", (int64)EWallVariant::RIGHTDOWN },
		{ "EWallVariant::UPRIGHTDOWN", (int64)EWallVariant::UPRIGHTDOWN },
		{ "EWallVariant::LEFT", (int64)EWallVariant::LEFT },
		{ "EWallVariant::UPLEFT", (int64)EWallVariant::UPLEFT },
		{ "EWallVariant::LEFTRIGHT", (int64)EWallVariant::LEFTRIGHT },
		{ "EWallVariant::LEFTUPRIGHT", (int64)EWallVariant::LEFTUPRIGHT },
		{ "EWallVariant::LEFTDOWN", (int64)EWallVariant::LEFTDOWN },
		{ "EWallVariant::UPLEFTDOWN", (int64)EWallVariant::UPLEFTDOWN },
		{ "EWallVariant::LEFTDOWNRIGHT", (int64)EWallVariant::LEFTDOWNRIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DOWN.Name", "EWallVariant::DOWN" },
		{ "FLOOR.Name", "EWallVariant::FLOOR" },
		{ "LEFT.Name", "EWallVariant::LEFT" },
		{ "LEFTDOWN.Name", "EWallVariant::LEFTDOWN" },
		{ "LEFTDOWNRIGHT.Name", "EWallVariant::LEFTDOWNRIGHT" },
		{ "LEFTRIGHT.Name", "EWallVariant::LEFTRIGHT" },
		{ "LEFTUPRIGHT.Name", "EWallVariant::LEFTUPRIGHT" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
		{ "RIGHT.Name", "EWallVariant::RIGHT" },
		{ "RIGHTDOWN.Name", "EWallVariant::RIGHTDOWN" },
		{ "UP.Name", "EWallVariant::UP" },
		{ "UPDOWN.Name", "EWallVariant::UPDOWN" },
		{ "UPLEFT.Name", "EWallVariant::UPLEFT" },
		{ "UPLEFTDOWN.Name", "EWallVariant::UPLEFTDOWN" },
		{ "UPRIGHT.Name", "EWallVariant::UPRIGHT" },
		{ "UPRIGHTDOWN.Name", "EWallVariant::UPRIGHTDOWN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EWallVariant_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EWallVariant",
		"EWallVariant",
		Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EWallVariant_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EWallVariant()
	{
		if (!Z_Registration_Info_UEnum_EWallVariant.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallVariant.InnerSingleton, Z_Construct_UEnum_GridMap_EWallVariant_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallVariant.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESocketDirection;
	static UEnum* ESocketDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESocketDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESocketDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_ESocketDirection, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("ESocketDirection"));
		}
		return Z_Registration_Info_UEnum_ESocketDirection.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<ESocketDirection>()
	{
		return ESocketDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_ESocketDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enumerators[] = {
		{ "ESocketDirection::ZERO", (int64)ESocketDirection::ZERO },
		{ "ESocketDirection::UP", (int64)ESocketDirection::UP },
		{ "ESocketDirection::RIGHT", (int64)ESocketDirection::RIGHT },
		{ "ESocketDirection::DOWN", (int64)ESocketDirection::DOWN },
		{ "ESocketDirection::LEFT", (int64)ESocketDirection::LEFT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enum_MetaDataParams[] = {
		{ "DOWN.Name", "ESocketDirection::DOWN" },
		{ "LEFT.Name", "ESocketDirection::LEFT" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
		{ "RIGHT.Name", "ESocketDirection::RIGHT" },
		{ "UP.Name", "ESocketDirection::UP" },
		{ "ZERO.Name", "ESocketDirection::ZERO" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_ESocketDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"ESocketDirection",
		"ESocketDirection",
		Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_ESocketDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_ESocketDirection()
	{
		if (!Z_Registration_Info_UEnum_ESocketDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESocketDirection.InnerSingleton, Z_Construct_UEnum_GridMap_ESocketDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESocketDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDoorType;
	static UEnum* EDoorType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDoorType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDoorType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EDoorType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EDoorType"));
		}
		return Z_Registration_Info_UEnum_EDoorType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EDoorType>()
	{
		return EDoorType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EDoorType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EDoorType_Statics::Enumerators[] = {
		{ "EDoorType::NONE", (int64)EDoorType::NONE },
		{ "EDoorType::SINGLE", (int64)EDoorType::SINGLE },
		{ "EDoorType::DOUBLE", (int64)EDoorType::DOUBLE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EDoorType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DOUBLE.Name", "EDoorType::DOUBLE" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
		{ "NONE.Name", "EDoorType::NONE" },
		{ "SINGLE.Name", "EDoorType::SINGLE" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EDoorType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EDoorType",
		"EDoorType",
		Z_Construct_UEnum_GridMap_EDoorType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EDoorType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EDoorType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EDoorType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EDoorType()
	{
		if (!Z_Registration_Info_UEnum_EDoorType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDoorType.InnerSingleton, Z_Construct_UEnum_GridMap_EDoorType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDoorType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAssetPackType;
	static UEnum* EAssetPackType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAssetPackType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAssetPackType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EAssetPackType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EAssetPackType"));
		}
		return Z_Registration_Info_UEnum_EAssetPackType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EAssetPackType>()
	{
		return EAssetPackType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EAssetPackType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enumerators[] = {
		{ "EAssetPackType::DEFAULT", (int64)EAssetPackType::DEFAULT },
		{ "EAssetPackType::HEALTH", (int64)EAssetPackType::HEALTH },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enum_MetaDataParams[] = {
		{ "DEFAULT.Name", "EAssetPackType::DEFAULT" },
		{ "HEALTH.Name", "EAssetPackType::HEALTH" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EAssetPackType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EAssetPackType",
		"EAssetPackType",
		Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EAssetPackType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EAssetPackType()
	{
		if (!Z_Registration_Info_UEnum_EAssetPackType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAssetPackType.InnerSingleton, Z_Construct_UEnum_GridMap_EAssetPackType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAssetPackType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TileData;
class UScriptStruct* FTileData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TileData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TileData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTileData, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("TileData"));
	}
	return Z_Registration_Info_UScriptStruct_TileData.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FTileData>()
{
	return FTileData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTileData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileStyle_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TileStyle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DoorPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InGame_DoorPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_InGame_DoorPlacement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawWallRotation_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_YawWallRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WallPlacement_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WallPlacement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTileData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileStyle_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileStyle = { "TileStyle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, TileStyle), Z_Construct_UClass_UTileStyle_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileStyle_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, MeshType), Z_Construct_UEnum_GridMap_EMeshType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType_MetaData)) }; // 1213854849
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_DoorPlacement_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_DoorPlacement = { "DoorPlacement", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, DoorPlacement), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_DoorPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_DoorPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_InGame_DoorPlacement_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_InGame_DoorPlacement = { "InGame_DoorPlacement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, InGame_DoorPlacement), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_InGame_DoorPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_InGame_DoorPlacement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_YawWallRotation_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_YawWallRotation = { "YawWallRotation", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, YawWallRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_YawWallRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_YawWallRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WallPlacement_MetaData[] = {
		{ "Category", "TileData" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WallPlacement = { "WallPlacement", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTileData, WallPlacement), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WallPlacement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WallPlacement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTileData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_Position,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_TileStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_DoorPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_InGame_DoorPlacement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_YawWallRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTileData_Statics::NewProp_WallPlacement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"TileData",
		sizeof(FTileData),
		alignof(FTileData),
		Z_Construct_UScriptStruct_FTileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTileData()
	{
		if (!Z_Registration_Info_UScriptStruct_TileData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TileData.InnerSingleton, Z_Construct_UScriptStruct_FTileData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TileData.InnerSingleton;
	}
	void UGridMapRoomDataAsset::StaticRegisterNativesUGridMapRoomDataAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridMapRoomDataAsset);
	UClass* Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister()
	{
		return UGridMapRoomDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_UGridMapRoomDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HasElevator_MetaData[];
#endif
		static void NewProp_HasElevator_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HasElevator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorObjectClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ElevatorObjectClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ElevatorPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorYawRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ElevatorYawRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RoomName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomLevel_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoomLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTileSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BaseTileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapVolumePosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapVolumePosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlapVolumeExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlapVolumeExtent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RoomTiles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomTiles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RoomTiles;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_TileStyles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileStyles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TileStyles;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DoorObjects_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DoorObjects_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DoorObjects_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorObjects_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DoorObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridMapRoomDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DataAssets/GridMapRoomDataAsset.h" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator_MetaData[] = {
		{ "Category", "Elevator Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator_SetBit(void* Obj)
	{
		((UGridMapRoomDataAsset*)Obj)->HasElevator = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator = { "HasElevator", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGridMapRoomDataAsset), &Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorObjectClass_MetaData[] = {
		{ "Category", "Elevator Properties" },
		{ "EditCondition", "HasElevator" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorObjectClass = { "ElevatorObjectClass", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, ElevatorObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorObjectClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorObjectClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorPosition_MetaData[] = {
		{ "Category", "Elevator Properties" },
		{ "EditCondition", "HasElevator" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorPosition = { "ElevatorPosition", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, ElevatorPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorYawRotation_MetaData[] = {
		{ "Category", "Elevator Properties" },
		{ "EditCondition", "HasElevator" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorYawRotation = { "ElevatorYawRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, ElevatorYawRotation), METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorYawRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorYawRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomName_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomName = { "RoomName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, RoomName), METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomLevel_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomLevel = { "RoomLevel", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, RoomLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_BaseTileSize_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_BaseTileSize = { "BaseTileSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, BaseTileSize), METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_BaseTileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_BaseTileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumePosition_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumePosition = { "OverlapVolumePosition", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, OverlapVolumePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumePosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumeExtent_MetaData[] = {
		{ "Category", "Basic Properties" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumeExtent = { "OverlapVolumeExtent", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, OverlapVolumeExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumeExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumeExtent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles_Inner = { "RoomTiles", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTileData, METADATA_PARAMS(nullptr, 0) }; // 3232653088
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles_MetaData[] = {
		{ "Category", "GridMapRoomDataAsset" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles = { "RoomTiles", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, RoomTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles_MetaData)) }; // 3232653088
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles_Inner = { "TileStyles", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTileStyle_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles_MetaData[] = {
		{ "Category", "Mesh Collection" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles = { "TileStyles", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, TileStyles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_ValueProp = { "DoorObjects", nullptr, (EPropertyFlags)0x0004000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_Key_KeyProp = { "DoorObjects_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_GridMap_EDoorType, METADATA_PARAMS(nullptr, 0) }; // 2661917704
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_MetaData[] = {
		{ "Category", "Mesh Collection" },
		{ "Comment", "/** Door objects used in room. */" },
		{ "ModuleRelativePath", "Public/DataAssets/GridMapRoomDataAsset.h" },
		{ "ToolTip", "Door objects used in room." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects = { "DoorObjects", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGridMapRoomDataAsset, DoorObjects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_MetaData)) }; // 2661917704
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGridMapRoomDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_HasElevator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_ElevatorYawRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_BaseTileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumePosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_OverlapVolumeExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_RoomTiles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_TileStyles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGridMapRoomDataAsset_Statics::NewProp_DoorObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridMapRoomDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridMapRoomDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridMapRoomDataAsset_Statics::ClassParams = {
		&UGridMapRoomDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGridMapRoomDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapRoomDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridMapRoomDataAsset()
	{
		if (!Z_Registration_Info_UClass_UGridMapRoomDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridMapRoomDataAsset.OuterSingleton, Z_Construct_UClass_UGridMapRoomDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridMapRoomDataAsset.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<UGridMapRoomDataAsset>()
	{
		return UGridMapRoomDataAsset::StaticClass();
	}
	UGridMapRoomDataAsset::UGridMapRoomDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridMapRoomDataAsset);
	UGridMapRoomDataAsset::~UGridMapRoomDataAsset() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::EnumInfo[] = {
		{ EWallVariant_StaticEnum, TEXT("EWallVariant"), &Z_Registration_Info_UEnum_EWallVariant, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3368443913U) },
		{ ESocketDirection_StaticEnum, TEXT("ESocketDirection"), &Z_Registration_Info_UEnum_ESocketDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4097286637U) },
		{ EDoorType_StaticEnum, TEXT("EDoorType"), &Z_Registration_Info_UEnum_EDoorType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2661917704U) },
		{ EAssetPackType_StaticEnum, TEXT("EAssetPackType"), &Z_Registration_Info_UEnum_EAssetPackType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2102851543U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ScriptStructInfo[] = {
		{ FTileData::StaticStruct, Z_Construct_UScriptStruct_FTileData_Statics::NewStructOps, TEXT("TileData"), &Z_Registration_Info_UScriptStruct_TileData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTileData), 3232653088U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridMapRoomDataAsset, UGridMapRoomDataAsset::StaticClass, TEXT("UGridMapRoomDataAsset"), &Z_Registration_Info_UClass_UGridMapRoomDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridMapRoomDataAsset), 2998959394U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_4206473172(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_DataAssets_GridMapRoomDataAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
