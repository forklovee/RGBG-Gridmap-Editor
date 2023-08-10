// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMapEditor/Private/AssetFactories/RoomDataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomDataAssetFactory() {}
// Cross Module References
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_URoomDataAssetFactory();
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_URoomDataAssetFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_GridMapEditor();
// End Cross Module References
	void URoomDataAssetFactory::StaticRegisterNativesURoomDataAssetFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URoomDataAssetFactory);
	UClass* Z_Construct_UClass_URoomDataAssetFactory_NoRegister()
	{
		return URoomDataAssetFactory::StaticClass();
	}
	struct Z_Construct_UClass_URoomDataAssetFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URoomDataAssetFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMapEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URoomDataAssetFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssetFactories/RoomDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/AssetFactories/RoomDataAssetFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URoomDataAssetFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URoomDataAssetFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URoomDataAssetFactory_Statics::ClassParams = {
		&URoomDataAssetFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URoomDataAssetFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URoomDataAssetFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URoomDataAssetFactory()
	{
		if (!Z_Registration_Info_UClass_URoomDataAssetFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URoomDataAssetFactory.OuterSingleton, Z_Construct_UClass_URoomDataAssetFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URoomDataAssetFactory.OuterSingleton;
	}
	template<> GRIDMAPEDITOR_API UClass* StaticClass<URoomDataAssetFactory>()
	{
		return URoomDataAssetFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URoomDataAssetFactory);
	URoomDataAssetFactory::~URoomDataAssetFactory() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_RoomDataAssetFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_RoomDataAssetFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URoomDataAssetFactory, URoomDataAssetFactory::StaticClass, TEXT("URoomDataAssetFactory"), &Z_Registration_Info_UClass_URoomDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URoomDataAssetFactory), 3055165680U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_RoomDataAssetFactory_h_614702146(TEXT("/Script/GridMapEditor"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_RoomDataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_AssetFactories_RoomDataAssetFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
