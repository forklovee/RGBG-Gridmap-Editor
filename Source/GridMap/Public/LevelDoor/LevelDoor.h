// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LevelDoor.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDoorOpenSignature, ALevelDoor*, Door, class AGridMapRoom*, CurrentRoom, AGridMapRoom*, NextRoom, APawn*, Pawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDoorClosedSignature, ALevelDoor*, Door, APawn*, Pawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPlayerWalkedThroughDoorSignature, ALevelDoor*, Door, AGridMapRoom*, CurrentRoom, AGridMapRoom*, NextRoom, APawn*, Pawn);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnPawnExitedDoorAreaSignature, ALevelDoor*, Door, AGridMapRoom*, CurrentRoom, AGridMapRoom*, NextRoom, APawn*, Pawn);

UCLASS()
class GRIDMAP_API ALevelDoor : public AActor
{
	GENERATED_BODY()

public:
	ALevelDoor();

	UPROPERTY(BlueprintAssignable)
	FOnDoorOpenSignature OnDoorOpen;

	UPROPERTY(BlueprintAssignable)
	FOnDoorClosedSignature OnDoorClosed;
	
	UPROPERTY(BlueprintAssignable)
	FOnPlayerWalkedThroughDoorSignature OnPlayerWalkedThroughDoor;

	UPROPERTY(BlueprintAssignable)
	FOnPawnExitedDoorAreaSignature OnPawnExitedDoorArea;

	UFUNCTION(BlueprintCallable)
	void OpenDoor(APawn* Pawn, const FVector Direction);

	UFUNCTION(BlueprintCallable)
	void CloseDoor(APawn* Pawn);

	UFUNCTION(BlueprintCallable)
	void SetDoorLocked(bool bLocked);

	UFUNCTION(BlueprintCallable)
	bool IsDoorLocked() const {return bIsLocked;}
protected:
	virtual void BeginPlay() override;

private:
	UFUNCTION()
	void OnPlayerOutFrontTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnPlayerOutBackTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnPlayerInFrontTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
							   int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnPlayerInBackTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	                           int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bCloseOnTriggerExit = false;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsLocked = false;

	UPROPERTY(BlueprintReadOnly)
	bool bIsOpen = false;

	UPROPERTY(BlueprintReadOnly)
	FVector DoorDirection = FVector::ZeroVector;
	
	TWeakObjectPtr<class ABuildingFloorGenerator> Generator;
	
	TWeakObjectPtr<AGridMapRoom> RoomA;
	TWeakObjectPtr<AGridMapRoom> RoomB;

	UPROPERTY(BlueprintReadOnly)
	APawn* LastDoorUserPawn = nullptr;
private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	bool IsTwoPartDoor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	bool IsSlidingDoor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true", EditCondition = "!IsSlidingDoor"))
	class UPhysicsConstraintComponent* MainDoorPhysicsConstraint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true", EditCondition = "!IsSlidingDoor"))
	UPhysicsConstraintComponent* SecondDoorPhysicsConstraint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* DoorFrameMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true"))
	UStaticMeshComponent* MainDoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Mesh", meta = (AllowPrivateAccess = "true", EditCondition = "IsTwoPartDoor"))
	UStaticMeshComponent* SecondDoorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* PlayerInsideTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* MainDoorTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* SecondDoorTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* Front_WalkThroughTrigger;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Door", meta = (AllowPrivateAccess = "true"))
	UBoxComponent* Back_WalkThroughTrigger;

	float DrivePositionStrength = 500.f;
	float WalkThroughImpulseStrength = 10000.f;
	float SwingLimit = 120.f;

	// WalkThroughProgress:
	// 0 - not started, 1 - walked into first trigger, 2 - walked into second trigger, 3 - walked out of first trigger
	uint8 WalkThroughProgress = 0;
	uint8 PlayerOverlappedTriggerCount = 0;
	bool bWalkThroughDirectionFront = false; // true - front, false - back
};
