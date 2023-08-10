// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generators/BuildingFloorGenerator.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGridMapRoom;
class ALevelDoor;
class APawn;
#ifdef GRIDMAP_BuildingFloorGenerator_generated_h
#error "BuildingFloorGenerator.generated.h already included, missing '#pragma once' in BuildingFloorGenerator.h"
#endif
#define GRIDMAP_BuildingFloorGenerator_generated_h

#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRoom_Statics; \
	GRIDMAP_API static class UScriptStruct* StaticStruct();


template<> GRIDMAP_API UScriptStruct* StaticStruct<struct FRoom>();

#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOpenSocket_Statics; \
	GRIDMAP_API static class UScriptStruct* StaticStruct();


template<> GRIDMAP_API UScriptStruct* StaticStruct<struct FOpenSocket>();

#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_SPARSE_DATA
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetPreviewedRoom); \
	DECLARE_FUNCTION(execChangePreviewedRoom); \
	DECLARE_FUNCTION(execShowFogOfWarOnPreviewedRoom); \
	DECLARE_FUNCTION(execChangeActiveRoom); \
	DECLARE_FUNCTION(execGenerate);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetPreviewedRoom); \
	DECLARE_FUNCTION(execChangePreviewedRoom); \
	DECLARE_FUNCTION(execShowFogOfWarOnPreviewedRoom); \
	DECLARE_FUNCTION(execChangeActiveRoom); \
	DECLARE_FUNCTION(execGenerate);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_ACCESSORS
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABuildingFloorGenerator(); \
	friend struct Z_Construct_UClass_ABuildingFloorGenerator_Statics; \
public: \
	DECLARE_CLASS(ABuildingFloorGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(ABuildingFloorGenerator)


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_INCLASS \
private: \
	static void StaticRegisterNativesABuildingFloorGenerator(); \
	friend struct Z_Construct_UClass_ABuildingFloorGenerator_Statics; \
public: \
	DECLARE_CLASS(ABuildingFloorGenerator, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(ABuildingFloorGenerator)


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABuildingFloorGenerator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABuildingFloorGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingFloorGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingFloorGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingFloorGenerator(ABuildingFloorGenerator&&); \
	NO_API ABuildingFloorGenerator(const ABuildingFloorGenerator&); \
public: \
	NO_API virtual ~ABuildingFloorGenerator();


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABuildingFloorGenerator(ABuildingFloorGenerator&&); \
	NO_API ABuildingFloorGenerator(const ABuildingFloorGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABuildingFloorGenerator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABuildingFloorGenerator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABuildingFloorGenerator) \
	NO_API virtual ~ABuildingFloorGenerator();


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_102_PROLOG
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_SPARSE_DATA \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_RPC_WRAPPERS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_ACCESSORS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_INCLASS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_SPARSE_DATA \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_ACCESSORS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_INCLASS_NO_PURE_DECLS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_105_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDMAP_API UClass* StaticClass<class ABuildingFloorGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Generators_BuildingFloorGenerator_h


#define FOREACH_ENUM_EGENERATIONENDSTATE(op) \
	op(SUCCESS) \
	op(FAILURE) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
