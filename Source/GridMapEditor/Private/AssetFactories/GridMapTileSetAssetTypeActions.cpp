#include "GridMapTileSetAssetTypeActions.h"
#include "TileStyle.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

FGridMapTileSetAssetTypeActions::FGridMapTileSetAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FGridMapTileSetAssetTypeActions::GetName() const
{
	return LOCTEXT("FGridMapTileSetAssetTypeActionsName", "Tile Style");
}

FColor FGridMapTileSetAssetTypeActions::GetTypeColor() const
{
	return FColorList::Orange;
}

UClass* FGridMapTileSetAssetTypeActions::GetSupportedClass() const
{
	return UTileStyle::StaticClass();
}

uint32 FGridMapTileSetAssetTypeActions::GetCategories()
{
	return AssetCategory;
}
