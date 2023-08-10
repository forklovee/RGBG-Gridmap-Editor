// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/Elevator/MainLevelElevator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainLevelElevator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_AMainLevelElevator();
	GRIDMAP_API UClass* Z_Construct_UClass_AMainLevelElevator_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	void AMainLevelElevator::StaticRegisterNativesAMainLevelElevator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMainLevelElevator);
	UClass* Z_Construct_UClass_AMainLevelElevator_NoRegister()
	{
		return AMainLevelElevator::StaticClass();
	}
	struct Z_Construct_UClass_AMainLevelElevator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElevatorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorLeftDoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElevatorLeftDoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorRightDoorMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ElevatorRightDoorMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ElevatorMusicCue_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ElevatorMusicCue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainLevelElevator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevelElevator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elevator/MainLevelElevator.h" },
		{ "ModuleRelativePath", "Public/Elevator/MainLevelElevator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elevator/MainLevelElevator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMesh = { "ElevatorMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMainLevelElevator, ElevatorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorLeftDoorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elevator/MainLevelElevator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorLeftDoorMesh = { "ElevatorLeftDoorMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMainLevelElevator, ElevatorLeftDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorLeftDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorLeftDoorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorRightDoorMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elevator/MainLevelElevator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorRightDoorMesh = { "ElevatorRightDoorMesh", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMainLevelElevator, ElevatorRightDoorMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorRightDoorMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorRightDoorMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMusicCue_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Music" },
		{ "ModuleRelativePath", "Public/Elevator/MainLevelElevator.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMusicCue = { "ElevatorMusicCue", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMainLevelElevator, ElevatorMusicCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMusicCue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMusicCue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainLevelElevator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorLeftDoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorRightDoorMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainLevelElevator_Statics::NewProp_ElevatorMusicCue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainLevelElevator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainLevelElevator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainLevelElevator_Statics::ClassParams = {
		&AMainLevelElevator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainLevelElevator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMainLevelElevator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelElevator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainLevelElevator()
	{
		if (!Z_Registration_Info_UClass_AMainLevelElevator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainLevelElevator.OuterSingleton, Z_Construct_UClass_AMainLevelElevator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMainLevelElevator.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<AMainLevelElevator>()
	{
		return AMainLevelElevator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainLevelElevator);
	AMainLevelElevator::~AMainLevelElevator() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Elevator_MainLevelElevator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Elevator_MainLevelElevator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMainLevelElevator, AMainLevelElevator::StaticClass, TEXT("AMainLevelElevator"), &Z_Registration_Info_UClass_AMainLevelElevator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainLevelElevator), 811753375U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Elevator_MainLevelElevator_h_3558688859(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Elevator_MainLevelElevator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_Elevator_MainLevelElevator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
