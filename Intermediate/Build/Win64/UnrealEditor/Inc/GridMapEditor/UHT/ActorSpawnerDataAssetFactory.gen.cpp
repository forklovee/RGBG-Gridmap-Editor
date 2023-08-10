// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMapEditor/Private/AssetFactories/ActorSpawnerDataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSpawnerDataAssetFactory() {}
// Cross Module References
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UActorSpawnerDataAssetFactory();
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UActorSpawnerDataAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GridMapEditor();
// End Cross Module References
	void UActorSpawnerDataAssetFactory::StaticRegisterNativesUActorSpawnerDataAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSpawnerDataAssetFactory);
	UClass* Z_Construct_UClass_UActorSpawnerDataAssetFactory_NoRegister()
	{
		return UActorSpawnerDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMapEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetFactories/ActorSpawnerDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/AssetFactories/ActorSpawnerDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSpawnerDataAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::ClassParams = {
		&UActorSpawnerDataAssetFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSpawnerDataAssetFactory()
	{
		if (!Z_Registration_Info_UClass_UActorSpawnerDataAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSpawnerDataAssetFactory.OuterSingleton, Z_Construct_UClass_UActorSpawnerDataAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSpawnerDataAssetFactory.OuterSingleton;
	}
	template<> GRIDMAPEDITOR_API UClass* StaticClass<UActorSpawnerDataAssetFactory>()
	{
		return UActorSpawnerDataAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSpawnerDataAssetFactory);
	UActorSpawnerDataAssetFactory::~UActorSpawnerDataAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_ActorSpawnerDataAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_ActorSpawnerDataAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSpawnerDataAssetFactory, UActorSpawnerDataAssetFactory::StaticClass, TEXT("UActorSpawnerDataAssetFactory"), &Z_Registration_Info_UClass_UActorSpawnerDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSpawnerDataAssetFactory), 3571243844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_ActorSpawnerDataAssetFactory_h_2506835435(TEXT("/Script/GridMapEditor"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_ActorSpawnerDataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_ActorSpawnerDataAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
