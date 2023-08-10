
#include "LevelDataAssetFactory.h"

#include "DataAssets/BaseLevelDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

ULevelDataAssetFactory::ULevelDataAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UBaseLevelDataAsset::StaticClass();
}

UObject* ULevelDataAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UBaseLevelDataAsset* NewTileSet = NewObject<UBaseLevelDataAsset>(InParent, Class, Name, Flags | RF_Transactional);
	NewTileSet->PostEditChange();
	return NewTileSet;
}

#undef LOCTEXT_NAMESPACE