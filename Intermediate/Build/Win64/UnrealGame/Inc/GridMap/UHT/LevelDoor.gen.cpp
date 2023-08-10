// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/LevelDoor/LevelDoor.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelDoor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_ALevelDoor();
	GRIDMAP_API UClass* Z_Construct_UClass_ALevelDoor_NoRegister();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics
	{
		struct _Script_GridMap_eventOnDoorOpenSignature_Parms
		{
			ALevelDoor* Door;
			AGridMapRoom* CurrentRoom;
			AGridMapRoom* NextRoom;
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorOpenSignature_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorOpenSignature_Parms, CurrentRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorOpenSignature_Parms, NextRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorOpenSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridMap, nullptr, "OnDoorOpenSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::_Script_GridMap_eventOnDoorOpenSignature_Parms), Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDoorOpenSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDoorOpenSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn)
{
	struct _Script_GridMap_eventOnDoorOpenSignature_Parms
	{
		ALevelDoor* Door;
		AGridMapRoom* CurrentRoom;
		AGridMapRoom* NextRoom;
		APawn* Pawn;
	};
	_Script_GridMap_eventOnDoorOpenSignature_Parms Parms;
	Parms.Door=Door;
	Parms.CurrentRoom=CurrentRoom;
	Parms.NextRoom=NextRoom;
	Parms.Pawn=Pawn;
	OnDoorOpenSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics
	{
		struct _Script_GridMap_eventOnDoorClosedSignature_Parms
		{
			ALevelDoor* Door;
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorClosedSignature_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnDoorClosedSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridMap, nullptr, "OnDoorClosedSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::_Script_GridMap_eventOnDoorClosedSignature_Parms), Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnDoorClosedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnDoorClosedSignature, ALevelDoor* Door, APawn* Pawn)
{
	struct _Script_GridMap_eventOnDoorClosedSignature_Parms
	{
		ALevelDoor* Door;
		APawn* Pawn;
	};
	_Script_GridMap_eventOnDoorClosedSignature_Parms Parms;
	Parms.Door=Door;
	Parms.Pawn=Pawn;
	OnDoorClosedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics
	{
		struct _Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms
		{
			ALevelDoor* Door;
			AGridMapRoom* CurrentRoom;
			AGridMapRoom* NextRoom;
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms, CurrentRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms, NextRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridMap, nullptr, "OnPlayerWalkedThroughDoorSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms), Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPlayerWalkedThroughDoorSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerWalkedThroughDoorSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn)
{
	struct _Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms
	{
		ALevelDoor* Door;
		AGridMapRoom* CurrentRoom;
		AGridMapRoom* NextRoom;
		APawn* Pawn;
	};
	_Script_GridMap_eventOnPlayerWalkedThroughDoorSignature_Parms Parms;
	Parms.Door=Door;
	Parms.CurrentRoom=CurrentRoom;
	Parms.NextRoom=NextRoom;
	Parms.Pawn=Pawn;
	OnPlayerWalkedThroughDoorSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics
	{
		struct _Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms
		{
			ALevelDoor* Door;
			AGridMapRoom* CurrentRoom;
			AGridMapRoom* NextRoom;
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Door;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NextRoom;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms, CurrentRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms, NextRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GridMap, nullptr, "OnPawnExitedDoorAreaSignature__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms), Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnPawnExitedDoorAreaSignature_DelegateWrapper(const FMulticastScriptDelegate& OnPawnExitedDoorAreaSignature, ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn)
{
	struct _Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms
	{
		ALevelDoor* Door;
		AGridMapRoom* CurrentRoom;
		AGridMapRoom* NextRoom;
		APawn* Pawn;
	};
	_Script_GridMap_eventOnPawnExitedDoorAreaSignature_Parms Parms;
	Parms.Door=Door;
	Parms.CurrentRoom=CurrentRoom;
	Parms.NextRoom=NextRoom;
	Parms.Pawn=Pawn;
	OnPawnExitedDoorAreaSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(ALevelDoor::execOnPawnDoorHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPawnDoorHit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerExit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerExit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerEnter)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerEnter(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerInBackTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInBackTrigger(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerInFrontTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInFrontTrigger(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerOutBackTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOutBackTrigger(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOnPlayerOutFrontTrigger)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOutFrontTrigger(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execCloseDoor)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseDoor(Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelDoor::execOpenDoor)
	{
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_STRUCT(FVector,Z_Param_Direction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenDoor(Z_Param_Pawn,Z_Param_Direction);
		P_NATIVE_END;
	}
	void ALevelDoor::StaticRegisterNativesALevelDoor()
	{
		UClass* Class = ALevelDoor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseDoor", &ALevelDoor::execCloseDoor },
			{ "OnPawnDoorHit", &ALevelDoor::execOnPawnDoorHit },
			{ "OnPlayerEnter", &ALevelDoor::execOnPlayerEnter },
			{ "OnPlayerExit", &ALevelDoor::execOnPlayerExit },
			{ "OnPlayerInBackTrigger", &ALevelDoor::execOnPlayerInBackTrigger },
			{ "OnPlayerInFrontTrigger", &ALevelDoor::execOnPlayerInFrontTrigger },
			{ "OnPlayerOutBackTrigger", &ALevelDoor::execOnPlayerOutBackTrigger },
			{ "OnPlayerOutFrontTrigger", &ALevelDoor::execOnPlayerOutFrontTrigger },
			{ "OpenDoor", &ALevelDoor::execOpenDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics
	{
		struct LevelDoor_eventCloseDoor_Parms
		{
			APawn* Pawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventCloseDoor_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "CloseDoor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::LevelDoor_eventCloseDoor_Parms), Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_CloseDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_CloseDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics
	{
		struct LevelDoor_eventOnPawnDoorHit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPawnDoorHit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPawnDoorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPawnDoorHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPawnDoorHit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelDoor_eventOnPawnDoorHit_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelDoor_eventOnPawnDoorHit_Parms), &Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPawnDoorHit_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPawnDoorHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::LevelDoor_eventOnPawnDoorHit_Parms), Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics
	{
		struct LevelDoor_eventOnPlayerEnter_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerEnter_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerEnter_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerEnter_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerEnter_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelDoor_eventOnPlayerEnter_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelDoor_eventOnPlayerEnter_Parms), &Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerEnter_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerEnter", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::LevelDoor_eventOnPlayerEnter_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics
	{
		struct LevelDoor_eventOnPlayerExit_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerExit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerExit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerExit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerExit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerExit", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::LevelDoor_eventOnPlayerExit_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics
	{
		struct LevelDoor_eventOnPlayerInBackTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInBackTrigger_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInBackTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInBackTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInBackTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelDoor_eventOnPlayerInBackTrigger_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelDoor_eventOnPlayerInBackTrigger_Parms), &Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInBackTrigger_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerInBackTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::LevelDoor_eventOnPlayerInBackTrigger_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics
	{
		struct LevelDoor_eventOnPlayerInFrontTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInFrontTrigger_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInFrontTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInFrontTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInFrontTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((LevelDoor_eventOnPlayerInFrontTrigger_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(LevelDoor_eventOnPlayerInFrontTrigger_Parms), &Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerInFrontTrigger_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerInFrontTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::LevelDoor_eventOnPlayerInFrontTrigger_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics
	{
		struct LevelDoor_eventOnPlayerOutBackTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutBackTrigger_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutBackTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutBackTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutBackTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerOutBackTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::LevelDoor_eventOnPlayerOutBackTrigger_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics
	{
		struct LevelDoor_eventOnPlayerOutFrontTrigger_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutFrontTrigger_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutFrontTrigger_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutFrontTrigger_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOnPlayerOutFrontTrigger_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OnPlayerOutFrontTrigger", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::LevelDoor_eventOnPlayerOutFrontTrigger_Parms), Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics
	{
		struct LevelDoor_eventOpenDoor_Parms
		{
			APawn* Pawn;
			FVector Direction;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOpenDoor_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelDoor_eventOpenDoor_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Direction_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Pawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::NewProp_Direction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelDoor, nullptr, "OpenDoor", nullptr, nullptr, sizeof(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::LevelDoor_eventOpenDoor_Parms), Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelDoor_OpenDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALevelDoor_OpenDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALevelDoor);
	UClass* Z_Construct_UClass_ALevelDoor_NoRegister()
	{
		return ALevelDoor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorOpen_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnDoorClosed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDoorClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerWalkedThroughDoor_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerWalkedThroughDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnPawnExitedDoorArea_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnExitedDoorArea;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOpenByPawnInteraction_MetaData[];
#endif
		static void NewProp_bOpenByPawnInteraction_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOpenByPawnInteraction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsOpen_MetaData[];
#endif
		static void NewProp_bIsOpen_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DoorDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsTwoPartDoor_MetaData[];
#endif
		static void NewProp_IsTwoPartDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTwoPartDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsSlidingDoor_MetaData[];
#endif
		static void NewProp_IsSlidingDoor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSlidingDoor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDoorPhysicsConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainDoorPhysicsConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorPhysicsConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorPhysicsConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoorFrameMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DoorFrameMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainDoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInsideTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInsideTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainDoorTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainDoorTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondDoorTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SecondDoorTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Front_WalkThroughTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Front_WalkThroughTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Back_WalkThroughTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Back_WalkThroughTrigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelDoor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelDoor_CloseDoor, "CloseDoor" }, // 1218881382
		{ &Z_Construct_UFunction_ALevelDoor_OnPawnDoorHit, "OnPawnDoorHit" }, // 3026321099
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerEnter, "OnPlayerEnter" }, // 1821494035
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerExit, "OnPlayerExit" }, // 3915400783
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerInBackTrigger, "OnPlayerInBackTrigger" }, // 1626095523
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerInFrontTrigger, "OnPlayerInFrontTrigger" }, // 3100203020
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerOutBackTrigger, "OnPlayerOutBackTrigger" }, // 3984916622
		{ &Z_Construct_UFunction_ALevelDoor_OnPlayerOutFrontTrigger, "OnPlayerOutFrontTrigger" }, // 767477448
		{ &Z_Construct_UFunction_ALevelDoor_OpenDoor, "OpenDoor" }, // 4208055738
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LevelDoor/LevelDoor.h" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorOpen_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorOpen = { "OnDoorOpen", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, OnDoorOpen), Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorOpen_MetaData)) }; // 2819649939
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorClosed_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorClosed = { "OnDoorClosed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, OnDoorClosed), Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorClosed_MetaData)) }; // 1005003721
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPlayerWalkedThroughDoor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPlayerWalkedThroughDoor = { "OnPlayerWalkedThroughDoor", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, OnPlayerWalkedThroughDoor), Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPlayerWalkedThroughDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPlayerWalkedThroughDoor_MetaData)) }; // 1149583888
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPawnExitedDoorArea_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPawnExitedDoorArea = { "OnPawnExitedDoorArea", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, OnPawnExitedDoorArea), Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPawnExitedDoorArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPawnExitedDoorArea_MetaData)) }; // 1883964269
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction_MetaData[] = {
		{ "Category", "LevelDoor" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction_SetBit(void* Obj)
	{
		((ALevelDoor*)Obj)->bOpenByPawnInteraction = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction = { "bOpenByPawnInteraction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelDoor), &Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "Category", "LevelDoor" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((ALevelDoor*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelDoor), &Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen_MetaData[] = {
		{ "Category", "LevelDoor" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen_SetBit(void* Obj)
	{
		((ALevelDoor*)Obj)->bIsOpen = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen = { "bIsOpen", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelDoor), &Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorDirection_MetaData[] = {
		{ "Category", "LevelDoor" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorDirection = { "DoorDirection", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, DoorDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor_SetBit(void* Obj)
	{
		((ALevelDoor*)Obj)->IsTwoPartDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor = { "IsTwoPartDoor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelDoor), &Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor_SetBit(void* Obj)
	{
		((ALevelDoor*)Obj)->IsSlidingDoor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor = { "IsSlidingDoor", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ALevelDoor), &Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorPhysicsConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditCondition", "!IsSlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorPhysicsConstraint = { "MainDoorPhysicsConstraint", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, MainDoorPhysicsConstraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorPhysicsConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorPhysicsConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorPhysicsConstraint_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditCondition", "!IsSlidingDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorPhysicsConstraint = { "SecondDoorPhysicsConstraint", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, SecondDoorPhysicsConstraint), Z_Construct_UClass_UPhysicsConstraintComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorPhysicsConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorPhysicsConstraint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorFrameMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorFrameMesh = { "DoorFrameMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, DoorFrameMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorFrameMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorFrameMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorMesh = { "MainDoorMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, MainDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditCondition", "IsTwoPartDoor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorMesh = { "SecondDoorMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, SecondDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_PlayerInsideTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_PlayerInsideTrigger = { "PlayerInsideTrigger", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, PlayerInsideTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_PlayerInsideTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_PlayerInsideTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorTrigger = { "MainDoorTrigger", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, MainDoorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorTrigger = { "SecondDoorTrigger", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, SecondDoorTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_Front_WalkThroughTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_Front_WalkThroughTrigger = { "Front_WalkThroughTrigger", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, Front_WalkThroughTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_Front_WalkThroughTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_Front_WalkThroughTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelDoor_Statics::NewProp_Back_WalkThroughTrigger_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelDoor/LevelDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelDoor_Statics::NewProp_Back_WalkThroughTrigger = { "Back_WalkThroughTrigger", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ALevelDoor, Back_WalkThroughTrigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::NewProp_Back_WalkThroughTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::NewProp_Back_WalkThroughTrigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnDoorClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPlayerWalkedThroughDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_OnPawnExitedDoorArea,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_bOpenByPawnInteraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsLocked,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_bIsOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsTwoPartDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_IsSlidingDoor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorPhysicsConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorPhysicsConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_DoorFrameMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_PlayerInsideTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_MainDoorTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_SecondDoorTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_Front_WalkThroughTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelDoor_Statics::NewProp_Back_WalkThroughTrigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALevelDoor_Statics::ClassParams = {
		&ALevelDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelDoor()
	{
		if (!Z_Registration_Info_UClass_ALevelDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALevelDoor.OuterSingleton, Z_Construct_UClass_ALevelDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALevelDoor.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<ALevelDoor>()
	{
		return ALevelDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelDoor);
	ALevelDoor::~ALevelDoor() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_LevelDoor_LevelDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_LevelDoor_LevelDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALevelDoor, ALevelDoor::StaticClass, TEXT("ALevelDoor"), &Z_Registration_Info_UClass_ALevelDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALevelDoor), 1150072852U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_LevelDoor_LevelDoor_h_934542021(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_LevelDoor_LevelDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_LevelDoor_LevelDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
