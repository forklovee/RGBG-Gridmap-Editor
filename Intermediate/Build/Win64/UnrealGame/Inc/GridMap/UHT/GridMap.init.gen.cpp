// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridMap_init() {}
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature();
	GRIDMAP_API UFunction* Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GridMap;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GridMap()
	{
		if (!Z_Registration_Info_UPackage__Script_GridMap.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GridMap_OnDoorClosedSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GridMap_OnDoorOpenSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GridMap_OnPawnExitedDoorAreaSignature__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GridMap_OnPlayerWalkedThroughDoorSignature__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GridMap",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4E2408E1,
				0x65998693,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GridMap.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GridMap.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GridMap(Z_Construct_UPackage__Script_GridMap, TEXT("/Script/GridMap"), Z_Registration_Info_UPackage__Script_GridMap, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4E2408E1, 0x65998693));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
