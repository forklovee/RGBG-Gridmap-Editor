#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "RoomDataAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class URoomDataAssetFactory : public UFactory
{
	GENERATED_UCLASS_BODY()
	
	// UFactory interface
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End of UFactory interface
};
