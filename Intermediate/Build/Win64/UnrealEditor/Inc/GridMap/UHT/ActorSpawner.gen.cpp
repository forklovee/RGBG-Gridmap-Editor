// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/Spawners/ActorSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_AActorSpawner();
	GRIDMAP_API UClass* Z_Construct_UClass_AActorSpawner_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_USpawnerDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	DEFINE_FUNCTION(AActorSpawner::execUpdatePreview)
	{
		P_GET_OBJECT(USpawnerDataAsset,Z_Param_NewSpawnerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePreview(Z_Param_NewSpawnerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActorSpawner::execGetSpawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USpawnerDataAsset**)Z_Param__Result=P_THIS->GetSpawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActorSpawner::execDestroySelf)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timeout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroySelf(Z_Param_Timeout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AActorSpawner::execSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->Spawn();
		P_NATIVE_END;
	}
	void AActorSpawner::StaticRegisterNativesAActorSpawner()
	{
		UClass* Class = AActorSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroySelf", &AActorSpawner::execDestroySelf },
			{ "GetSpawnData", &AActorSpawner::execGetSpawnData },
			{ "Spawn", &AActorSpawner::execSpawn },
			{ "UpdatePreview", &AActorSpawner::execUpdatePreview },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics
	{
		struct ActorSpawner_eventDestroySelf_Parms
		{
			float Timeout;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timeout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorSpawner_eventDestroySelf_Parms, Timeout), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::NewProp_Timeout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Timeout", "0.100000" },
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorSpawner, nullptr, "DestroySelf", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::ActorSpawner_eventDestroySelf_Parms), Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorSpawner_DestroySelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorSpawner_DestroySelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics
	{
		struct ActorSpawner_eventGetSpawnData_Parms
		{
			USpawnerDataAsset* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorSpawner_eventGetSpawnData_Parms, ReturnValue), Z_Construct_UClass_USpawnerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorSpawner, nullptr, "GetSpawnData", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::ActorSpawner_eventGetSpawnData_Parms), Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorSpawner_GetSpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorSpawner_GetSpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActorSpawner_Spawn_Statics
	{
		struct ActorSpawner_eventSpawn_Parms
		{
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorSpawner_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorSpawner_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorSpawner_Spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorSpawner_Spawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorSpawner_Spawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorSpawner_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorSpawner, nullptr, "Spawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorSpawner_Spawn_Statics::ActorSpawner_eventSpawn_Parms), Z_Construct_UFunction_AActorSpawner_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorSpawner_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorSpawner_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorSpawner_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics
	{
		struct ActorSpawner_eventUpdatePreview_Parms
		{
			USpawnerDataAsset* NewSpawnerData;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSpawnerData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::NewProp_NewSpawnerData = { "NewSpawnerData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorSpawner_eventUpdatePreview_Parms, NewSpawnerData), Z_Construct_UClass_USpawnerDataAsset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::NewProp_NewSpawnerData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AActorSpawner, nullptr, "UpdatePreview", nullptr, nullptr, sizeof(Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::ActorSpawner_eventUpdatePreview_Parms), Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AActorSpawner_UpdatePreview()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AActorSpawner_UpdatePreview_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AActorSpawner);
	UClass* Z_Construct_UClass_AActorSpawner_NoRegister()
	{
		return AActorSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AActorSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSpawn_MetaData[];
#endif
		static void NewProp_bDestroyOnSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSpawnData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSpawnData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AActorSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AActorSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AActorSpawner_DestroySelf, "DestroySelf" }, // 2852865773
		{ &Z_Construct_UFunction_AActorSpawner_GetSpawnData, "GetSpawnData" }, // 2161121729
		{ &Z_Construct_UFunction_AActorSpawner_Spawn, "Spawn" }, // 1141322420
		{ &Z_Construct_UFunction_AActorSpawner_UpdatePreview, "UpdatePreview" }, // 3781268743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Spawners/ActorSpawner.h" },
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	void Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn_SetBit(void* Obj)
	{
		((AActorSpawner*)Obj)->bDestroyOnSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn = { "bDestroyOnSpawn", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AActorSpawner), &Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AActorSpawner_Statics::NewProp_ActorSpawnData_MetaData[] = {
		{ "Category", "ActorSpawner" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/Spawners/ActorSpawner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AActorSpawner_Statics::NewProp_ActorSpawnData = { "ActorSpawnData", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AActorSpawner, ActorSpawnData), Z_Construct_UClass_USpawnerDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AActorSpawner_Statics::NewProp_ActorSpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::NewProp_ActorSpawnData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AActorSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSpawner_Statics::NewProp_bDestroyOnSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AActorSpawner_Statics::NewProp_ActorSpawnData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AActorSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AActorSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AActorSpawner_Statics::ClassParams = {
		&AActorSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AActorSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AActorSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AActorSpawner()
	{
		if (!Z_Registration_Info_UClass_AActorSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AActorSpawner.OuterSingleton, Z_Construct_UClass_AActorSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AActorSpawner.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<AActorSpawner>()
	{
		return AActorSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AActorSpawner);
	AActorSpawner::~AActorSpawner() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Spawners_ActorSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Spawners_ActorSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AActorSpawner, AActorSpawner::StaticClass, TEXT("AActorSpawner"), &Z_Registration_Info_UClass_AActorSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AActorSpawner), 1911108912U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Spawners_ActorSpawner_h_3773929989(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Spawners_ActorSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Spawners_ActorSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
