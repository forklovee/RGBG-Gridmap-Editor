// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/Generators/BuildingFloorGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuildingFloorGenerator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_ABuildingFloorGenerator();
	GRIDMAP_API UClass* Z_Construct_UClass_ABuildingFloorGenerator_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_ALevelDoor_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridmapLevelCollectionDataAsset_NoRegister();
	GRIDMAP_API UEnum* Z_Construct_UEnum_GridMap_EGenerationEndState();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FOpenSocket();
	GRIDMAP_API UScriptStruct* Z_Construct_UScriptStruct_FRoom();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerationEndState;
	static UEnum* EGenerationEndState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGenerationEndState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGenerationEndState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GridMap_EGenerationEndState, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("EGenerationEndState"));
		}
		return Z_Registration_Info_UEnum_EGenerationEndState.OuterSingleton;
	}
	template<> GRIDMAP_API UEnum* StaticEnum<EGenerationEndState>()
	{
		return EGenerationEndState_StaticEnum();
	}
	struct Z_Construct_UEnum_GridMap_EGenerationEndState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enumerators[] = {
		{ "SUCCESS", (int64)SUCCESS },
		{ "FAILURE", (int64)FAILURE },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FAILURE.DisplayName", "Failure" },
		{ "FAILURE.Name", "FAILURE" },
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
		{ "SUCCESS.DisplayName", "Success" },
		{ "SUCCESS.Name", "SUCCESS" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		"EGenerationEndState",
		"EGenerationEndState",
		Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GridMap_EGenerationEndState()
	{
		if (!Z_Registration_Info_UEnum_EGenerationEndState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerationEndState.InnerSingleton, Z_Construct_UEnum_GridMap_EGenerationEndState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGenerationEndState.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Room;
class UScriptStruct* FRoom::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Room.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Room.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRoom, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("Room"));
	}
	return Z_Registration_Info_UScriptStruct_Room.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FRoom>()
{
	return FRoom::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRoom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRoom_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRoom_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRoom>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRoom_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"Room",
		sizeof(FRoom),
		alignof(FRoom),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRoom_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRoom_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRoom()
	{
		if (!Z_Registration_Info_UScriptStruct_Room.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Room.InnerSingleton, Z_Construct_UScriptStruct_FRoom_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Room.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OpenSocket;
class UScriptStruct* FOpenSocket::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OpenSocket.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OpenSocket.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenSocket, (UObject*)Z_Construct_UPackage__Script_GridMap(), TEXT("OpenSocket"));
	}
	return Z_Registration_Info_UScriptStruct_OpenSocket.OuterSingleton;
}
template<> GRIDMAP_API UScriptStruct* StaticStruct<FOpenSocket>()
{
	return FOpenSocket::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOpenSocket_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenSocket_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenSocket_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenSocket>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenSocket_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
		nullptr,
		&NewStructOps,
		"OpenSocket",
		sizeof(FOpenSocket),
		alignof(FOpenSocket),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenSocket_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenSocket_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenSocket()
	{
		if (!Z_Registration_Info_UScriptStruct_OpenSocket.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OpenSocket.InnerSingleton, Z_Construct_UScriptStruct_FOpenSocket_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OpenSocket.InnerSingleton;
	}
	DEFINE_FUNCTION(ABuildingFloorGenerator::execResetPreviewedRoom)
	{
		P_GET_OBJECT(ALevelDoor,Z_Param_Door);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPreviewedRoom(Z_Param_Door,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingFloorGenerator::execChangePreviewedRoom)
	{
		P_GET_OBJECT(ALevelDoor,Z_Param_Door);
		P_GET_OBJECT(AGridMapRoom,Z_Param_CurrentRoom);
		P_GET_OBJECT(AGridMapRoom,Z_Param_NextRoom);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangePreviewedRoom(Z_Param_Door,Z_Param_CurrentRoom,Z_Param_NextRoom,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingFloorGenerator::execShowFogOfWarOnPreviewedRoom)
	{
		P_GET_OBJECT(ALevelDoor,Z_Param_Door);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowFogOfWarOnPreviewedRoom(Z_Param_Door,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingFloorGenerator::execChangeActiveRoom)
	{
		P_GET_OBJECT(ALevelDoor,Z_Param_Door);
		P_GET_OBJECT(AGridMapRoom,Z_Param_CurrentRoom);
		P_GET_OBJECT(AGridMapRoom,Z_Param_NextRoom);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeActiveRoom(Z_Param_Door,Z_Param_CurrentRoom,Z_Param_NextRoom,Z_Param_Pawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABuildingFloorGenerator::execGenerate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<EGenerationEndState>*)Z_Param__Result=P_THIS->Generate();
		P_NATIVE_END;
	}
	void ABuildingFloorGenerator::StaticRegisterNativesABuildingFloorGenerator()
	{
		UClass* Class = ABuildingFloorGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeActiveRoom", &ABuildingFloorGenerator::execChangeActiveRoom },
			{ "ChangePreviewedRoom", &ABuildingFloorGenerator::execChangePreviewedRoom },
			{ "Generate", &ABuildingFloorGenerator::execGenerate },
			{ "ResetPreviewedRoom", &ABuildingFloorGenerator::execResetPreviewedRoom },
			{ "ShowFogOfWarOnPreviewedRoom", &ABuildingFloorGenerator::execShowFogOfWarOnPreviewedRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics
	{
		struct BuildingFloorGenerator_eventChangeActiveRoom_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangeActiveRoom_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangeActiveRoom_Parms, CurrentRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangeActiveRoom_Parms, NextRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangeActiveRoom_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Door Events\n" },
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
		{ "ToolTip", "Door Events" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingFloorGenerator, nullptr, "ChangeActiveRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::BuildingFloorGenerator_eventChangeActiveRoom_Parms), Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics
	{
		struct BuildingFloorGenerator_eventChangePreviewedRoom_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangePreviewedRoom_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_CurrentRoom = { "CurrentRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangePreviewedRoom_Parms, CurrentRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_NextRoom = { "NextRoom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangePreviewedRoom_Parms, NextRoom), Z_Construct_UClass_AGridMapRoom_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventChangePreviewedRoom_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_CurrentRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_NextRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingFloorGenerator, nullptr, "ChangePreviewedRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::BuildingFloorGenerator_eventChangePreviewedRoom_Parms), Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics
	{
		struct BuildingFloorGenerator_eventGenerate_Parms
		{
			TEnumAsByte<EGenerationEndState> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventGenerate_Parms, ReturnValue), Z_Construct_UEnum_GridMap_EGenerationEndState, METADATA_PARAMS(nullptr, 0) }; // 2961390486
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingFloorGenerator, nullptr, "Generate", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::BuildingFloorGenerator_eventGenerate_Parms), Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingFloorGenerator_Generate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingFloorGenerator_Generate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics
	{
		struct BuildingFloorGenerator_eventResetPreviewedRoom_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventResetPreviewedRoom_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventResetPreviewedRoom_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingFloorGenerator, nullptr, "ResetPreviewedRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::BuildingFloorGenerator_eventResetPreviewedRoom_Parms), Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics
	{
		struct BuildingFloorGenerator_eventShowFogOfWarOnPreviewedRoom_Parms
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
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::NewProp_Door = { "Door", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventShowFogOfWarOnPreviewedRoom_Parms, Door), Z_Construct_UClass_ALevelDoor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BuildingFloorGenerator_eventShowFogOfWarOnPreviewedRoom_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::NewProp_Door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::NewProp_Pawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABuildingFloorGenerator, nullptr, "ShowFogOfWarOnPreviewedRoom", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::BuildingFloorGenerator_eventShowFogOfWarOnPreviewedRoom_Parms), Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABuildingFloorGenerator);
	UClass* Z_Construct_UClass_ABuildingFloorGenerator_NoRegister()
	{
		return ABuildingFloorGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ABuildingFloorGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelCollectionDataAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelCollectionDataAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VoidMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VoidMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABuildingFloorGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABuildingFloorGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABuildingFloorGenerator_ChangeActiveRoom, "ChangeActiveRoom" }, // 3901427506
		{ &Z_Construct_UFunction_ABuildingFloorGenerator_ChangePreviewedRoom, "ChangePreviewedRoom" }, // 3545575679
		{ &Z_Construct_UFunction_ABuildingFloorGenerator_Generate, "Generate" }, // 3305997188
		{ &Z_Construct_UFunction_ABuildingFloorGenerator_ResetPreviewedRoom, "ResetPreviewedRoom" }, // 2925159931
		{ &Z_Construct_UFunction_ABuildingFloorGenerator_ShowFogOfWarOnPreviewedRoom, "ShowFogOfWarOnPreviewedRoom" }, // 357046164
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingFloorGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Generators/BuildingFloorGenerator.h" },
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_LevelCollectionDataAsset_MetaData[] = {
		{ "Category", "Level Collection" },
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_LevelCollectionDataAsset = { "LevelCollectionDataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingFloorGenerator, LevelCollectionDataAsset), Z_Construct_UClass_UGridmapLevelCollectionDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_LevelCollectionDataAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_LevelCollectionDataAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_VoidMesh_MetaData[] = {
		{ "Category", "Void Plane Mesh" },
		{ "ModuleRelativePath", "Public/Generators/BuildingFloorGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_VoidMesh = { "VoidMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABuildingFloorGenerator, VoidMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_VoidMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_VoidMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABuildingFloorGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_LevelCollectionDataAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABuildingFloorGenerator_Statics::NewProp_VoidMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABuildingFloorGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABuildingFloorGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABuildingFloorGenerator_Statics::ClassParams = {
		&ABuildingFloorGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABuildingFloorGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingFloorGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABuildingFloorGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABuildingFloorGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABuildingFloorGenerator()
	{
		if (!Z_Registration_Info_UClass_ABuildingFloorGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABuildingFloorGenerator.OuterSingleton, Z_Construct_UClass_ABuildingFloorGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABuildingFloorGenerator.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<ABuildingFloorGenerator>()
	{
		return ABuildingFloorGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABuildingFloorGenerator);
	ABuildingFloorGenerator::~ABuildingFloorGenerator() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::EnumInfo[] = {
		{ EGenerationEndState_StaticEnum, TEXT("EGenerationEndState"), &Z_Registration_Info_UEnum_EGenerationEndState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2961390486U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ScriptStructInfo[] = {
		{ FRoom::StaticStruct, Z_Construct_UScriptStruct_FRoom_Statics::NewStructOps, TEXT("Room"), &Z_Registration_Info_UScriptStruct_Room, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRoom), 3403549753U) },
		{ FOpenSocket::StaticStruct, Z_Construct_UScriptStruct_FOpenSocket_Statics::NewStructOps, TEXT("OpenSocket"), &Z_Registration_Info_UScriptStruct_OpenSocket, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOpenSocket), 60923703U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABuildingFloorGenerator, ABuildingFloorGenerator::StaticClass, TEXT("ABuildingFloorGenerator"), &Z_Registration_Info_UClass_ABuildingFloorGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABuildingFloorGenerator), 3390971950U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_3654448130(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Generators_BuildingFloorGenerator_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
