#include "ActorSpawnerDataAssetTypeActions.h"

#include "Spawners/SpawnerDataAsset.h"


#define LOCTEXT_NAMESPACE "GridMapEditor"

FActorSpawnerDataAssetTypeActions::FActorSpawnerDataAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
	: AssetCategory(InAssetCategory)
{
}

FText FActorSpawnerDataAssetTypeActions::GetName() const
{
	return LOCTEXT("FActorSpawnerDataAsset", "Actor Spawner Data Asset");
}

FColor FActorSpawnerDataAssetTypeActions::GetTypeColor() const
{
	return FColor(201, 29, 85);
}

UClass* FActorSpawnerDataAssetTypeActions::GetSupportedClass() const
{
	return USpawnerDataAsset::StaticClass();
}

uint32 FActorSpawnerDataAssetTypeActions::GetCategories()
{
	return AssetCategory;
}
