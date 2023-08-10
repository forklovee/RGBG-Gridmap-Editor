#include "GridmapLevelCollectionDataAssetTypeActions.h"

#include "DataAssets/GridmapLevelCollectionDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

FLevelCompilationDataAssetTypeActions::FLevelCompilationDataAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FLevelCompilationDataAssetTypeActions::GetName() const
{
	return LOCTEXT("FRGBGRoomDataAssetTypeActions", "Level Collection");
}

FColor FLevelCompilationDataAssetTypeActions::GetTypeColor() const
{
	return FColor(201, 29, 85);
}

UClass* FLevelCompilationDataAssetTypeActions::GetSupportedClass() const
{
	return UGridmapLevelCollectionDataAsset::StaticClass();
}

uint32 FLevelCompilationDataAssetTypeActions::GetCategories()
{
	return AssetCategory;
}
