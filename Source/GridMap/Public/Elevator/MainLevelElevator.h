// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MainLevelElevator.generated.h"

UCLASS()
class AMainLevelElevator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMainLevelElevator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ElevatorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ElevatorLeftDoorMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* ElevatorRightDoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Music", meta = (AllowPrivateAccess = "true"))
	TSoftObjectPtr<class USoundCue> ElevatorMusicCue;
};
