#include "GridMapEditCommands.h"
#include "GridMapEditor.h"
#include "GridMapStyleSet.h"

#define LOCTEXT_NAMESPACE "GridMapEditor"

FGridMapEditCommands::FGridMapEditCommands()
	: TCommands<FGridMapEditCommands>(
		"GridMapEditCommands",	// context name for fast lookup
		NSLOCTEXT("GridMapEditor", "GridMapEditorMode", "Grid Map Edit Mode"), // localized text
		NAME_None,	// parent
		FGridMapStyleSet::Name)
{
}

void FGridMapEditCommands::RegisterCommands()
{
	MakeUICommand(SetPaintTiles, TEXT("PaintTiles"), LOCTEXT("Paint", "Paint"), LOCTEXT("PaintDescription", "Paint Tiles"), EUserInterfaceActionType::ToggleButton);
	MakeUICommand(SetSelectTiles, TEXT("SelectTiles"), LOCTEXT("Edit Tiles", "Edit Tiles"), LOCTEXT("SelectDescription", "Edit Tiles"), EUserInterfaceActionType::ToggleButton);
	MakeUICommand(SetTileSettings, TEXT("TileSettings"), LOCTEXT("Edit Room", "Edit Room"), LOCTEXT("SettingDescription", "Edit Room"), EUserInterfaceActionType::ToggleButton);

	MakeUICommand(SetDoorPaintMode, TEXT("DoorPaintMode"), LOCTEXT("Create Doors", "Create Doors"), LOCTEXT("DoorModeDescription", "Create Door Tiles"), EUserInterfaceActionType::ToggleButton);
	MakeUICommand(SetRoomPaintMode, TEXT("RoomPaintMode"), LOCTEXT("Create Floor", "Create Floor"), LOCTEXT("RoomPaintDescription", "Paint Tiles"), EUserInterfaceActionType::ToggleButton);

	/*
	UI_COMMAND(SetReapplySettings, "Reapply", "Reapply settings to instances", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND(SetSelect, "Select", "Select", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND(SetLassoSelect, "Lasso", "Lasso Select", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND(SetPaintBucket, "Fill", "Paint Bucket", EUserInterfaceActionType::ToggleButton, FInputChord());
	*/
}

void FGridMapEditCommands::MakeUICommand(TSharedPtr<FUICommandInfo>& OutCommand, const TCHAR* CommandName, const FText&  FriendlyName, const FText& InDescription, const EUserInterfaceActionType CommandType, const FInputChord& InDefaultChord)
{
	FName IconName(*(GetContextName().ToString() + (FString(TEXT(".")) + CommandName)));
	
	FUICommandInfo::MakeCommandInfo(
		this->AsShared(),
		OutCommand,
		CommandName,
		FriendlyName,
		InDescription,
		FSlateIcon(),
		// FSlateIcon(this->GetStyleSetName(), IconName),
		CommandType,
		InDefaultChord
	);
}

#undef LOCTEXT_NAMESPACE