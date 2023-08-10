#include "LevelDataAssetTypeActions.h"

#include "DataAssets/BaseLevelDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

FLevelDataAssetTypeActions::FLevelDataAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FLevelDataAssetTypeActions::GetName() const
{
	return LOCTEXT("FRGBGRoomDataAssetTypeActions", "Level Data");
}

FColor FLevelDataAssetTypeActions::GetTypeColor() const
{
	return FColor(201, 29, 85);
}

UClass* FLevelDataAssetTypeActions::GetSupportedClass() const
{
	return UBaseLevelDataAsset::StaticClass();
}

uint32 FLevelDataAssetTypeActions::GetCategories()
{
	return AssetCategory;
}
