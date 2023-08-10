
#include "RoomDataAssetFactory.h"

#include "DataAssets/GridMapRoomDataAsset.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

URoomDataAssetFactory::URoomDataAssetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UGridMapRoomDataAsset::StaticClass();
}

UObject* URoomDataAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UGridMapRoomDataAsset* NewTileSet = NewObject<UGridMapRoomDataAsset>(InParent, Class, Name, Flags | RF_Transactional);
	NewTileSet->PostEditChange();
	return NewTileSet;
}

#undef LOCTEXT_NAMESPACE