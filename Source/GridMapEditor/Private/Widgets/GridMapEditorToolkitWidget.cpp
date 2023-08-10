#include "GridMapEditorToolkitWidget.h"
#include "Editor.h"
#include "EditorModeManager.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "GridMapEditCommands.h"
#include "GridMapEditorMode.h"
#include "GridMapStyleSet.h"
#include "PreviewRoom.h"
#include "SlateOptMacros.h"
#include "PropertyCustomizationHelpers.h"
#include "SPrimaryButton.h"
#include "AssetRegistry/AssetRegistryModule.h"
// #include "HoloLens/HoloLensPlatformApplicationMisc.h"
#include "EditorStyleSet.h"
#include "GenericPlatform/GenericPlatformApplicationMisc.h"
#include "UObject/SavePackage.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SNumericEntryBox.h"
#include "Widgets/Layout/SHeader.h"
#include "Widgets/Notifications/SErrorText.h"
#include "Widgets/STileSetPalette.h"
#include "Widgets/Layout/SExpandableArea.h"
#include "WorkflowOrientedApp/SContentReference.h"
#include "Widgets/Layout/SScrollBox.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION
void SGridMapEditorToolkitWidget::Construct(const FArguments& InArgs)
{
	GridMapEditorMode = (FGridMapEditorMode*)GLevelEditorModeTools().GetActiveMode(FGridMapEditorMode::EM_GridMapEditorModeId);

	const FText BlankText = FText::GetEmpty();
	const FText EditedRoomDataText = GridMapEditorMode->GetEditedRoomData() != nullptr ? FText::FromString(GridMapEditorMode->GetEditedRoomData()->RoomName) : FText::FromString("No Room Data.");

	FSlateFontInfo EditedRoomDataTextStyle = FCoreStyle::Get().GetFontStyle("EmbossedText");
	EditedRoomDataTextStyle.Size = 9.f;

	// FOnClicked::CreateSP(this, &SGridMapEditorToolkitWidget::SaveChanges);
	
	ChildSlot[
		SNew(SVerticalBox)
		// Error text goes in the first vertical slot
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0,0,0,5)
		[
			SAssignNew(ErrorText, SErrorText)
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.Padding(0,0,0,5)
		[
			SNew(SHeader)
			[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Edited Room Data Options"))
			.Font(FGridMapStyleSet::StandardFont)
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(EHorizontalAlignment::HAlign_Fill)
		.Padding(10, 10, 0, 5)
		[
			SNew(SHorizontalBox)
			.Visibility_Lambda(
			[=]()-> EVisibility{
					if (GridMapEditorMode->GetEditedRoomData() != nullptr) return EVisibility::Collapsed;
					return EVisibility::Visible;
				}
			)
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.HAlign(EHorizontalAlignment::HAlign_Left)
			.FillWidth(0.35f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("NewRoomName", "New Room Name"))
				.Font(EditedRoomDataTextStyle)
			]
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.HAlign(EHorizontalAlignment::HAlign_Left)
			.FillWidth(0.5f)
			[
				SNew(SEditableText)
				.HintText(LOCTEXT("RoomName", "Room Name"))
				.Font(EditedRoomDataTextStyle)
			]
			+ SHorizontalBox::Slot()
			.VAlign(EVerticalAlignment::VAlign_Center)
			.HAlign(EHorizontalAlignment::HAlign_Left)
			.FillWidth(0.5f)
			[
				SNew(SPrimaryButton)
				.Text(LOCTEXT("Create", "Create"))
			]
		]
		+ SVerticalBox::Slot()
		.AutoHeight()
		.HAlign(EHorizontalAlignment::HAlign_Fill)
		.Padding(0)
		[
			SNew(SBorder)
			.Padding(8)
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				.Padding(5, 2, 5, 2)
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.VAlign(EVerticalAlignment::VAlign_Center)
					.HAlign(EHorizontalAlignment::HAlign_Left)
					.FillWidth(0.3f)
					[
						SNew(STextBlock)
						.Text(LOCTEXT("EditedRoomData", "Room Data"))
						.Font(EditedRoomDataTextStyle)
					]
					+SHorizontalBox::Slot()
					.VAlign(EVerticalAlignment::VAlign_Center)
					.HAlign(EHorizontalAlignment::HAlign_Left)
					.Padding(5, 0, 0, 0)
					.FillWidth(0.7f)
					[
						SNew(SContentReference)
						.WidthOverride(120.f)
						.AssetReference(this, &SGridMapEditorToolkitWidget::GetCurrentRoomData)
						.OnSetReference(this, &SGridMapEditorToolkitWidget::OnChangeRoomData)
						.ShowToolsButton(false)
						.AllowedClass(UGridMapRoomDataAsset::StaticClass())
						.AllowSelectingNewAsset(true)
						.AllowClearingReference(true)
					]
				]
				+SVerticalBox::Slot()
				.Padding(5, 5, 5, 2)
				[
					SNew(SHorizontalBox)
					+ SHorizontalBox::Slot()
					.VAlign(EVerticalAlignment::VAlign_Center)
					.HAlign(EHorizontalAlignment::HAlign_Left)
					.Padding(0, 0, 0, 0)
					.FillWidth(0.25f)
					[
						SNew(SButton)
						.IsEnabled_Lambda(
						[=]()-> bool{
								return GridMapEditorMode->GetEditedRoomData() != nullptr;
							}
						)
						.Text(LOCTEXT("Clear", "Clear Reference"))
						.OnClicked(this, &SGridMapEditorToolkitWidget::ClearEditedRoomDataReference)
					]
					+ SHorizontalBox::Slot()
					.VAlign(EVerticalAlignment::VAlign_Center)
					.HAlign(EHorizontalAlignment::HAlign_Left)
					.Padding(2, 0, 0, 0)
					.FillWidth(0.25f)
					[
						SNew(SPrimaryButton)
						.IsEnabled_Lambda(
					[=]()-> bool{
							return GridMapEditorMode->GetEditedRoomData() != nullptr;
							}
						)
						.Text(LOCTEXT("SaveChanges", "Save"))
						.OnClicked(this, &SGridMapEditorToolkitWidget::SaveChanges)
					]
				]
			]
		]
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
		.VAlign(VAlign_Fill)
		.FillHeight(.08f)
		[
			SNew(SBorder)
			.Content()
			[
				BuildToolBar()
			]
		]
		+ SVerticalBox::Slot()
		.HAlign(HAlign_Fill)
        .VAlign(VAlign_Fill)
        .FillHeight(.6f)
        .Padding(0, 10, 0, 10)
		[
			SNew(SBorder)
			.IsEnabled_Lambda(
			[=]()-> bool{
					return GridMapEditorMode->GetEditedRoomData() != nullptr;
				}
			)
			.Content()
			[
				SNew(SVerticalBox)
				+SVerticalBox::Slot()
				[
					SNew(SScrollBox)
					+SScrollBox::Slot()
					[
						SNew(SVerticalBox)
						+ SVerticalBox::Slot()
						.VAlign(EVerticalAlignment::VAlign_Top)
						.AutoHeight()
						.Padding(0.f, 1.f, 2.f, 0.f)
						[
							BuildPaintOptions()
						]
						+ SVerticalBox::Slot()
						[
							BuildTileEditOptions()
						]
						+ SVerticalBox::Slot()
						[
							BuildRoomOptions()
						]
					]
				]
			]
		]
	];
}
END_SLATE_FUNCTION_BUILD_OPTIMIZATION

TSharedRef<SWidget> SGridMapEditorToolkitWidget::BuildToolBar()
{
	FSlimHorizontalToolBarBuilder Toolbar(GridMapEditorMode->UICommandList, FMultiBoxCustomization::None);
	//Toolbar.SetLabelVisibility(EVisibility::Collapsed);
	Toolbar.SetStyle(&FAppStyle::Get(), "SlimToolbar");
	{
		Toolbar.AddToolBarButton(FGridMapEditCommands::Get().SetPaintTiles);
		Toolbar.AddToolBarButton(FGridMapEditCommands::Get().SetSelectTiles);
		Toolbar.AddToolBarButton(FGridMapEditCommands::Get().SetTileSettings);
	}
	return SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.HAlign(EHorizontalAlignment::HAlign_Center)
		[
			SNew(SOverlay)
			+ SOverlay::Slot()
			[
				SNew(SBorder)
				.HAlign(HAlign_Center)
				.Padding(0)
				.BorderImage(FAppStyle::GetBrush("NoBorder"))
				.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute())
				[
					Toolbar.MakeWidget()
				]
			]
		];
}

TSharedRef<SWidget> SGridMapEditorToolkitWidget::BuildPaintOptions()
{
	FSlimHorizontalToolBarBuilder PaintModeToolBar = FSlimHorizontalToolBarBuilder(GridMapEditorMode->UIDoorCommandList, FMultiBoxCustomization::None);
	PaintModeToolBar.AddToolBarButton(FGridMapEditCommands::Get().SetRoomPaintMode);
	PaintModeToolBar.AddToolBarButton(FGridMapEditCommands::Get().SetDoorPaintMode);
	
	return 
		SNew(SVerticalBox)
		.Visibility(this, &SGridMapEditorToolkitWidget::GetVisibility_PaintOptions)
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		.Padding(FGridMapStyleSet::StandardLeftPadding)
		[
			SNew(SHeader)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "Brush"))
				.Font(FGridMapStyleSet::StandardFont)
			]
		]
		+SVerticalBox::Slot()
		.Padding(0,0,0,2.f)
		.AutoHeight()
		[
			SNew(SHorizontalBox)
			.ToolTipText(LOCTEXT("GridMapActiveTileset_ToolTip", "Currently Active TileSet"))
			
			+ SHorizontalBox::Slot()
			.Padding(FGridMapStyleSet::StandardLeftPadding)
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "Tile Brush"))
				.Font(FGridMapStyleSet::StandardFont)
			]
			+ SHorizontalBox::Slot()
			.Padding(FGridMapStyleSet::StandardLeftPadding)
			.AutoWidth()
			.MaxWidth(140.f)
			.VAlign(VAlign_Center)
			[
				SNew(SContentReference)
				.WidthOverride(140.f)
				.AssetReference(this, &SGridMapEditorToolkitWidget::GetCurrentTileStyle)
				.OnSetReference(this, &SGridMapEditorToolkitWidget::OnChangeTileStyle)
				.AllowedClass(UTileStyle::StaticClass())
				.AllowSelectingNewAsset(false)
				.AllowClearingReference(false)
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		.Padding(FGridMapStyleSet::StandardLeftPadding)
		[
			SNew(SHeader)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "Painting Mode"))
				.Font(FGridMapStyleSet::StandardFont)
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		[
			PaintModeToolBar.MakeWidget()
		]
		//
		
		+SVerticalBox::Slot()
		.VAlign(VAlign_Top)
		.Padding(0.f, 5.f, 0, 2.f)
		[
			SNew(SHorizontalBox)
			.Visibility(this, &SGridMapEditorToolkitWidget::GetVisibility_RoundCornerOption)
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Left)
			.Padding(FGridMapStyleSet::StandardLeftPadding)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("RoundedCorners", "Round up corners"))
				.Font(FGridMapStyleSet::StandardFont)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Left)
			[
				SNew(SCheckBox)
			]
		]
	// Foliage Palette
		+ SVerticalBox::Slot()
		.FillHeight(1.f)
		.VAlign(VAlign_Fill)
		.Padding(0.f, 15.f, 0.f, 15.f)
		[
			SAssignNew(TileSetPalette, STileSetPalette)
			.GridMapEditorMode(GridMapEditorMode)
		];
}

TSharedRef<SWidget> SGridMapEditorToolkitWidget::BuildTileEditOptions()
{
	SExpandableArea DoorSocketDetails = SExpandableArea();
	DoorSocketDetails.SetExpanded(false);

	const TSharedRef<SVerticalBox> DoorSocketEntries = SNew(SVerticalBox);
	for (uint8 i = 0; i < 4; i++)
	{
		FText SocketName = FText::FromString("None");
		FLinearColor Color = FLinearColor::Gray;
		switch (i)
		{
		case 0:
			SocketName = FText::FromString("Y-");
			Color = FLinearColor::Green;
			break;
		case 1:
			SocketName = FText::FromString("X+");
			Color = FLinearColor::Red;
			break;
		case 2:
			SocketName = FText::FromString("Y+");
			Color = FLinearColor::Green;
			break;
		case 3:
			SocketName = FText::FromString("X-");
			Color = FLinearColor::Red;
			break;
		}
		
		DoorSocketEntries->AddSlot()
		.Padding(0.f, 4.f)
		.VAlign(VAlign_Top)
		.AutoHeight()
		[
			SNew(SBorder)
			.Padding(8.f)
			.Content()
			[
				SNew(SExpandableArea)
				.InitiallyCollapsed(true)
				.HeaderContent()
				[
					SNew(SHorizontalBox)
					+SHorizontalBox::Slot()
					.VAlign(VAlign_Top)
					.AutoWidth()
					[
						SNew(SCheckBox) //0100
						.HAlign(HAlign_Center)
						.IsEnabled_Lambda
						([=]()-> bool
						{
							return GridMapEditorMode->GetSelectedTileData() != nullptr &&
							((bool)(GridMapEditorMode->GetSelectedTileData()->WallPlacement & (1 << i)));
						}
						)
						.IsChecked_Lambda
						(
						[=]()-> ECheckBoxState
						{
							if (GridMapEditorMode->GetSelectedTileData() != nullptr &&
							((bool)(GridMapEditorMode->GetSelectedTileData()->DoorPlacement & (1 << i))))
							{
								return ECheckBoxState::Checked;
							}
							return ECheckBoxState::Unchecked;
						}
						)
						.OnCheckStateChanged_Lambda([=](ECheckBoxState State)
						{
							if (GridMapEditorMode->GetSelectedTileData() != nullptr)
							{
								//Check if door is set (Checkbox is also set)
								if (GridMapEditorMode->GetSelectedTileData()->DoorPlacement & (1 << i)) //checked, remove door
									{
										GridMapEditorMode->GetSelectedTileData()->DoorPlacement &= (1 << i)^15;
									}
									else //unchecked, create door
										{
											GridMapEditorMode->GetSelectedTileData()->DoorPlacement |= 1 << i;
										}
										GridMapEditorMode->UpdateDoors(GridMapEditorMode->GetSelectedGridLocation());
									}
						}
						)
					]
					+SHorizontalBox::Slot()
					.HAlign(HAlign_Left)
					.Padding(10.f, 0.f)
					.AutoWidth()
					[
						SNew(STextBlock)
						.Text(SocketName)
						.ColorAndOpacity(Color)
					]
				]
				.BodyContent()
				[
					SNew(SVerticalBox)
					+SVerticalBox::Slot()
					.AutoHeight()
					.VAlign(VAlign_Top)
					.Padding(15.f, 5.f)
					[
						SNew(SHeader)
						[
							SNew(STextBlock)
							.Text(LOCTEXT("GridMapActiveTileset", "Options"))
							.Font(FGridMapStyleSet::StandardFont)
						]
					]
					+SVerticalBox::Slot()
					.AutoHeight()
					.VAlign(VAlign_Top)
					.Padding(25.f, 4.f)
					[
						SNew(SHorizontalBox)
						+SHorizontalBox::Slot()
						.Padding(10.f, 0.f)
						.AutoWidth()
						[
							SNew(STextBlock)
							.Text(FText::FromString("Merge with neighbor doors"))
						]
						+SHorizontalBox::Slot()
						.FillWidth(2.f)
						[
							SNew(SCheckBox).IsChecked(false)
						]
					]
				]
			]
		];
	}
	
	return 
		SNew(SVerticalBox)
		.Visibility(this, &SGridMapEditorToolkitWidget::GetVisibility_SelectedTileOptions)
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Fill)
		.HAlign(HAlign_Fill)
		.Padding(10.f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.Padding(10.f, 4.f)
			[
				SNew(STextBlock)
				.Text_Lambda([=]()->FText
				{
					const FVector SelectedTilePosition = GridMapEditorMode->GetSelectedGridLocation();
					return FText::FromString("Editing Tile: ("+FString::FromInt(SelectedTilePosition.X)+", "+FString::FromInt(SelectedTilePosition.Y)+")");	
				})
			]
			+SHorizontalBox::Slot()
			.AutoWidth()
			.HAlign(HAlign_Center)
			[
				SNew(SButton)
				.Text(FText::FromString("Copy Position"))
				.OnClicked_Lambda([=]()
				{
					const FVector SelectedTilePosition = GridMapEditorMode->GetSelectedGridLocation();
					FString StringPosition = "("+FString::FromInt(SelectedTilePosition.X)+", "+FString::FromInt(SelectedTilePosition.Y)+")";
					FGenericPlatformApplicationMisc::ClipboardCopy(*StringPosition);
					return FReply::Handled();
				}
				)
			]
			
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		.Padding(FGridMapStyleSet::StandardLeftPadding)
		[
			SNew(SHeader)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "Tile"))
				.Font(FGridMapStyleSet::StandardFont)
			]
		]
		+ SVerticalBox::Slot()
		.Padding(FGridMapStyleSet::StandardLeftPadding)
		.HAlign(HAlign_Fill)
		.AutoHeight()
		[
			SNew(SVerticalBox)
			+SVerticalBox::Slot()
			.Padding(0, 5, 0, 0)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("GridMapActiveTileset", "Round corners"))
					.Font(FGridMapStyleSet::StandardFont)
				]
				+SHorizontalBox::Slot()
				[
					SNew(SCheckBox)
					.IsChecked(false)
				]
			]
			+SVerticalBox::Slot()
			.Padding(0, 5, 0, 0)
			[
				SNew(SHorizontalBox)
				+SHorizontalBox::Slot()
				[
					SNew(STextBlock)
					.Text(LOCTEXT("GridMapActiveTileset", "Corner roundness"))
					.Font(FGridMapStyleSet::StandardFont)
				]
				+SHorizontalBox::Slot()
				[
					SNew(SSpinBox<int>)
					.MinValue(1)
					.MaxValue(6)
				]
			]
		]
		+SVerticalBox::Slot()
		.AutoHeight()
		.VAlign(VAlign_Center)
		.Padding(FGridMapStyleSet::StandardLeftPadding)
		[
			SNew(SHeader)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "Door Sockets"))
				.Font(FGridMapStyleSet::StandardFont)
			]
		]
		+ SVerticalBox::Slot()
		.Padding(15.f,5.f,15.f,5.f)
		.HAlign(HAlign_Fill)
		.AutoHeight()
		[
			DoorSocketEntries
		];
}

TSharedRef<SWidget> SGridMapEditorToolkitWidget::BuildRoomOptions()
{
	const TSharedRef<SHorizontalBox> RoomNameChangeBox = SNew(SHorizontalBox);
	RoomNameChangeBox->AddSlot()
	.HAlign(HAlign_Left)
	.FillWidth(.2f)
	[
		SNew(STextBlock)
		.Text(LOCTEXT("Room Name", "Room Name"))
	];
	RoomNameChangeBox->AddSlot()
	.HAlign(HAlign_Left)
	.FillWidth(.8f)
	[
		SNew(SEditableText)
		.HintText(LOCTEXT("Room Name", "Room Name"))
	];

	
	return SNew(SVerticalBox)
	.Visibility(this, &SGridMapEditorToolkitWidget::GetVisibility_SettingsOptions)
	+SVerticalBox::Slot()
	.AutoHeight()
	.VAlign(VAlign_Center)
	.Padding(FGridMapStyleSet::StandardLeftPadding)
	[
		SNew(SHeader)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Basic properties"))
			.Font(FGridMapStyleSet::StandardFont)
		]
	]
	+ SVerticalBox::Slot()
	.Padding(5, 5, 5, 0)
	[
		SNew(SHorizontalBox)
		+SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		.FillWidth(.3f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Room name"))
			.Font(FGridMapStyleSet::StandardFont)
		]
		+SHorizontalBox::Slot()
		.Padding(0, 0, 5, 0)
		.HAlign(HAlign_Right)
		.FillWidth(.7f)
		[
			SNew(SEditableTextBox)
			.MinDesiredWidth(120.f)
			.Font(FGridMapStyleSet::StandardFont)
			.Text_Lambda([=]() -> FText
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return FText::FromString("");
				return FText::FromString(GridMapEditorMode->GetEditedRoomData()->RoomName);
			})
			.OnTextChanged_Lambda([=](const FText NewRoomName)
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
				GridMapEditorMode->GetEditedRoomData()->RoomName = NewRoomName.ToString();
			})
		]
	]
	+SVerticalBox::Slot()
	.AutoHeight()
	.VAlign(VAlign_Center)
	.Padding(FGridMapStyleSet::StandardLeftPadding)
	[
		SNew(SHeader)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Elevator"))
			.Font(FGridMapStyleSet::StandardFont)
		]
	]
	+ SVerticalBox::Slot()
	.Padding(5, 5, 5, 0)
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		+SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		.FillWidth(.3f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Elevator in room"))
			.Font(FGridMapStyleSet::StandardFont)
		]
		+SHorizontalBox::Slot()
		.Padding(0, 0, 5, 0)
		.HAlign(HAlign_Right)
		.AutoWidth()
		[
			SNew(SCheckBox)
			.IsChecked_Lambda([=]() -> ECheckBoxState
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr ||
					!GridMapEditorMode->GetEditedRoomData()->HasElevator) return ECheckBoxState::Unchecked;
				return ECheckBoxState::Checked;
			})
			.OnCheckStateChanged_Lambda([=](const ECheckBoxState State)
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;

				if (State == ECheckBoxState::Checked)
				{
					GridMapEditorMode->GetEditedRoomData()->HasElevator = true;
				}
				else
				{
					GridMapEditorMode->GetEditedRoomData()->HasElevator = false;
				}

				if (GridMapEditorMode->GetPreviewRoom() == nullptr) return;
				GridMapEditorMode->GetPreviewRoom()->SetHasElevator(GridMapEditorMode->GetEditedRoomData()->HasElevator);
				GridMapEditorMode->GetPreviewRoom()->CreateElevatorActor();
			})
		]
	]
	+ SVerticalBox::Slot()
	.Padding(5, 5, 5, 0)
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		.IsEnabled_Lambda([=]()-> bool
		{
			return GridMapEditorMode->GetEditedRoomData() != nullptr &&
					GridMapEditorMode->GetEditedRoomData()->HasElevator;
		})
		+SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		.FillWidth(.3f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Elevator Actor Class"))
			.Font(FGridMapStyleSet::StandardFont)
		]
		+SHorizontalBox::Slot()
		.Padding(0, 0, 5, 0)
		.HAlign(HAlign_Right)
		.AutoWidth()
		[
			SNew(SClassPropertyEntryBox)
			.MetaClass(AActor::StaticClass())
			.IsBlueprintBaseOnly(false)
			.ShowTreeView(true)
			.SelectedClass_Lambda([=]()-> UClass*
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return nullptr;
				return GridMapEditorMode->GetEditedRoomData()->ElevatorObjectClass;
			})
			.OnSetClass_Lambda([=](const UClass* ElevatorClass)
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
				UClass* ElevatorActorClass = const_cast<UClass*>(ElevatorClass); //little hack
				if (ElevatorActorClass == nullptr) return;
				GridMapEditorMode->GetEditedRoomData()->ElevatorObjectClass = ElevatorActorClass;
				if (IsValid(GridMapEditorMode->GetPreviewRoom()))
				{
					GridMapEditorMode->GetPreviewRoom()->SetElevatorActorClass(ElevatorActorClass);
				}
			})
		]
	]
	+ SVerticalBox::Slot()
	.Padding(5, 5, 5, 0)
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		.IsEnabled_Lambda([=]()-> bool
		{
			return GridMapEditorMode->GetEditedRoomData() != nullptr &&
					GridMapEditorMode->GetEditedRoomData()->HasElevator;
		})
		+SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		.FillWidth(.3f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Position"))
			.Font(FGridMapStyleSet::StandardFont)
		]
		+SHorizontalBox::Slot()
		.HAlign(HAlign_Right)
		.Padding(0, 0, 5, 0)
		.FillWidth(.5f)
		[
			SNew(SHorizontalBox)
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.MaxWidth(4)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", "("))
				.Font(FGridMapStyleSet::StandardFont)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.AutoWidth()
			[
				SNew(SSpinBox<float>) //X
				.SliderExponent(.1)
				.Value_Lambda([=]()->float
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return -1.f;
					return GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.X;
				})
				.OnValueChanged_Lambda([=](const float Value)
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
					GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.X = Value;
					if (GridMapEditorMode->GetPreviewRoom() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()))
					{
						FVector ElevatorLocation = GridMapEditorMode->GetPreviewRoom()->GetElevatorTransform().GetLocation();
						ElevatorLocation.X = Value;
						GridMapEditorMode->GetPreviewRoom()->SetElevatorPosition(ElevatorLocation);
						if (GridMapEditorMode->GetPreviewRoom()->GetElevatorActor() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()))
						{
							GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()->SetActorLocation(ElevatorLocation);
						}
					}
				})
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.MaxWidth(4)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", ", "))
				.Font(FGridMapStyleSet::StandardFont)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.AutoWidth()
			[
				SNew(SSpinBox<float>) //Y
				.SliderExponent(.1)
				.Value_Lambda([=]()->float
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return -1.f;
					return GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.Y;
				})
				.OnValueChanged_Lambda([=](const float Value)
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
					GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.Y = Value;
					if (GridMapEditorMode->GetPreviewRoom() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()))
					{
						FVector ElevatorLocation = GridMapEditorMode->GetPreviewRoom()->GetElevatorTransform().GetLocation();
						ElevatorLocation.Y = Value;
						GridMapEditorMode->GetPreviewRoom()->SetElevatorPosition(ElevatorLocation);
						if (GridMapEditorMode->GetPreviewRoom()->GetElevatorActor() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()))
						{
							GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()->SetActorLocation(ElevatorLocation);
						}
					}
				})
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.MaxWidth(4)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", ", "))
				.Font(FGridMapStyleSet::StandardFont)
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.AutoWidth()
			[
				SNew(SSpinBox<float>) //Z
				.SliderExponent(.1)
				.Value_Lambda([=]()->float
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return -1.f;
					return GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.Z;
				})
				.OnValueChanged_Lambda([=](const float Value)
				{
					if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
					GridMapEditorMode->GetEditedRoomData()->ElevatorPosition.Z = Value;
					if (GridMapEditorMode->GetPreviewRoom() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()))
					{
						FVector ElevatorLocation = GridMapEditorMode->GetPreviewRoom()->GetElevatorTransform().GetLocation();
						ElevatorLocation.Z = Value;
						GridMapEditorMode->GetPreviewRoom()->SetElevatorPosition(ElevatorLocation);
						if (GridMapEditorMode->GetPreviewRoom()->GetElevatorActor() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()))
						{
							GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()->SetActorLocation(ElevatorLocation);
						}
					}
				})
			]
			+SHorizontalBox::Slot()
			.HAlign(HAlign_Right)
			.MaxWidth(4)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GridMapActiveTileset", ")"))
				.Font(FGridMapStyleSet::StandardFont)
			]
		]
	]
	+ SVerticalBox::Slot()
	.Padding(5, 5, 5, 0)
	.AutoHeight()
	[
		SNew(SHorizontalBox)
		.IsEnabled_Lambda([=]()-> bool
		{
			return GridMapEditorMode->GetEditedRoomData() != nullptr &&
					GridMapEditorMode->GetEditedRoomData()->HasElevator;
		})
		+SHorizontalBox::Slot()
		.VAlign(VAlign_Center)
		.Padding(2, 0, 0, 0)
		.FillWidth(.3f)
		[
			SNew(STextBlock)
			.Text(LOCTEXT("GridMapActiveTileset", "Yaw (Z axis) rotation"))
			.Font(FGridMapStyleSet::StandardFont)
		]
		+SHorizontalBox::Slot()
		.Padding(0, 0, 5, 0)
		.HAlign(HAlign_Right)
		.AutoWidth()
		[
			SNew(SSpinBox<float>)
			.SliderExponent(.1)
			.MinValue(-180)
			.MaxValue(180)
			.Value_Lambda([=]()->float
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return -1.f;
				return GridMapEditorMode->GetEditedRoomData()->ElevatorYawRotation;
			})
			.OnValueChanged_Lambda([=](const float Value)
			{
				if (GridMapEditorMode->GetEditedRoomData() == nullptr) return;
				GridMapEditorMode->GetEditedRoomData()->ElevatorYawRotation = Value;
				if (GridMapEditorMode->GetPreviewRoom() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()))
				{
					GridMapEditorMode->GetPreviewRoom()->SetElevatorYawRotation(Value);
					if (GridMapEditorMode->GetPreviewRoom()->GetElevatorActor() != nullptr && IsValid(GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()))
					{
						GridMapEditorMode->GetPreviewRoom()->GetElevatorActor()->SetActorRotation(FRotator(0.f, Value, 0.f));
					}
				}
			})
		]
	];
}

bool SGridMapEditorToolkitWidget::IsGridMapEditorEnabled() const
{
	ErrorText->SetError(GetGridMapEditorErrorText());
	return GridMapEditorMode->IsEditingEnabled();
}

bool SGridMapEditorToolkitWidget::IsPaintTool() const
{
	return GridMapEditorMode->UISettings.GetPaintToolSelected();
}

bool SGridMapEditorToolkitWidget::IsSelectTool() const
{
	return GridMapEditorMode->UISettings.GetSelectToolSelected();
}

bool SGridMapEditorToolkitWidget::IsSettingsTool() const
{
	return GridMapEditorMode->UISettings.GetSettingsToolSelected();
}

bool SGridMapEditorToolkitWidget::IsPaintRoomMode() const
{
	return GridMapEditorMode->UISettings.GetPaintMode() == EGridMapPaintMode::EraseRoom || GridMapEditorMode->UISettings.GetPaintMode() == EGridMapPaintMode::PaintRoom;
}

FReply SGridMapEditorToolkitWidget::SaveChanges()
{
	if (!IsValid(GridMapEditorMode->GetPreviewRoom())) return FReply::Handled();
	if (!IsValid(GetCurrentRoomData())) return FReply::Handled();

	APreviewRoom* PreviewRoom = GridMapEditorMode->GetPreviewRoom();
	UGridMapRoomDataAsset* EditedRoomDataAsset = Cast<UGridMapRoomDataAsset>(GetCurrentRoomData());
	
	if (!IsValid(EditedRoomDataAsset)) return FReply::Handled();
	
    FString ContentDirPath = FPaths::ProjectContentDir();
    FString RoomDataName = TEXT("NewRoom");
	
	if (EditedRoomDataAsset->RoomName.Len() > 0 && EditedRoomDataAsset->RoomName != TEXT(" "))
	{
		RoomDataName = EditedRoomDataAsset->RoomName;
		int ChopIndex = -1;
		if (RoomDataName.FindLastChar('_', ChopIndex))
		{
			RoomDataName = RoomDataName.RightChop(ChopIndex);
		}
		RoomDataName = TEXT("RD_")+RoomDataName;
	}
	else if (EditedRoomDataAsset->GetName().Len() > 0)
	{
		RoomDataName = EditedRoomDataAsset->GetName();
	}
	
	FString SavePath = EditedRoomDataAsset->GetPathName();
	//check if there is a dot in the name after the last slash
	int32 LastDotIndex = INDEX_NONE;
	SavePath.FindLastChar('.', LastDotIndex);
	if (LastDotIndex != INDEX_NONE)
	{
		//remove the dot and everything after it
		SavePath = SavePath.Left(LastDotIndex);
	}

	UPackage* Package = CreatePackage(*SavePath);

	if (Package == nullptr) return FReply::Unhandled();
	Package->FullyLoad();
	
	UGridMapRoomDataAsset* NewRoomDataAsset = NewObject<UGridMapRoomDataAsset>(
	Package, UGridMapRoomDataAsset::StaticClass(), *RoomDataName, EObjectFlags::RF_Public | EObjectFlags::RF_Standalone);

	if (NewRoomDataAsset == nullptr) return FReply::Unhandled();
	FString RoomName = RoomDataName;
	RoomName.RemoveFromStart(TEXT("RD_"));
	NewRoomDataAsset->RoomName = RoomName;
	NewRoomDataAsset->BaseTileSize = PreviewRoom->GetTileSize();
	NewRoomDataAsset->RoomTiles = PreviewRoom->GetRoomTilesData();
	NewRoomDataAsset->OverlapVolumeExtent = PreviewRoom->GetOverlapVolumeBoxExtent();
	NewRoomDataAsset->OverlapVolumePosition = PreviewRoom->GetOverlapVolumeRelativePosition();

	NewRoomDataAsset->HasElevator = PreviewRoom->GetHasElevator();
	NewRoomDataAsset->ElevatorObjectClass = PreviewRoom->GetElevatorActorClass();
	NewRoomDataAsset->ElevatorPosition = PreviewRoom->GetElevatorTransform().GetLocation();
	NewRoomDataAsset->ElevatorYawRotation = PreviewRoom->GetElevatorYawRotation();

	NewRoomDataAsset->UpdateRoomTilesIndexMap();
	
	FAssetRegistryModule::AssetCreated(NewRoomDataAsset);
	NewRoomDataAsset->MarkPackageDirty();
	
	FSavePackageArgs Args = FSavePackageArgs();
	Args.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
	
	if (NewRoomDataAsset == nullptr) return FReply::Unhandled();

	Package->FullyLoad();
	const FString PackageFileName = FPackageName::LongPackageNameToFilename(SavePath, FPackageName::GetAssetPackageExtension());
	const bool IsSuccess = UPackage::SavePackage(Package, NewRoomDataAsset, *PackageFileName, Args);
	// const bool IsSuccess = UEditorAssetLibrary::SaveLoadedAsset(NewRoomDataAsset);
	//
	// UE_LOG(LogTemp, Display, TEXT("File saved status %i"), IsSuccess);

	OnChangeRoomData(NewRoomDataAsset);
	
	return FReply::Handled();
}

FReply SGridMapEditorToolkitWidget::ClearEditedRoomDataReference()
{
	GridMapEditorMode->UISettings.SetCurrentRoomData(nullptr);
	APreviewRoom* PreviewRoom = GridMapEditorMode->GetPreviewRoom();
	if (PreviewRoom == nullptr) return FReply::Handled();
	PreviewRoom->Clear();
	
	return FReply::Handled();
}

void SGridMapEditorToolkitWidget::SetPaintOrigin(FVector NewPaintOrigin)
{
	GridMapEditorMode->UISettings.SetPaintOrigin(NewPaintOrigin);
}

TOptional<FVector> SGridMapEditorToolkitWidget::GetPaintOrigin() const
{
	return GridMapEditorMode->UISettings.GetPaintOrigin();
}

void SGridMapEditorToolkitWidget::OnChangeTileStyle(UObject* NewAsset)
{
	if (UTileStyle* NewTileStyle = Cast<UTileStyle>(NewAsset))
	{
		GridMapEditorMode->UISettings.SetCurrentTileStyle(NewTileStyle);
	}
}

UObject* SGridMapEditorToolkitWidget::GetCurrentTileStyle() const
{
	return GridMapEditorMode->UISettings.GetCurrentTileSet().Get();
}

void SGridMapEditorToolkitWidget::OnChangeRoomData(UObject* NewAsset)
{
	if (UGridMapRoomDataAsset* NewRoomData = Cast<UGridMapRoomDataAsset>(NewAsset))
	{
		GridMapEditorMode->UISettings.SetCurrentRoomData(NewRoomData);
		APreviewRoom* PreviewRoom = GridMapEditorMode->GetPreviewRoom();
		if (PreviewRoom == nullptr) return;
		PreviewRoom->SetRoomData(NewRoomData);
		PreviewRoom->BuildRoomFromRoomTiles(NewRoomData->RoomTiles);
		PreviewRoom->CreateElevatorActor();
	}
}

UObject* SGridMapEditorToolkitWidget::GetCurrentRoomData() const
{
	return GridMapEditorMode->UISettings.GetCurrentRoomData().Get();
}

void SGridMapEditorToolkitWidget::OnCheckStateChanged_HideOwnedActors(ECheckBoxState InState)
{
	GridMapEditorMode->UISettings.SetHideOwnedActors(InState == ECheckBoxState::Checked ? true : false);
}

ECheckBoxState SGridMapEditorToolkitWidget::GetCheckState_HideOwnedActors() const
{
	return GridMapEditorMode->UISettings.GetHideOwnedActors() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
}


FText SGridMapEditorToolkitWidget::GetActiveToolName() const
{
	const FGridMapEditCommands& Commands = FGridMapEditCommands::Get();
	if (IsPaintTool())
	{
		return Commands.SetPaintTiles->GetLabel();
	}
	else if (IsSelectTool())
	{
		return Commands.SetSelectTiles->GetLabel();
	}
	else if (IsSettingsTool())
	{
		return Commands.SetTileSettings->GetLabel();
	}
	/*
	else if (IsReapplySettingsTool())
	{
		OutText = LOCTEXT("FoliageToolName_Reapply", "Reapply");
	}
	
	else if (IsLassoSelectTool())
	{
		OutText = LOCTEXT("FoliageToolName_LassoSelect", "Lasso Select");
	}
	else if (IsPaintFillTool())
	{
		OutText = LOCTEXT("FoliageToolName_Fill", "Fill");
	}
	*/

	return FText::GetEmpty();
}

FText SGridMapEditorToolkitWidget::GetGridMapEditorErrorText() const
{
	EGridMapEditingState EditState = GridMapEditorMode->GetEditingState();

	switch (EditState)
	{
	case EGridMapEditingState::SIEWorld: return LOCTEXT("IsSimulatingError_edit", "Can't edit grid map while simulating!");
	case EGridMapEditingState::PIEWorld: return LOCTEXT("IsPIEError_edit", "Can't edit grid map in PIE!");
	case EGridMapEditingState::Enabled: return FText::GetEmpty();
	default: checkNoEntry();
	}
	
	return FText::GetEmpty();
}

EVisibility SGridMapEditorToolkitWidget::GetVisibility_PaintOptions() const
{
	if (IsPaintTool())
	{
		return EVisibility::Visible;
	}

	return EVisibility::Collapsed;
}

EVisibility SGridMapEditorToolkitWidget::GetVisibility_SelectOptions() const
{
	if (IsSelectTool())
	{
		return EVisibility::Visible;
	}

	return EVisibility::Collapsed;
}

EVisibility SGridMapEditorToolkitWidget::GetVisibility_SettingsOptions() const
{
	if (IsSettingsTool())
	{
		return EVisibility::Visible;
	}

	return EVisibility::Collapsed;
}

EVisibility SGridMapEditorToolkitWidget::GetVisibility_RoundCornerOption() const
{
	if (IsPaintRoomMode())
	{
		return EVisibility::Visible;
	}

	return EVisibility::Collapsed;
}

EVisibility SGridMapEditorToolkitWidget::GetVisibility_SelectedTileOptions() const
{
	if (IsSelectTool())
	{
		return EVisibility::Visible;
	}
	return EVisibility::Collapsed;
}

#undef LOCTEXT_NAMESPACE
