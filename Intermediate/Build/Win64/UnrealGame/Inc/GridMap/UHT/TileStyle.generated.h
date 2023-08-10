// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TileStyle.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRIDMAP_TileStyle_generated_h
#error "TileStyle.generated.h already included, missing '#pragma once' in TileStyle.h"
#endif
#define GRIDMAP_TileStyle_generated_h

#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_SPARSE_DATA
#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_RPC_WRAPPERS
#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_ACCESSORS
#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTileStyle(); \
	friend struct Z_Construct_UClass_UTileStyle_Statics; \
public: \
	DECLARE_CLASS(UTileStyle, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(UTileStyle)


#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUTileStyle(); \
	friend struct Z_Construct_UClass_UTileStyle_Statics; \
public: \
	DECLARE_CLASS(UTileStyle, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(UTileStyle)


#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileStyle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileStyle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileStyle(UTileStyle&&); \
	NO_API UTileStyle(const UTileStyle&); \
public: \
	NO_API virtual ~UTileStyle();


#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTileStyle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTileStyle(UTileStyle&&); \
	NO_API UTileStyle(const UTileStyle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTileStyle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTileStyle); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTileStyle) \
	NO_API virtual ~UTileStyle();


#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_68_PROLOG
#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_SPARSE_DATA \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_RPC_WRAPPERS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_ACCESSORS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_INCLASS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_SPARSE_DATA \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_ACCESSORS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_INCLASS_NO_PURE_DECLS \
	FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDMAP_API UClass* StaticClass<class UTileStyle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_TileStyle_h


#define FOREACH_ENUM_EMESHTYPE(op) \
	op(EMeshType::NONE) \
	op(EMeshType::FLOOR) \
	op(EMeshType::ONEWALL) \
	op(EMeshType::CORNERWALL) \
	op(EMeshType::TUNNELWALL) \
	op(EMeshType::UWALL) \
	op(EMeshType::ONEWALL_UP) \
	op(EMeshType::CORNERWALL_UP) \
	op(EMeshType::CORNERWALL_RIGHT) \
	op(EMeshType::CORNERWALL_UPRIGHT) \
	op(EMeshType::TUNNELWALL_UP) \
	op(EMeshType::TUNNELWALL_UPDOWN) \
	op(EMeshType::UWALL_UP) \
	op(EMeshType::UWALL_RIGHT) \
	op(EMeshType::UWALL_UPRIGHT) \
	op(EMeshType::UWALL_UPDOWN) \
	op(EMeshType::UWALL_FULL) \
	op(EMeshType::CORNER) \
	op(EMeshType::FOG_OF_WAR) 

enum class EMeshType : uint8;
template<> struct TIsUEnumClass<EMeshType> { enum { Value = true }; };
template<> GRIDMAP_API UEnum* StaticEnum<EMeshType>();

#define FOREACH_ENUM_EWALLTYPE(op) \
	op(EWallType::FLOOR) \
	op(EWallType::UP) \
	op(EWallType::RIGHT) \
	op(EWallType::UPRIGHT) \
	op(EWallType::DOWN) \
	op(EWallType::UPDOWN) \
	op(EWallType::RIGHTDOWN) \
	op(EWallType::UPRIGHTDOWN) \
	op(EWallType::LEFT) \
	op(EWallType::UPLEFT) \
	op(EWallType::LEFTRIGHT) \
	op(EWallType::LEFTUPRIGHT) \
	op(EWallType::LEFTDOWN) \
	op(EWallType::UPLEFTDOWN) \
	op(EWallType::LEFTDOWNRIGHT) 

enum class EWallType : uint8;
template<> struct TIsUEnumClass<EWallType> { enum { Value = true }; };
template<> GRIDMAP_API UEnum* StaticEnum<EWallType>();

#define FOREACH_ENUM_E4WALLTYPE(op) \
	op(E4WallType::UP) \
	op(E4WallType::RIGHT) \
	op(E4WallType::DOWN) \
	op(E4WallType::LEFT) 

enum class E4WallType : uint8;
template<> struct TIsUEnumClass<E4WallType> { enum { Value = true }; };
template<> GRIDMAP_API UEnum* StaticEnum<E4WallType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
