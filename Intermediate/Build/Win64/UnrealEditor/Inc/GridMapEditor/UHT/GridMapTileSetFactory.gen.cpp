// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMapEditor/Private/AssetFactories/GridMapTileSetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridMapTileSetFactory() {}
// Cross Module References
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UGridMapTileSetFactory();
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UGridMapTileSetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GridMapEditor();
// End Cross Module References
	void UGridMapTileSetFactory::StaticRegisterNativesUGridMapTileSetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridMapTileSetFactory);
	UClass* Z_Construct_UClass_UGridMapTileSetFactory_NoRegister()
	{
		return UGridMapTileSetFactory::StaticClass();
	}
	struct Z_Construct_UClass_UGridMapTileSetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGridMapTileSetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMapEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGridMapTileSetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetFactories/GridMapTileSetFactory.h" },
		{ "ModuleRelativePath", "Private/AssetFactories/GridMapTileSetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGridMapTileSetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridMapTileSetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridMapTileSetFactory_Statics::ClassParams = {
		&UGridMapTileSetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGridMapTileSetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGridMapTileSetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGridMapTileSetFactory()
	{
		if (!Z_Registration_Info_UClass_UGridMapTileSetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridMapTileSetFactory.OuterSingleton, Z_Construct_UClass_UGridMapTileSetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGridMapTileSetFactory.OuterSingleton;
	}
	template<> GRIDMAPEDITOR_API UClass* StaticClass<UGridMapTileSetFactory>()
	{
		return UGridMapTileSetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGridMapTileSetFactory);
	UGridMapTileSetFactory::~UGridMapTileSetFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_GridMapTileSetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_GridMapTileSetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGridMapTileSetFactory, UGridMapTileSetFactory::StaticClass, TEXT("UGridMapTileSetFactory"), &Z_Registration_Info_UClass_UGridMapTileSetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridMapTileSetFactory), 337962804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_GridMapTileSetFactory_h_1161874309(TEXT("/Script/GridMapEditor"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_GridMapTileSetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_GridMapTileSetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
