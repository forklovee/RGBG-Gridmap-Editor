// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Engine/DataAsset.h"
#include "SpawnerDataAsset.generated.h"

UCLASS(BlueprintType)
class GRIDMAP_API USpawnerDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	UClass* GetActorClass() const { return ActorClass; }
	UStaticMesh* GetStaticMesh() const { return PreviewStaticMesh.Get(); }
	USkeletalMesh* GetSkeletalMesh() const { return PreviewSkeletalMesh.Get(); }
	UFUNCTION(BlueprintCallable)
	bool IsUsingBehaviorTree() const { return UseBehaviorTree; }
	UFUNCTION(BlueprintCallable)
	UBehaviorTree* GetBehaviorTree() const { return PawnBehaviorTree.Get(); }
	UFUNCTION(BlueprintCallable)
	TSubclassOf<AAIController> GetAIControllerClass() const { return PawnAIControllerClass; }

private:
	UPROPERTY(EditAnywhere)
	UClass* ActorClass = nullptr;

	UPROPERTY(EditAnywhere, Category="Preview Mesh")
	bool UseSkeletalMesh = false;
	
	UPROPERTY(EditAnywhere, Category="Preview Mesh", meta=(EditCondition="!UseSkeletalMesh", EditConditionHides))
	TSoftObjectPtr<UStaticMesh> PreviewStaticMesh;
	UPROPERTY(EditAnywhere, Category="Preview Mesh", meta=(EditCondition="UseSkeletalMesh", EditConditionHides))
	TSoftObjectPtr<USkeletalMesh> PreviewSkeletalMesh;

	UPROPERTY(EditAnywhere, Category="Pawn Behavior")
	bool UseBehaviorTree = false;
	UPROPERTY(EditAnywhere, Category="Pawn Behavior", meta=(EditCondition="UseBehaviorTree"))
	TSoftObjectPtr<UBehaviorTree> PawnBehaviorTree;
	UPROPERTY(EditAnywhere, Category="Pawn Behavior", meta=(EditCondition="UseBehaviorTree"))
	TSubclassOf<AAIController> PawnAIControllerClass;
};
