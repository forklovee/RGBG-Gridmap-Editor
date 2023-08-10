// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GridMap/Public/GridmapRoom.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridmapRoom() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom();
	GRIDMAP_API UClass* Z_Construct_UClass_AGridMapRoom_NoRegister();
	GRIDMAP_API UClass* Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GridMap();
// End Cross Module References
	DEFINE_FUNCTION(AGridMapRoom::execBuildRoom)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BuildRoom();
		P_NATIVE_END;
	}
	void AGridMapRoom::StaticRegisterNativesAGridMapRoom()
	{
		UClass* Class = AGridMapRoom::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BuildRoom", &AGridMapRoom::execBuildRoom },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GridmapRoom.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGridMapRoom, nullptr, "BuildRoom", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGridMapRoom_BuildRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGridMapRoom_BuildRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGridMapRoom);
	UClass* Z_Construct_UClass_AGridMapRoom_NoRegister()
	{
		return AGridMapRoom::StaticClass();
	}
	struct Z_Construct_UClass_AGridMapRoom_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RoomData_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RoomData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEditorShowFogOfWar_MetaData[];
#endif
		static void NewProp_bEditorShowFogOfWar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEditorShowFogOfWar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGridMapRoom_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GridMap,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGridMapRoom_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGridMapRoom_BuildRoom, "BuildRoom" }, // 258602754
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridMapRoom_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GridmapRoom.h" },
		{ "ModuleRelativePath", "Public/GridmapRoom.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridMapRoom_Statics::NewProp_RoomData_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Room Data" },
		{ "ConstructorParam", "RoomDataAsset" },
		{ "DisplayName", "Room Data Asset" },
		{ "ExposeOnSpawn", "true" },
		{ "ModuleRelativePath", "Public/GridmapRoom.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AGridMapRoom_Statics::NewProp_RoomData = { "RoomData", nullptr, (EPropertyFlags)0x0015000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGridMapRoom, RoomData), Z_Construct_UClass_UGridMapRoomDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGridMapRoom_Statics::NewProp_RoomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridMapRoom_Statics::NewProp_RoomData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Room Data" },
		{ "DisplayName", "Show Fog Of War in Editor" },
		{ "ModuleRelativePath", "Public/GridmapRoom.h" },
	};
#endif
	void Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar_SetBit(void* Obj)
	{
		((AGridMapRoom*)Obj)->bEditorShowFogOfWar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar = { "bEditorShowFogOfWar", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGridMapRoom), &Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGridMapRoom_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridMapRoom_Statics::NewProp_RoomData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGridMapRoom_Statics::NewProp_bEditorShowFogOfWar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGridMapRoom_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGridMapRoom>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGridMapRoom_Statics::ClassParams = {
		&AGridMapRoom::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGridMapRoom_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGridMapRoom_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGridMapRoom_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGridMapRoom_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGridMapRoom()
	{
		if (!Z_Registration_Info_UClass_AGridMapRoom.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGridMapRoom.OuterSingleton, Z_Construct_UClass_AGridMapRoom_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGridMapRoom.OuterSingleton;
	}
	template<> GRIDMAP_API UClass* StaticClass<AGridMapRoom>()
	{
		return AGridMapRoom::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGridMapRoom);
	AGridMapRoom::~AGridMapRoom() {}
	struct Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_GridmapRoom_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_GridmapRoom_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGridMapRoom, AGridMapRoom::StaticClass, TEXT("AGridMapRoom"), &Z_Registration_Info_UClass_AGridMapRoom, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGridMapRoom), 3344298900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_GridmapRoom_h_3814383727(TEXT("/Script/GridMap"),
		Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_GridmapRoom_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_RGBG_5_1_5_2_Plugins_Developer_GridMapEditor_master_Source_GridMap_Public_GridmapRoom_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
