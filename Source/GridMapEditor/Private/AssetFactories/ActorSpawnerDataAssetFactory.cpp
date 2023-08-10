#include "ActorSpawnerDataAssetFactory.h"
#include "Spawners/SpawnerDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

UActorSpawnerDataAssetFactory::UActorSpawnerDataAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = USpawnerDataAsset::StaticClass();
}

UObject* UActorSpawnerDataAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	USpawnerDataAsset* NewTileSet = NewObject<USpawnerDataAsset>(InParent, Class, Name, Flags | RF_Transactional);
	NewTileSet->PostEditChange();
	return NewTileSet;
}

#undef LOCTEXT_NAMESPACE