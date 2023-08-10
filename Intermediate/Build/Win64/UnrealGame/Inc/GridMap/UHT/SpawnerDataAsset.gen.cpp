// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/Spawners/SpawnerDataAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerDataAsset() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_USpawnerDataAsset();
	GRIDMAP_API UClass* Z_Construct_UClass_USpawnerDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	DEFINE_FUNCTION(USpawnerDataAsset::execGetBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBehaviorTree**)Z_Param__Result=P_THIS->GetBehaviorTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpawnerDataAsset::execIsUsingBehaviorTree)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUsingBehaviorTree();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USpawnerDataAsset::execGetActorClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UClass**)Z_Param__Result=P_THIS->GetActorClass();
		P_NATIVE_END;
	}
	void USpawnerDataAsset::StaticRegisterNativesUSpawnerDataAsset()
	{
		UClass* Class = USpawnerDataAsset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorClass", &USpawnerDataAsset::execGetActorClass },
			{ "GetBehaviorTree", &USpawnerDataAsset::execGetBehaviorTree },
			{ "IsUsingBehaviorTree", &USpawnerDataAsset::execIsUsingBehaviorTree },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics
	{
		struct SpawnerDataAsset_eventGetActorClass_Parms
		{
			UClass* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnerDataAsset_eventGetActorClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnerDataAsset, nullptr, "GetActorClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::SpawnerDataAsset_eventGetActorClass_Parms), Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpawnerDataAsset_GetActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnerDataAsset_GetActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics
	{
		struct SpawnerDataAsset_eventGetBehaviorTree_Parms
		{
			UBehaviorTree* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SpawnerDataAsset_eventGetBehaviorTree_Parms, ReturnValue), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnerDataAsset, nullptr, "GetBehaviorTree", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::SpawnerDataAsset_eventGetBehaviorTree_Parms), Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics
	{
		struct SpawnerDataAsset_eventIsUsingBehaviorTree_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SpawnerDataAsset_eventIsUsingBehaviorTree_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SpawnerDataAsset_eventIsUsingBehaviorTree_Parms), &Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpawnerDataAsset, nullptr, "IsUsingBehaviorTree", nullptr, nullptr, sizeof(Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::SpawnerDataAsset_eventIsUsingBehaviorTree_Parms), Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpawnerDataAsset);
	UClass* Z_Construct_UClass_USpawnerDataAsset_NoRegister()
	{
		return USpawnerDataAsset::StaticClass();
	}
	struct Z_Construct_UClass_USpawnerDataAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseSkeletalMesh_MetaData[];
#endif
		static void NewProp_UseSkeletalMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewStaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewStaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UseBehaviorTree_MetaData[];
#endif
		static void NewProp_UseBehaviorTree_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseBehaviorTree;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PawnBehaviorTree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnerDataAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USpawnerDataAsset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USpawnerDataAsset_GetActorClass, "GetActorClass" }, // 1822486201
		{ &Z_Construct_UFunction_USpawnerDataAsset_GetBehaviorTree, "GetBehaviorTree" }, // 866994313
		{ &Z_Construct_UFunction_USpawnerDataAsset_IsUsingBehaviorTree, "IsUsingBehaviorTree" }, // 1252424991
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Spawners/SpawnerDataAsset.h" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "SpawnerDataAsset" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpawnerDataAsset, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_ActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh_MetaData[] = {
		{ "Category", "Preview Mesh" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh_SetBit(void* Obj)
	{
		((USpawnerDataAsset*)Obj)->UseSkeletalMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh = { "UseSkeletalMesh", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpawnerDataAsset), &Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewStaticMesh_MetaData[] = {
		{ "Category", "Preview Mesh" },
		{ "EditCondition", "!UseSkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewStaticMesh = { "PreviewStaticMesh", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpawnerDataAsset, PreviewStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewStaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "Preview Mesh" },
		{ "EditCondition", "UseSkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpawnerDataAsset, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree_MetaData[] = {
		{ "Category", "Pawn Behavior" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	void Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree_SetBit(void* Obj)
	{
		((USpawnerDataAsset*)Obj)->UseBehaviorTree = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree = { "UseBehaviorTree", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USpawnerDataAsset), &Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PawnBehaviorTree_MetaData[] = {
		{ "Category", "Pawn Behavior" },
		{ "EditCondition", "UseBehaviorTree" },
		{ "ModuleRelativePath", "Public/Spawners/SpawnerDataAsset.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PawnBehaviorTree = { "PawnBehaviorTree", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USpawnerDataAsset, PawnBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PawnBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PawnBehaviorTree_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnerDataAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewStaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_UseBehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnerDataAsset_Statics::NewProp_PawnBehaviorTree,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnerDataAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnerDataAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpawnerDataAsset_Statics::ClassParams = {
		&USpawnerDataAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USpawnerDataAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USpawnerDataAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerDataAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnerDataAsset()
	{
		if (!Z_Registration_Info_UClass_USpawnerDataAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpawnerDataAsset.OuterSingleton, Z_Construct_UClass_USpawnerDataAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpawnerDataAsset.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<USpawnerDataAsset>()
	{
		return USpawnerDataAsset::StaticClass();
	}
	USpawnerDataAsset::USpawnerDataAsset(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnerDataAsset);
	USpawnerDataAsset::~USpawnerDataAsset() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Spawners_SpawnerDataAsset_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Spawners_SpawnerDataAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpawnerDataAsset, USpawnerDataAsset::StaticClass, TEXT("USpawnerDataAsset"), &Z_Registration_Info_UClass_USpawnerDataAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpawnerDataAsset), 4041687839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Spawners_SpawnerDataAsset_h_2887403444(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Spawners_SpawnerDataAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_Spawners_SpawnerDataAsset_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
