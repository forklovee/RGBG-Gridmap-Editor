// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorSpawner.generated.h"

class USpawnerDataAsset;
class UTextRenderComponent;

UCLASS(BlueprintType)
class GRIDMAP_API AActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	AActorSpawner();

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;

	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable)
	virtual AActor* Spawn();
	UFUNCTION(BlueprintCallable)
	void DestroySelf(float Timeout = 0.1f);
	
	UFUNCTION(BlueprintCallable)
	USpawnerDataAsset* GetSpawnData() const;
	
	UFUNCTION(BlueprintCallable)
	void UpdatePreview(USpawnerDataAsset* NewSpawnerData);

	UPROPERTY(EditInstanceOnly)
	bool bDestroyOnSpawn = false;
	
	UPROPERTY(EditInstanceOnly, meta=(DisplayPriority=0))
	USpawnerDataAsset* ActorSpawnData;
private:
	USceneComponent* BaseComponent;
	
	UStaticMeshComponent* SpawnerPreviewBeam;
	UStaticMeshComponent* SpawnerMarker;
	
	UStaticMeshComponent* PreviewStaticMesh;
	USkeletalMeshComponent* PreviewSkeletalMesh;
	UTextRenderComponent* PreviewText;
	
	void OnDestroy();
};
