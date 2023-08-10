
#include "GridmapLevelCollectionDataAssetFactory.h"

#include "DataAssets/GridmapLevelCollectionDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

ULevelCompilationDataAssetFactory::ULevelCompilationDataAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UGridmapLevelCollectionDataAsset::StaticClass();
}

UObject* ULevelCompilationDataAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UGridmapLevelCollectionDataAsset* NewTileSet = NewObject<UGridmapLevelCollectionDataAsset>(InParent, Class, Name, Flags | RF_Transactional);
	NewTileSet->PostEditChange();
	return NewTileSet;
}

#undef LOCTEXT_NAMESPACE