// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LevelDoor/LevelDoor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGridMapRoom;
class ALevelDoor;
class APawn;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GRIDMAP_LevelDoor_generated_h
#error "LevelDoor.generated.h already included, missing '#pragma once' in LevelDoor.h"
#endif
#define GRIDMAP_LevelDoor_generated_h

#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_9_DELEGATE \
GRIDMAP_API void FOnDoorOpenSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDoorOpenSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_10_DELEGATE \
GRIDMAP_API void FOnDoorClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClosedSignature, ALevelDoor* Door, APawn* Pawn);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_11_DELEGATE \
GRIDMAP_API void FOnPlayerWalkedThroughDoorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerWalkedThroughDoorSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_12_DELEGATE \
GRIDMAP_API void FOnPawnExitedDoorAreaSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPawnExitedDoorAreaSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_SPARSE_DATA
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerInBackTrigger); \
	DECLARE_FUNCTION(execOnPlayerInFrontTrigger); \
	DECLARE_FUNCTION(execOnPlayerOutBackTrigger); \
	DECLARE_FUNCTION(execOnPlayerOutFrontTrigger); \
	DECLARE_FUNCTION(execIsDoorLocked); \
	DECLARE_FUNCTION(execSetDoorLocked); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerInBackTrigger); \
	DECLARE_FUNCTION(execOnPlayerInFrontTrigger); \
	DECLARE_FUNCTION(execOnPlayerOutBackTrigger); \
	DECLARE_FUNCTION(execOnPlayerOutFrontTrigger); \
	DECLARE_FUNCTION(execIsDoorLocked); \
	DECLARE_FUNCTION(execSetDoorLocked); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_ACCESSORS
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelDoor(); \
	friend struct Z_Construct_UClass_ALevelDoor_Statics; \
public: \
	DECLARE_CLASS(ALevelDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(ALevelDoor)


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_INCLASS \
private: \
	static void StaticRegisterNativesALevelDoor(); \
	friend struct Z_Construct_UClass_ALevelDoor_Statics; \
public: \
	DECLARE_CLASS(ALevelDoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GridMap"), NO_API) \
	DECLARE_SERIALIZER(ALevelDoor)


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelDoor(ALevelDoor&&); \
	NO_API ALevelDoor(const ALevelDoor&); \
public: \
	NO_API virtual ~ALevelDoor();


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelDoor(ALevelDoor&&); \
	NO_API ALevelDoor(const ALevelDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelDoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALevelDoor) \
	NO_API virtual ~ALevelDoor();


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_14_PROLOG
#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_SPARSE_DATA \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_RPC_WRAPPERS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_ACCESSORS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_INCLASS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_SPARSE_DATA \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_ACCESSORS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRIDMAP_API UClass* StaticClass<class ALevelDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_LevelDoor_LevelDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
