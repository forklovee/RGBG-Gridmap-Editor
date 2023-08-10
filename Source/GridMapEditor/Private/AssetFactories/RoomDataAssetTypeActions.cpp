#include "RoomDataAssetTypeActions.h"

#include "DataAssets/GridMapRoomDataAsset.h"


#define LOCTEXT_NAMESPACE "GridMapEditor"

FRoomDataAssetTypeActions::FRoomDataAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FRoomDataAssetTypeActions::GetName() const
{
	return LOCTEXT("FRGBGRoomDataAssetTypeActions", "Grid Map Room Data");
}

FColor FRoomDataAssetTypeActions::GetTypeColor() const
{
	return FColor(201, 29, 85);
}

UClass* FRoomDataAssetTypeActions::GetSupportedClass() const
{
	return UGridMapRoomDataAsset::StaticClass();
}

uint32 FRoomDataAssetTypeActions::GetCategories()
{
	return AssetCategory;
}
