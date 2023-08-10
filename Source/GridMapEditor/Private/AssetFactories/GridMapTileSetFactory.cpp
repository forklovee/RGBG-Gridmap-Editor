// Fill out your copyright notice in the Description page of Project Settings.


#include "GridMapTileSetFactory.h"

#include "TileStyle.h"
// #include "TileSet.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

UGridMapTileSetFactory::UGridMapTileSetFactory(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UTileStyle::StaticClass();
}

UObject* UGridMapTileSetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	UTileStyle* NewTileSet = NewObject<UTileStyle>(InParent, Class, Name, Flags | RF_Transactional);
	NewTileSet->PostEditChange();
	return NewTileSet;
}

#undef LOCTEXT_NAMESPACE
