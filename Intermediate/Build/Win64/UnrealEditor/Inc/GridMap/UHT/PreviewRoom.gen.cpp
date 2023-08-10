// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/PreviewRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewRoom() {}
// Cross Module References
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom();
	GRIDMAP_API UClass* Z_Construct_UClass_APreviewRoom();
	GRIDMAP_API UClass* Z_Construct_UClass_APreviewRoom_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	void APreviewRoom::StaticRegisterNativesAPreviewRoom()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreviewRoom);
	UClass* Z_Construct_UClass_APreviewRoom_NoRegister()
	{
		return APreviewRoom::StaticClass();
	}
	struct Z_Construct_UClass_APreviewRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreviewRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGridMapRoom,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PreviewRoom.h" },
		{ "ModuleRelativePath", "Public/PreviewRoom.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreviewRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreviewRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreviewRoom_Statics::ClassParams = {
		&APreviewRoom::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APreviewRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APreviewRoom()
	{
		if (!Z_Registration_Info_UClass_APreviewRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreviewRoom.OuterSingleton, Z_Construct_UClass_APreviewRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreviewRoom.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<APreviewRoom>()
	{
		return APreviewRoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreviewRoom);
	APreviewRoom::~APreviewRoom() {}
	struct Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_PreviewRoom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_PreviewRoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreviewRoom, APreviewRoom::StaticClass, TEXT("APreviewRoom"), &Z_Registration_Info_UClass_APreviewRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreviewRoom), 863442092U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_PreviewRoom_h_3733923846(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_PreviewRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_porlo_Documents_MyProject_Plugins_Developer_GridMapEditor_Source_GridMap_Public_PreviewRoom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
