#include "Widgets/TileSetPaletteItem.h"
#include "AssetThumbnail.h"
#include "GridMapEditorMode.h"
#include "Widgets/STileSetPalette.h"

FTileSetPaletteItemModel::FTileSetPaletteItemModel(UTileStyle* TileStyle, TSharedRef<STileSetPalette> InTileSetPalette, FGridMapEditorMode* InEditorMode)
	: TileStyle(TileStyle)
	, TileSetPalette(InTileSetPalette)
	, EditorMode(InEditorMode)
{
}


void STileSetItemTile::Construct(const FArguments& InArgs, UTileStyle* TileStyle)
{
	FAssetData AssetData(TileStyle);
	
}

void STileSetItemTile::Construct(const FArguments& InArgs, TSharedRef<STableViewBase> InOwnerTableView, TSharedPtr<FAssetThumbnailPool> InThumbnailPool, UTileStyle* TileStyle)
{
	FAssetData AssetData(TileStyle);
	int32 MaxThumbnailSize = 64;
	TSharedPtr<FAssetThumbnail> Thumbnail = MakeShareable(new FAssetThumbnail(AssetData, MaxThumbnailSize, MaxThumbnailSize, InThumbnailPool));

	FAssetThumbnailConfig ThumbnailConfig;
	STableRow<UTileStyle*>::Construct(
		STableRow<UTileStyle*>::FArguments()
		.Style(FAppStyle::Get(), "ContentBrowser.AssetListView.TableRow")
		.Padding(1.f)
		.Content()
		[
			SNew(SBorder)
			.Padding(4.f)
			.BorderImage(FAppStyle::GetBrush("ContentBrowser.ThumbnailShadow"))
			.ForegroundColor(FLinearColor::White)
			//.ColorAndOpacity(this, &SFoliagePaletteItemTile::GetTileColorAndOpacity)
			[
				Thumbnail->MakeThumbnailWidget(ThumbnailConfig)
			]
		]
	, InOwnerTableView);
}
