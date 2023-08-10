// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMapEditor/Private/TileSet_ThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileSet_ThumbnailRenderer() {}
// Cross Module References
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UTileSet_ThumbnailRenderer();
	GRIDMAPEDITOR_API UClass* Z_Construct_UClass_UTileSet_ThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UStaticMeshThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_GridMapEditor();
// End Cross Module References
	void UTileSet_ThumbnailRenderer::StaticRegisterNativesUTileSet_ThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileSet_ThumbnailRenderer);
	UClass* Z_Construct_UClass_UTileSet_ThumbnailRenderer_NoRegister()
	{
		return UTileSet_ThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStaticMeshThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMapEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TileSet_ThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/TileSet_ThumbnailRenderer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileSet_ThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::ClassParams = {
		&UTileSet_ThumbnailRenderer::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileSet_ThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UTileSet_ThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileSet_ThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UTileSet_ThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileSet_ThumbnailRenderer.OuterSingleton;
	}
	template<> GRIDMAPEDITOR_API UClass* StaticClass<UTileSet_ThumbnailRenderer>()
	{
		return UTileSet_ThumbnailRenderer::StaticClass();
	}
	UTileSet_ThumbnailRenderer::UTileSet_ThumbnailRenderer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileSet_ThumbnailRenderer);
	UTileSet_ThumbnailRenderer::~UTileSet_ThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_TileSet_ThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_TileSet_ThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileSet_ThumbnailRenderer, UTileSet_ThumbnailRenderer::StaticClass, TEXT("UTileSet_ThumbnailRenderer"), &Z_Registration_Info_UClass_UTileSet_ThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileSet_ThumbnailRenderer), 567389685U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_TileSet_ThumbnailRenderer_h_319998979(TEXT("/Script/GridMapEditor"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_TileSet_ThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMapEditor_Private_TileSet_ThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
