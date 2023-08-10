#pragma once

#include "CoreMinimal.h"
#include "TileStyle.h"
#include "Styling/SlateTypes.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/Views/STableRow.h"

// class UGridMapTileSet;
class STileSetPalette;
class FGridMapEditorMode;
class FAssetThumbnailPool;

class FTileSetPaletteItemModel : public TSharedFromThis<FTileSetPaletteItemModel>
{
public:
	FTileSetPaletteItemModel(UTileStyle* InTileStyle, TSharedRef<STileSetPalette> InTileSetPalette, FGridMapEditorMode* InEditorMode);

private:
	UTileStyle* TileStyle;
	TWeakPtr<STileSetPalette> TileSetPalette;
	FGridMapEditorMode* EditorMode;
};

class STileSetItemTile : public STableRow<UTileStyle*>
{
public:
	SLATE_BEGIN_ARGS(STileSetItemTile) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, UTileStyle* TileStyle);
	void Construct(const FArguments& InArgs, TSharedRef<STableViewBase> InOwnerTableView, TSharedPtr<FAssetThumbnailPool> InThumbnailPool, UTileStyle* TileStyle);
};