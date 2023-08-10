﻿#pragma once

#include "CoreMinimal.h"
#include "AssetTools/Public/AssetTypeActions_Base.h"

class FLevelCompilationDataAssetTypeActions : public FAssetTypeActions_Base
{
public:
	FLevelCompilationDataAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	// IAssetTypeActions interface
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;

	//virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
	//virtual bool HasActions(const TArray<UObject*>& InObjects) const override { return true; }
	//virtual void GetActions(const TArray<UObject*>& InObjects, struct FToolMenuSection& Section) override;
	// End of IAssetTypeActions interface

private:
	EAssetTypeCategories::Type AssetCategory;
};
