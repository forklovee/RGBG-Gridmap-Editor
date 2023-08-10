#pragma once

#include "CoreMinimal.h"
#include "GridMapEditorMode.h"
#include "Layout/Visibility.h"
#include "Input/Reply.h"
#include "Widgets/DeclarativeSyntaxSupport.h"
#include "Widgets/SWidget.h"
#include "Widgets/SCompoundWidget.h"

#include "PreviewRoom.h"

class FGridMapEditorMode;
class USpawnerDataAsset;


class SGridMapEditorToolkitWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SGridMapEditorToolkitWidget) {}
	SLATE_END_ARGS()

public:
	void Construct(const FArguments& InArgs);

private:	// construction helpers
	TSharedRef<SWidget> BuildToolBar();
	TSharedRef<SWidget> BuildPaintOptions();
	TSharedRef<SWidget> BuildTileEditOptions();
	TSharedRef<SWidget> BuildRoomOptions();

	TSharedPtr<class STileSetPalette> TileSetPalette;

private:
	bool IsGridMapEditorEnabled() const;
	bool IsPaintTool() const;
	bool IsSelectTool() const;
	bool IsSettingsTool() const;
	bool IsPaintRoomMode() const;
	
	FReply SaveChanges();
	FReply ClearEditedRoomDataReference();
	
	FText GetActiveToolName() const;
	FText GetGridMapEditorErrorText() const;

	// helpers for getting/setting ui
	void SetPaintOrigin(FVector InHeight);
	TOptional<FVector> GetPaintOrigin() const;

	void OnChangeTileStyle(UObject* NewAsset);
	UObject* GetCurrentTileStyle() const;

	void OnChangeRoomData(UObject* NewAsset);
	UObject* GetCurrentRoomData() const;

	void OnChangeEditedTileSpawnerData(UObject* NewAsset);
	UObject* GetEditedTileSpawnerData() const;
	
	void OnCheckStateChanged_HideOwnedActors(ECheckBoxState InState);
	ECheckBoxState GetCheckState_HideOwnedActors() const;

	void SetRoomElevatorClass(const UClass* ElevatorClass)
	{
		if (IsValid(GridMapEditorMode->GetPreviewRoom()))
		{
			GridMapEditorMode->GetPreviewRoom()->SetElevatorActorClass(ElevatorClass->GetClass()); //XDDDD dont ask
		}
	}
	
	// helper for visibilities
	EVisibility GetVisibility_PaintOptions() const;
	EVisibility GetVisibility_SelectOptions() const;
	EVisibility GetVisibility_SettingsOptions() const;
	EVisibility GetVisibility_RoundCornerOption() const;
	EVisibility GetVisibility_SelectedTileOptions() const;

private:
	/** Current error message */
	TSharedPtr<class SErrorText> ErrorText;
	FGridMapEditorMode* GridMapEditorMode;
};