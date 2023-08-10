// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/GridMapDynamicCorridor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridMapDynamicCorridor() {}
// Cross Module References
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapDynamicCorridor();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapDynamicCorridor_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	void AGridMapDynamicCorridor::StaticRegisterNativesAGridMapDynamicCorridor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridMapDynamicCorridor);
	UClass* Z_Construct_UClass_AGridMapDynamicCorridor_NoRegister()
	{
		return AGridMapDynamicCorridor::StaticClass();
	}
	struct Z_Construct_UClass_AGridMapDynamicCorridor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridMapDynamicCorridor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridMapRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridMapDynamicCorridor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GridMapDynamicCorridor.h" },
		{ "ModuleRelativePath", "Public/GridMapDynamicCorridor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridMapDynamicCorridor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridMapDynamicCorridor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridMapDynamicCorridor_Statics::ClassParams = {
		&AGridMapDynamicCorridor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridMapDynamicCorridor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridMapDynamicCorridor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridMapDynamicCorridor()
	{
		if (!Z_Registration_Info_UClass_AGridMapDynamicCorridor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridMapDynamicCorridor.OuterSingleton, Z_Construct_UClass_AGridMapDynamicCorridor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridMapDynamicCorridor.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<AGridMapDynamicCorridor>()
	{
		return AGridMapDynamicCorridor::StaticClass();
	}
	AGridMapDynamicCorridor::AGridMapDynamicCorridor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridMapDynamicCorridor);
	AGridMapDynamicCorridor::~AGridMapDynamicCorridor() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_GridMapDynamicCorridor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_GridMapDynamicCorridor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridMapDynamicCorridor, AGridMapDynamicCorridor::StaticClass, TEXT("AGridMapDynamicCorridor"), &Z_Registration_Info_UClass_AGridMapDynamicCorridor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridMapDynamicCorridor), 542861543U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_GridMapDynamicCorridor_h_1206744125(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_GridMapDynamicCorridor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_GridMapDynamicCorridor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
