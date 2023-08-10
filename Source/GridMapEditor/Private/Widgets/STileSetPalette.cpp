#include "Widgets/STileSetPalette.h"
#include "AssetThumbnail.h"
#include "GridMapEditorMode.h"
#include "Misc/FeedbackContext.h"
#include "Misc/ScopedSlowTask.h"
#include "SPositiveActionButton.h"
#include "PropertyCustomizationHelpers.h"
#include "Widgets/Input/SComboButton.h"
#include "Widgets/Input/SSearchBox.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/TileSetPaletteItem.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

void STileSetPalette::Construct(const FArguments& InArgs)
{
	EditorMode = InArgs._GridMapEditorMode;

	ThumbnailPool = MakeShareable(new FAssetThumbnailPool(64, false));

	ChildSlot
	[
		SNew(SVerticalBox)

		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Fill)
		[
			SNew(SBorder)
				.BorderImage(FAppStyle::GetBrush("DetailsView.CategoryTop"))
			.Padding(FMargin(6.f, 2.f))
			.BorderBackgroundColor(FLinearColor(.6f, .6f, .6f, 1.0f))
			[
				SNew(SHorizontalBox)
				+ SHorizontalBox::Slot()
				.HAlign(HAlign_Left)
				.AutoWidth()
				[
					// +Add Foliage Type button
					SAssignNew(AddTileSetCombo, SPositiveActionButton)
					.Text(LOCTEXT("AddTileStyleButtonLabel", "Add Tile Style"))
					.Icon(FAppStyle::Get().GetBrush("Icons.Plus"))
					.OnGetMenuContent(this, &STileSetPalette::GetAddTileStylePicker)
				]
			]
		]

		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(HAlign_Fill)
		[
			BuildPaletteView()
		]

	];
}

STileSetPalette::~STileSetPalette()
{}

TSharedRef<SWidget> STileSetPalette::GetAddTileStylePicker()
{
	TArray<class UFactory*> EmptyFactoryArray;

	TArray<const UClass*> ClassFilters;
	ClassFilters.Add(UTileStyle::StaticClass());

	return PropertyCustomizationHelpers::MakeAssetPickerWithMenu(
		FAssetData(),
		/*AllowClear*/ false,
		/*AllowedClass*/ ClassFilters,
		/*NewAssetFactories*/ EmptyFactoryArray,
		FOnShouldFilterAsset(),
		FOnAssetSelected::CreateSP(this, &STileSetPalette::AddTileStyle),
		FSimpleDelegate());
}

void STileSetPalette::AddTileStyle(const FAssetData& AssetData)
{
	if (AddTileSetCombo.IsValid())
	{
		// AddTileSetCombo->SetIsOpen(false);
	}

	GWarn->BeginSlowTask(LOCTEXT("AddTileSet_LoadPackage", "Loading Tile Set"), true, false);
	UObject* Asset = AssetData.GetAsset();
	GWarn->EndSlowTask();

	UTileStyle* TileStyle = Cast<UTileStyle>(Asset);
	if (TileStyle)
	{
		EditorMode->AddActiveTileStyle(TileStyle);
	}

	UpdatePalette(true);
}

void STileSetPalette::OnSearchTextChanged(const FText& InFilterText)
{
	/*
	TypeFilter->SetRawFilterText(InFilterText);
	SearchBoxPtr->SetError(TypeFilter->GetFilterErrorText());
	UpdatePalette();
	*/
}

TSharedRef<SWidget> STileSetPalette::BuildPaletteView()
{
	const FText BlankText = FText::GetEmpty();

	FilteredItems.Reset();
	for (UTileStyle* TileStyle : EditorMode->GetActiveTileStyles())
	{
		FilteredItems.Add(TileStyle);
	}

	// Tile View Widget
	SAssignNew(TileViewWidget, SGridMapTileSetTileView)
		.ListItemsSource(&FilteredItems)
		.SelectionMode(ESelectionMode::Single)
		.OnGenerateTile(this, &STileSetPalette::GenerateTile)
		//.OnContextMenuOpening(this, &SFoliagePalette::ConstructFoliageTypeContextMenu)
		.OnSelectionChanged(this, &STileSetPalette::OnSelectionChanged)
		.ItemHeight(64)//this, &SFoliagePalette::GetScaledThumbnailSize)
		.ItemWidth(64)//this, &SFoliagePalette::GetScaledThumbnailSize)
		.ItemAlignment(EListItemAlignment::LeftAligned)
		.ClearSelectionOnClick(false)
		//.OnMouseButtonDoubleClick(this, &SFoliagePalette::OnItemDoubleClicked);
		;

	return TileViewWidget.ToSharedRef();
}

TSharedRef<ITableRow> STileSetPalette::GenerateTile(UTileStyle* Item, const TSharedRef<STableViewBase>& OwnerTable)
{
	return SNew(STileSetItemTile, OwnerTable, ThumbnailPool, Item);

	// Refresh the palette to ensure that thumbnails are correct
	RefreshPalette();
}

void STileSetPalette::OnSelectionChanged(UTileStyle* Item, ESelectInfo::Type SelectInfo)
{
	//RefreshDetailsWidget();

	EditorMode->SetActiveTileStyle(Item);	
}

void STileSetPalette::UpdatePalette(bool bRebuildItems)
{
	bItemsNeedRebuild |= bRebuildItems;

	if (!bIsRebuildTimerRegistered)
	{
		bIsRebuildTimerRegistered = true;
		RegisterActiveTimer(0.f, FWidgetActiveTimerDelegate::CreateSP(this, &STileSetPalette::UpdatePaletteItems));
	}
}

EActiveTimerReturnType STileSetPalette::UpdatePaletteItems(double InCurrentTime, float InDeltaTime)
{
	if (bItemsNeedRebuild)
	{
		bItemsNeedRebuild = false;

		// Cache the currently selected items
		TArray<UTileStyle*> PreviouslySelectedItems = TileViewWidget->GetSelectedItems();
		TileViewWidget->ClearSelection();

		// Rebuild the list of palette items
		FilteredItems.Reset();
		for (UTileStyle* TileStyles : EditorMode->GetActiveTileStyles())
		{
			FilteredItems.Add(TileStyles);
		}


		// Restore the selection
		for (auto& PrevSelectedItem : PreviouslySelectedItems)
		{
			// Select any replacements for previously selected foliage types
			for (auto& Item : FilteredItems)
			{
				if (Item->GetName() == PrevSelectedItem->GetName())
				{
					TileViewWidget->SetItemSelection(Item, true);
					break;
				}
			}
		}
	}

#if false
	// Update the filtered items
	FilteredItems.Empty();
	for (auto& Item : PaletteItems)
	{
		if (TypeFilter->PassesFilter(Item))
		{
			FilteredItems.Add(Item);
		}
	}

#endif
	// Refresh the appropriate view
	TileViewWidget->RequestListRefresh();

	bIsRebuildTimerRegistered = false;
	return EActiveTimerReturnType::Stop;
}

void STileSetPalette::RefreshPalette()
{
	// Do not register the refresh timer if we're pending a rebuild; rebuild should cause the palette to refresh
	if (!bIsRefreshTimerRegistered && !bIsRebuildTimerRegistered)
	{
		bIsRefreshTimerRegistered = true;
		RegisterActiveTimer(0.f, FWidgetActiveTimerDelegate::CreateSP(this, &STileSetPalette::RefreshPaletteItems));
	}
}

EActiveTimerReturnType STileSetPalette::RefreshPaletteItems(double InCurrentTime, float InDeltaTime)
{
	// Do not refresh the palette if we're waiting on a rebuild
	if (!bItemsNeedRebuild)
	{
		TileViewWidget->RequestListRefresh();
	}

	bIsRefreshTimerRegistered = false;
	return EActiveTimerReturnType::Stop;
}


#undef LOCTEXT_NAMESPACE