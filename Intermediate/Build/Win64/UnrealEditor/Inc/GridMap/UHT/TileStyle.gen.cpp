// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/TileStyle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileStyle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_ALevelDoor_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UTileStyle();
	GRIDMAP_API UClass* Z_Construct_UClass_UTileStyle_NoRegister();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_E4WallType();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EMeshType();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EWallType();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshType;
	static UEnum* EMeshType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EMeshType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EMeshType"));
		}
		return Z_Registration_Info_UEnum_EMeshType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EMeshType>()
	{
		return EMeshType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EMeshType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EMeshType_Statics::Enumerators[] = {
		{ "EMeshType::NONE", (int64)EMeshType::NONE },
		{ "EMeshType::FLOOR", (int64)EMeshType::FLOOR },
		{ "EMeshType::ONEWALL", (int64)EMeshType::ONEWALL },
		{ "EMeshType::CORNERWALL", (int64)EMeshType::CORNERWALL },
		{ "EMeshType::TUNNELWALL", (int64)EMeshType::TUNNELWALL },
		{ "EMeshType::UWALL", (int64)EMeshType::UWALL },
		{ "EMeshType::ONEWALL_UP", (int64)EMeshType::ONEWALL_UP },
		{ "EMeshType::CORNERWALL_UP", (int64)EMeshType::CORNERWALL_UP },
		{ "EMeshType::CORNERWALL_RIGHT", (int64)EMeshType::CORNERWALL_RIGHT },
		{ "EMeshType::CORNERWALL_UPRIGHT", (int64)EMeshType::CORNERWALL_UPRIGHT },
		{ "EMeshType::TUNNELWALL_UP", (int64)EMeshType::TUNNELWALL_UP },
		{ "EMeshType::TUNNELWALL_UPDOWN", (int64)EMeshType::TUNNELWALL_UPDOWN },
		{ "EMeshType::UWALL_UP", (int64)EMeshType::UWALL_UP },
		{ "EMeshType::UWALL_RIGHT", (int64)EMeshType::UWALL_RIGHT },
		{ "EMeshType::UWALL_UPRIGHT", (int64)EMeshType::UWALL_UPRIGHT },
		{ "EMeshType::UWALL_UPDOWN", (int64)EMeshType::UWALL_UPDOWN },
		{ "EMeshType::UWALL_FULL", (int64)EMeshType::UWALL_FULL },
		{ "EMeshType::CORNER", (int64)EMeshType::CORNER },
		{ "EMeshType::FOG_OF_WAR", (int64)EMeshType::FOG_OF_WAR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EMeshType_Statics::Enum_MetaDataParams[] = {
		{ "CORNER.Name", "EMeshType::CORNER" },
		{ "CORNERWALL.Name", "EMeshType::CORNERWALL" },
		{ "CORNERWALL_RIGHT.Name", "EMeshType::CORNERWALL_RIGHT" },
		{ "CORNERWALL_UP.Name", "EMeshType::CORNERWALL_UP" },
		{ "CORNERWALL_UPRIGHT.Name", "EMeshType::CORNERWALL_UPRIGHT" },
		{ "FLOOR.Name", "EMeshType::FLOOR" },
		{ "FOG_OF_WAR.Name", "EMeshType::FOG_OF_WAR" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
		{ "NONE.Name", "EMeshType::NONE" },
		{ "ONEWALL.Name", "EMeshType::ONEWALL" },
		{ "ONEWALL_UP.Name", "EMeshType::ONEWALL_UP" },
		{ "TUNNELWALL.Name", "EMeshType::TUNNELWALL" },
		{ "TUNNELWALL_UP.Name", "EMeshType::TUNNELWALL_UP" },
		{ "TUNNELWALL_UPDOWN.Name", "EMeshType::TUNNELWALL_UPDOWN" },
		{ "UWALL.Name", "EMeshType::UWALL" },
		{ "UWALL_FULL.Name", "EMeshType::UWALL_FULL" },
		{ "UWALL_RIGHT.Name", "EMeshType::UWALL_RIGHT" },
		{ "UWALL_UP.Name", "EMeshType::UWALL_UP" },
		{ "UWALL_UPDOWN.Name", "EMeshType::UWALL_UPDOWN" },
		{ "UWALL_UPRIGHT.Name", "EMeshType::UWALL_UPRIGHT" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EMeshType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EMeshType",
		"EMeshType",
		Z_Construct_UEnum_GridMap_EMeshType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EMeshType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EMeshType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EMeshType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EMeshType()
	{
		if (!Z_Registration_Info_UEnum_EMeshType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshType.InnerSingleton, Z_Construct_UEnum_GridMap_EMeshType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWallType;
	static UEnum* EWallType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWallType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EWallType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EWallType"));
		}
		return Z_Registration_Info_UEnum_EWallType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EWallType>()
	{
		return EWallType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EWallType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EWallType_Statics::Enumerators[] = {
		{ "EWallType::FLOOR", (int64)EWallType::FLOOR },
		{ "EWallType::UP", (int64)EWallType::UP },
		{ "EWallType::RIGHT", (int64)EWallType::RIGHT },
		{ "EWallType::UPRIGHT", (int64)EWallType::UPRIGHT },
		{ "EWallType::DOWN", (int64)EWallType::DOWN },
		{ "EWallType::UPDOWN", (int64)EWallType::UPDOWN },
		{ "EWallType::RIGHTDOWN", (int64)EWallType::RIGHTDOWN },
		{ "EWallType::UPRIGHTDOWN", (int64)EWallType::UPRIGHTDOWN },
		{ "EWallType::LEFT", (int64)EWallType::LEFT },
		{ "EWallType::UPLEFT", (int64)EWallType::UPLEFT },
		{ "EWallType::LEFTRIGHT", (int64)EWallType::LEFTRIGHT },
		{ "EWallType::LEFTUPRIGHT", (int64)EWallType::LEFTUPRIGHT },
		{ "EWallType::LEFTDOWN", (int64)EWallType::LEFTDOWN },
		{ "EWallType::UPLEFTDOWN", (int64)EWallType::UPLEFTDOWN },
		{ "EWallType::LEFTDOWNRIGHT", (int64)EWallType::LEFTDOWNRIGHT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EWallType_Statics::Enum_MetaDataParams[] = {
		{ "DOWN.Name", "EWallType::DOWN" },
		{ "FLOOR.Name", "EWallType::FLOOR" },
		{ "LEFT.Name", "EWallType::LEFT" },
		{ "LEFTDOWN.Name", "EWallType::LEFTDOWN" },
		{ "LEFTDOWNRIGHT.Name", "EWallType::LEFTDOWNRIGHT" },
		{ "LEFTRIGHT.Name", "EWallType::LEFTRIGHT" },
		{ "LEFTUPRIGHT.Name", "EWallType::LEFTUPRIGHT" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
		{ "RIGHT.Name", "EWallType::RIGHT" },
		{ "RIGHTDOWN.Name", "EWallType::RIGHTDOWN" },
		{ "UP.Name", "EWallType::UP" },
		{ "UPDOWN.Name", "EWallType::UPDOWN" },
		{ "UPLEFT.Name", "EWallType::UPLEFT" },
		{ "UPLEFTDOWN.Name", "EWallType::UPLEFTDOWN" },
		{ "UPRIGHT.Name", "EWallType::UPRIGHT" },
		{ "UPRIGHTDOWN.Name", "EWallType::UPRIGHTDOWN" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EWallType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EWallType",
		"EWallType",
		Z_Construct_UEnum_GridMap_EWallType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EWallType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EWallType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EWallType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EWallType()
	{
		if (!Z_Registration_Info_UEnum_EWallType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWallType.InnerSingleton, Z_Construct_UEnum_GridMap_EWallType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWallType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_E4WallType;
	static UEnum* E4WallType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_E4WallType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_E4WallType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_E4WallType, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("E4WallType"));
		}
		return Z_Registration_Info_UEnum_E4WallType.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<E4WallType>()
	{
		return E4WallType_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_E4WallType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_E4WallType_Statics::Enumerators[] = {
		{ "E4WallType::UP", (int64)E4WallType::UP },
		{ "E4WallType::RIGHT", (int64)E4WallType::RIGHT },
		{ "E4WallType::DOWN", (int64)E4WallType::DOWN },
		{ "E4WallType::LEFT", (int64)E4WallType::LEFT },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_E4WallType_Statics::Enum_MetaDataParams[] = {
		{ "DOWN.Name", "E4WallType::DOWN" },
		{ "LEFT.Name", "E4WallType::LEFT" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
		{ "RIGHT.Name", "E4WallType::RIGHT" },
		{ "UP.Name", "E4WallType::UP" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_E4WallType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"E4WallType",
		"E4WallType",
		Z_Construct_UEnum_GridMap_E4WallType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_E4WallType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_E4WallType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_E4WallType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_E4WallType()
	{
		if (!Z_Registration_Info_UEnum_E4WallType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E4WallType.InnerSingleton, Z_Construct_UEnum_GridMap_E4WallType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_E4WallType.InnerSingleton;
	}
	void UTileStyle::StaticRegisterNativesUTileStyle()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileStyle);
	UClass* Z_Construct_UClass_UTileStyle_NoRegister()
	{
		return UTileStyle::StaticClass();
	}
	struct Z_Construct_UClass_UTileStyle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TileSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneWallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OneWallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerWallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerWallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelWallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelWallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneCornerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OneCornerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwoCornerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TwoCornerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TwoCornerDiagonalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TwoCornerDiagonalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThreeCornerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThreeCornerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullCornerMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FullCornerMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OneWallDoorSlot_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OneWallDoorSlot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerWallDoorSlotUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerWallDoorSlotUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerWallDoorSlotRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerWallDoorSlotRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CornerWallDoorSlotUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CornerWallDoorSlotUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallDoorSlotUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallDoorSlotUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallDoorSlotUpRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallDoorSlotUpRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallDoorSlotRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallDoorSlotRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallDoorSlotUpDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallDoorSlotUpDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UWallDoorSlotFull_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UWallDoorSlotFull;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelWallDoorSlotUp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelWallDoorSlotUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TunnelWallDoorSlotUpDown_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TunnelWallDoorSlotUpDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarPlane_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarPlane;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FogOfWarMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FogOfWarMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleLevelDoorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SingleLevelDoorAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoubleLevelDoorAsset_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DoubleLevelDoorAsset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileStyle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TileStyle.h" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TileSize_MetaData[] = {
		{ "Category", "Style Properties" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TileSize), METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TileSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TileSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_FloorMesh_MetaData[] = {
		{ "Category", "Floor Mesh" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_FloorMesh = { "FloorMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, FloorMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_FloorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_FloorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallMesh_MetaData[] = {
		{ "Category", "Wall Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallMesh = { "OneWallMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, OneWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallMesh_MetaData[] = {
		{ "Category", "Wall Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallMesh = { "CornerWallMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, CornerWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallMesh_MetaData[] = {
		{ "Category", "Wall Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallMesh = { "TunnelWallMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TunnelWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallMesh_MetaData[] = {
		{ "Category", "Wall Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallMesh = { "UWallMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_OneCornerMesh_MetaData[] = {
		{ "Category", "Wall Corner Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_OneCornerMesh = { "OneCornerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, OneCornerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneCornerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneCornerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerMesh_MetaData[] = {
		{ "Category", "Wall Corner Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerMesh = { "TwoCornerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TwoCornerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerDiagonalMesh_MetaData[] = {
		{ "Category", "Wall Corner Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerDiagonalMesh = { "TwoCornerDiagonalMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TwoCornerDiagonalMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerDiagonalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerDiagonalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_ThreeCornerMesh_MetaData[] = {
		{ "Category", "Wall Corner Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_ThreeCornerMesh = { "ThreeCornerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, ThreeCornerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_ThreeCornerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_ThreeCornerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_FullCornerMesh_MetaData[] = {
		{ "Category", "Wall Corner Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_FullCornerMesh = { "FullCornerMesh", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, FullCornerMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_FullCornerMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_FullCornerMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallDoorSlot_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallDoorSlot = { "OneWallDoorSlot", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, OneWallDoorSlot), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallDoorSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallDoorSlot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUp_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUp = { "CornerWallDoorSlotUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, CornerWallDoorSlotUp), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotRight_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotRight = { "CornerWallDoorSlotRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, CornerWallDoorSlotRight), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUpRight_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUpRight = { "CornerWallDoorSlotUpRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, CornerWallDoorSlotUpRight), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUp_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUp = { "UWallDoorSlotUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallDoorSlotUp), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpRight_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpRight = { "UWallDoorSlotUpRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallDoorSlotUpRight), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotRight_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotRight = { "UWallDoorSlotRight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallDoorSlotRight), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpDown_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpDown = { "UWallDoorSlotUpDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallDoorSlotUpDown), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotFull_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotFull = { "UWallDoorSlotFull", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, UWallDoorSlotFull), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotFull_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotFull_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUp_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUp = { "TunnelWallDoorSlotUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TunnelWallDoorSlotUp), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUpDown_MetaData[] = {
		{ "Category", "Wall Door Slot Meshes" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUpDown = { "TunnelWallDoorSlotUpDown", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, TunnelWallDoorSlotUpDown), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUpDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUpDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarPlane_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarPlane = { "FogOfWarPlane", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, FogOfWarPlane), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarPlane_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarPlane_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarMaterial_MetaData[] = {
		{ "Category", "Fog of War" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarMaterial = { "FogOfWarMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, FogOfWarMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_SingleLevelDoorAsset_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_SingleLevelDoorAsset = { "SingleLevelDoorAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, SingleLevelDoorAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_SingleLevelDoorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_SingleLevelDoorAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileStyle_Statics::NewProp_DoubleLevelDoorAsset_MetaData[] = {
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/TileStyle.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTileStyle_Statics::NewProp_DoubleLevelDoorAsset = { "DoubleLevelDoorAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileStyle, DoubleLevelDoorAsset), Z_Construct_UClass_UClass, Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::NewProp_DoubleLevelDoorAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::NewProp_DoubleLevelDoorAsset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileStyle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TileSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_FloorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_OneCornerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TwoCornerDiagonalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_ThreeCornerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_FullCornerMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_OneWallDoorSlot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_CornerWallDoorSlotUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotUpDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_UWallDoorSlotFull,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_TunnelWallDoorSlotUpDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarPlane,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_FogOfWarMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_SingleLevelDoorAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileStyle_Statics::NewProp_DoubleLevelDoorAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileStyle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileStyle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileStyle_Statics::ClassParams = {
		&UTileStyle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTileStyle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileStyle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileStyle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileStyle()
	{
		if (!Z_Registration_Info_UClass_UTileStyle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileStyle.OuterSingleton, Z_Construct_UClass_UTileStyle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileStyle.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<UTileStyle>()
	{
		return UTileStyle::StaticClass();
	}
	UTileStyle::UTileStyle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileStyle);
	UTileStyle::~UTileStyle() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::EnumInfo[] = {
		{ EMeshType_StaticEnum, TEXT("EMeshType"), &Z_Registration_Info_UEnum_EMeshType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1213854849U) },
		{ EWallType_StaticEnum, TEXT("EWallType"), &Z_Registration_Info_UEnum_EWallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2513586486U) },
		{ E4WallType_StaticEnum, TEXT("E4WallType"), &Z_Registration_Info_UEnum_E4WallType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4252866770U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileStyle, UTileStyle::StaticClass, TEXT("UTileStyle"), &Z_Registration_Info_UClass_UTileStyle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileStyle), 276080332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_3634089873(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_TileStyle_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
