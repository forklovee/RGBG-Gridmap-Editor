#include "../../Public/LevelDoor/LevelDoor.h"

#include "Components/BoxComponent.h"
#include "Generators/BuildingFloorGenerator.h"
#include "PhysicsEngine/PhysicsConstraintComponent.h"

ALevelDoor::ALevelDoor()
{
	PrimaryActorTick.bCanEverTick = true;

	const FName DoorFrameMeshName = TEXT("DoorFrameMesh");	
	const FName MainDoorMeshName = TEXT("MainDoorMesh");
	const FName SecondDoorMeshName = TEXT("SecondDoorMesh");

	// PlayerInsideTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("PlayerInsideTrigger"));
	// PlayerInsideTrigger->SetCollisionProfileName(TEXT("OverlapAll"));
	// if (PlayerInsideTrigger->GetScaledBoxExtent() == FVector::OneVector*32.f)
	// {
	// 	PlayerInsideTrigger->SetBoxExtent(FVector(150.f, 150.f, 100.f));
	// }
	
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	// Walk through triggers
	Front_WalkThroughTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("FrWalkTrigger"));
	Front_WalkThroughTrigger->SetupAttachment(RootComponent);
	Front_WalkThroughTrigger->SetCollisionProfileName(TEXT("OverlapAll"));
	
	Back_WalkThroughTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("BckWalkTrigger"));
	Back_WalkThroughTrigger->SetupAttachment(RootComponent);
	Back_WalkThroughTrigger->SetCollisionProfileName(TEXT("OverlapAll"));

	// Frame
	DoorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(DoorFrameMeshName);
	DoorFrameMesh->SetupAttachment(RootComponent);

	// Main Door
	MainDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(MainDoorMeshName);
	MainDoorMesh->SetupAttachment(RootComponent);

	MainDoorMesh->SetAngularDamping(45.f);
	MainDoorMesh->SetSimulatePhysics(true);
	MainDoorMesh->SetEnableGravity(true);

	// Main Door - Trigger
	MainDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("MainDoorTrigger"));
	MainDoorTrigger->SetupAttachment(MainDoorMesh);

	MainDoorTrigger->SetCollisionProfileName(TEXT("OverlapAll"));
	MainDoorTrigger->SetGenerateOverlapEvents(true);

	// Second Door
	SecondDoorMesh = CreateDefaultSubobject<UStaticMeshComponent>(SecondDoorMeshName);
	SecondDoorMesh->SetupAttachment(RootComponent);

	SecondDoorMesh->SetSimulatePhysics(true);
	SecondDoorMesh->SetEnableGravity(true);

	// Second Door - Trigger
	SecondDoorTrigger = CreateDefaultSubobject<UBoxComponent>(TEXT("SecondDoorTrigger"));
	SecondDoorTrigger->SetupAttachment(SecondDoorMesh);

	SecondDoorTrigger->SetCollisionProfileName(TEXT("OverlapAll"));
	SecondDoorTrigger->SetGenerateOverlapEvents(true);

	// Main Door - Physics Constraint
	MainDoorPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("MainDoorPhysicsConstraint"));
	MainDoorPhysicsConstraint->SetupAttachment(RootComponent);
	
	MainDoorPhysicsConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, SwingLimit);
	MainDoorPhysicsConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Locked, 45.f);
	MainDoorPhysicsConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 45.f);
	MainDoorPhysicsConstraint->SetDisableCollision(true);

	MainDoorPhysicsConstraint->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	MainDoorPhysicsConstraint->SetAngularOrientationDrive(true, false);
	const FRotator TargetRotation = FRotator(0.f, 0.f, 0.f);
	MainDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);
	MainDoorPhysicsConstraint->SetAngularDriveParams(50.f, 1.f, 0.f);

	// Second Door - Physics Constraint
	SecondDoorPhysicsConstraint = CreateDefaultSubobject<UPhysicsConstraintComponent>(TEXT("SecondDoorPhysicsConstraint"));
	SecondDoorPhysicsConstraint->SetupAttachment(RootComponent);
	
	SecondDoorPhysicsConstraint->SetAngularSwing1Limit(EAngularConstraintMotion::ACM_Limited, SwingLimit);
	SecondDoorPhysicsConstraint->SetAngularSwing2Limit(EAngularConstraintMotion::ACM_Locked, 45.f);
	SecondDoorPhysicsConstraint->SetAngularTwistLimit(EAngularConstraintMotion::ACM_Locked, 45.f);
	SecondDoorPhysicsConstraint->SetDisableCollision(true);

	SecondDoorPhysicsConstraint->SetAngularDriveMode(EAngularDriveMode::TwistAndSwing);
	SecondDoorPhysicsConstraint->SetAngularOrientationDrive(true, false);
	SecondDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);
	SecondDoorPhysicsConstraint->SetAngularDriveParams(50.f, 1.f, 0.f);
}

void ALevelDoor::BeginPlay()
{
	Super::BeginPlay();

	if (!IsSlidingDoor)
	{
		MainDoorMesh->SetSimulatePhysics(true);
	}
	
	Front_WalkThroughTrigger->OnComponentEndOverlap.AddDynamic(this, &ALevelDoor::OnPlayerOutFrontTrigger);
	Back_WalkThroughTrigger->OnComponentEndOverlap.AddDynamic(this, &ALevelDoor::OnPlayerOutBackTrigger);
	Front_WalkThroughTrigger->OnComponentBeginOverlap.AddDynamic(this, &ALevelDoor::OnPlayerInFrontTrigger);
	Back_WalkThroughTrigger->OnComponentBeginOverlap.AddDynamic(this, &ALevelDoor::OnPlayerInBackTrigger);
}

// Preview room and Change Room logic
void ALevelDoor::OnPlayerOutFrontTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (bIsLocked) return;
	
	const ECollisionChannel ObjectType = OtherComp->GetCollisionObjectType();
	if (ObjectType != ECC_GameTraceChannel1) return; //Not Player

	const float LastOverlappedCount = PlayerOverlappedTriggerCount;
	PlayerOverlappedTriggerCount--;

	UE_LOG(LogTemp, Display, TEXT("Overlapped Count: %d"), PlayerOverlappedTriggerCount);
	UE_LOG(LogTemp, Display, TEXT("WalkThroughProgress: %d"), WalkThroughProgress);

	if (WalkThroughProgress == 0) return;

	if (WalkThroughProgress == 1) //walked back
	{
		if (bWalkThroughDirectionFront)
		{
			WalkThroughProgress = 0;
			if (!bCloseOnTriggerExit)
			{
				CloseDoor(Cast<APawn>(OtherActor));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SORCERY"));
			WalkThroughProgress = 0;
			if (!bCloseOnTriggerExit)
			{
				CloseDoor(Cast<APawn>(OtherActor));
			}
		}
	}
	else if (WalkThroughProgress == 2)
	{
		if (bWalkThroughDirectionFront)
		{
			if (LastOverlappedCount != 2)
			{
				WalkThroughProgress = 1;
			}
			else
			{
				WalkThroughProgress = 2;
			}
		}
		else
		{
			if (LastOverlappedCount != 2)
			{
				WalkThroughProgress = 3;
				CloseDoor(Cast<APawn>(OtherActor));
				if (APawn* Pawn = Cast<APawn>(OtherActor))
				{
					// change room
					if (Generator.IsValid())
					{
						const TWeakObjectPtr<AGridMapRoom> RoomIn = Generator->ActiveRoom;
						if (!RoomIn.IsValid()) return;
						TWeakObjectPtr<AGridMapRoom> RoomInto = RoomA;
						if (RoomIn.Get() == RoomA.Get())
						{
							RoomInto = RoomB;
						}
	
						if (OnPlayerWalkedThroughDoor.IsBound())
						{
							OnPlayerWalkedThroughDoor.Broadcast(this, Generator->ActiveRoom.Get(), RoomInto.Get(), Pawn);
						}
					}
				}
			}
			else
			{
				WalkThroughProgress = 1;
			}
		}
	}
	UE_LOG(LogTemp, Display, TEXT(" After WalkThroughProgress: %d"), WalkThroughProgress);

}

void ALevelDoor::OnPlayerOutBackTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (bIsLocked) return;
	
	const ECollisionChannel ObjectType = OtherComp->GetCollisionObjectType();
	if (ObjectType != ECC_GameTraceChannel1) return; //Not Player

	const float LastOverlappedCount = PlayerOverlappedTriggerCount;
	PlayerOverlappedTriggerCount--;
	UE_LOG(LogTemp, Display, TEXT("Overlapped Count: %d"), PlayerOverlappedTriggerCount);
	UE_LOG(LogTemp, Display, TEXT("WalkThroughProgress: %d"), WalkThroughProgress);

	if (WalkThroughProgress == 0) return;

	if (WalkThroughProgress == 1) //walked back
	{
		if (!bWalkThroughDirectionFront) //walked back
		{
			WalkThroughProgress = 0;
			if (!bCloseOnTriggerExit)
			{
				CloseDoor(Cast<APawn>(OtherActor));
			}
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("SORCERY"));
			WalkThroughProgress = 0;
			if (!bCloseOnTriggerExit)
			{
				CloseDoor(Cast<APawn>(OtherActor));
			}
		}
	}
	else if (WalkThroughProgress == 2)
	{
		if (!bWalkThroughDirectionFront)
		{
			if (LastOverlappedCount != 2)
			{
				WalkThroughProgress = 1;
			}
			else
			{
				WalkThroughProgress = 2;
			}
		}
		else
		{
			if (LastOverlappedCount != 2)
			{
				WalkThroughProgress = 3;
				CloseDoor(Cast<APawn>(OtherActor));
				if (APawn* Pawn = Cast<APawn>(OtherActor))
				{
					UE_LOG(LogTemp, Display, TEXT("BEEN THERE"));
					// change room
					if (Generator.IsValid())
					{
						UE_LOG(LogTemp, Display, TEXT("FOR THE"));

						const TWeakObjectPtr<AGridMapRoom> RoomIn = Generator->ActiveRoom;
						if (!RoomIn.IsValid()) return;
						UE_LOG(LogTemp, Display, TEXT("FUCKING"));
						TWeakObjectPtr<AGridMapRoom> RoomInto = RoomA;
						if (RoomIn.Get() == RoomA.Get())
						{
							RoomInto = RoomB;
						}
	
						if (OnPlayerWalkedThroughDoor.IsBound())
						{
							UE_LOG(LogTemp, Display, TEXT("LOVE OF ALMIGHTY GOD"));

							OnPlayerWalkedThroughDoor.Broadcast(this, Generator->ActiveRoom.Get(), RoomInto.Get(), Pawn);
						}
					}
				}
			}
			else
			{
				WalkThroughProgress = 1;
			}
		}
	}
	UE_LOG(LogTemp, Display, TEXT(" After WalkThroughProgress: %d"), WalkThroughProgress);
}

void ALevelDoor::OnPlayerInFrontTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bIsLocked) return;
	
	const ECollisionChannel ObjectType = OtherComp->GetCollisionObjectType();
	if (ObjectType != ECC_GameTraceChannel1) return; //Not Player

	PlayerOverlappedTriggerCount++;
	UE_LOG(LogTemp, Display, TEXT("Overlapped Count: %d"), PlayerOverlappedTriggerCount);

	if (WalkThroughProgress == 0) // first trigger enter
	{
		WalkThroughProgress = 1;

		if (IsSlidingDoor)
		{
			FVector DirectionToPawn = GetActorLocation() - OtherActor->GetActorLocation();
			DirectionToPawn.Normalize();
		
			if (APawn* Pawn = Cast<APawn>(OtherActor))
			{
				OpenDoor(Pawn, DirectionToPawn);
			}
		}
		
		bWalkThroughDirectionFront = true;
	}
	else if (WalkThroughProgress == 1) // player walked through one trigger already
	{
		if (PlayerOverlappedTriggerCount != 2) // player should be in both triggers at once
		{
			//TODO: Handle this case
			UE_LOG(LogTemp, Display, TEXT("Unspecified case of ligma"));
		}
		WalkThroughProgress = 2; //Open Door

		if (!IsSlidingDoor)
		{
			FVector DirectionToPawn = GetActorLocation() - OtherActor->GetActorLocation();
			DirectionToPawn.Normalize();
		
			if (APawn* Pawn = Cast<APawn>(OtherActor))
			{
				OpenDoor(Pawn, DirectionToPawn);
			}
		}
	}
	UE_LOG(LogTemp, Display, TEXT("WalkThroughProgress: %d"), WalkThroughProgress);

}

void ALevelDoor::OnPlayerInBackTrigger(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (bIsLocked) return;
	
	const ECollisionChannel ObjectType = OtherComp->GetCollisionObjectType();
	if (ObjectType != ECC_GameTraceChannel1) return; //Not Player

	PlayerOverlappedTriggerCount++;
	UE_LOG(LogTemp, Display, TEXT("Overlapped Count: %d"), PlayerOverlappedTriggerCount);

	if (WalkThroughProgress == 0) // first trigger enter
	{
		WalkThroughProgress = 1;

		if (IsSlidingDoor) //if sliding door, open it while player enters first trigger
		{
			FVector DirectionToPawn = GetActorLocation() - OtherActor->GetActorLocation();
			DirectionToPawn.Normalize();
		
			if (APawn* Pawn = Cast<APawn>(OtherActor))
			{
				OpenDoor(Pawn, DirectionToPawn);
			}
		}
		
		bWalkThroughDirectionFront = false;
	}
	else if (WalkThroughProgress == 1) // player walked through one trigger already
	{
		if (PlayerOverlappedTriggerCount != 2) // player should be in both triggers at once
			{
			//TODO: Handle this case
			UE_LOG(LogTemp, Display, TEXT("Unspecified case of ligma"));
			return; //????
			}
		WalkThroughProgress = 2;

		if (!IsSlidingDoor) //if normal door, open it if player is in two triggers at once
		{
			FVector DirectionToPawn = GetActorLocation() - OtherActor->GetActorLocation();
			DirectionToPawn.Normalize();
		
			if (APawn* Pawn = Cast<APawn>(OtherActor))
			{
				OpenDoor(Pawn, DirectionToPawn);
			}
		}
	}
	//Progress is 2 or more
	UE_LOG(LogTemp, Display, TEXT("WalkThroughProgress: %d"), WalkThroughProgress);
}

void ALevelDoor::OpenDoor(APawn* Pawn, const FVector Direction)
{
	if (bIsLocked) return;
	
	LastDoorUserPawn = Pawn;

	if (!IsSlidingDoor)
	{
		MainDoorMesh->SetSimulatePhysics(true);
		
		FVector DoorFacingDirection = GetActorForwardVector();
		DoorFacingDirection.Normalize();
		const float DotProduct = FVector::DotProduct(Direction, DoorFacingDirection);

		FRotator TargetRotation = FRotator(0.f, SwingLimit, 0.f);
		if (DotProduct < 0.f)
		{
			TargetRotation.Yaw = -SwingLimit;
		}

		const float ImpulseStrength = (bCloseOnTriggerExit) ? 1000.f : WalkThroughImpulseStrength;
		MainDoorPhysicsConstraint->SetAngularDriveParams(250.f, 1.f, 0.f);
		MainDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);
		MainDoorMesh->AddImpulse(Direction*ImpulseStrength, NAME_None, true);

		if (IsTwoPartDoor)
		{
			SecondDoorPhysicsConstraint->SetAngularDriveParams(250.f, 1.f, 0.f);
			SecondDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);
			SecondDoorMesh->AddImpulse(Direction*ImpulseStrength, NAME_None, true);
		}
		DoorDirection = Direction;
	}
	
	bIsOpen = true;
	
	if (OnDoorOpen.IsBound())
	{
		TWeakObjectPtr<AGridMapRoom> RoomIn;
		TWeakObjectPtr<AGridMapRoom> RoomInto = RoomA;
		if (Generator.IsValid())
		{
			RoomIn = Generator->ActiveRoom;
			if (RoomIn.IsValid() && RoomIn.Get() == RoomA.Get())
			{
				RoomInto = RoomB;
			}
		}
		
		OnDoorOpen.Broadcast(
			this,
			RoomIn.IsValid() ? RoomIn.Get() : nullptr,
			RoomInto.IsValid() ? RoomInto.Get() : nullptr,
			Pawn
			);
	}
}

void ALevelDoor::CloseDoor(APawn* LastPawnInsideDoorArea)
{
	if (bIsLocked) return;
	
	LastDoorUserPawn = nullptr;

	if (!IsSlidingDoor)
	{
		const FRotator TargetRotation = FRotator(0.f, 0.f, 0.f);
		MainDoorMesh->AddImpulse(FVector(0.f, 0.f, 1.f), NAME_None, true);
		MainDoorPhysicsConstraint->SetAngularDriveParams(DrivePositionStrength, 1.f, 0.f);
		MainDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);

		if (IsTwoPartDoor)
		{
			SecondDoorMesh->AddImpulse(FVector(0.f, 0.f, 1.f), NAME_None, true);
			SecondDoorPhysicsConstraint->SetAngularDriveParams(DrivePositionStrength, 1.f, 0.f);
			SecondDoorPhysicsConstraint->SetAngularOrientationTarget(TargetRotation);
		}

		DoorDirection = FVector::ZeroVector;
	}

	bIsOpen = false;
	
	if (OnDoorClosed.IsBound())
	{
		OnDoorClosed.Broadcast(this, LastPawnInsideDoorArea);
	}

	WalkThroughProgress = 0;
}

void ALevelDoor::SetDoorLocked(bool bLocked)
{
	WalkThroughProgress = 0;
	PlayerOverlappedTriggerCount = 0;

	if (bIsOpen)
	{
		CloseDoor(nullptr);
	}
	
	bIsLocked = bLocked;

	if (bLocked)
	{
		MainDoorMesh->SetCollisionProfileName(FName("BlockAll"));
		SecondDoorMesh->SetCollisionProfileName(FName("BlockAll"));
		
		MainDoorMesh->SetSimulatePhysics(false);
		SecondDoorMesh->SetSimulatePhysics(false);
	}
	else
	{
		if (!IsSlidingDoor)
		{
			MainDoorMesh->SetCollisionProfileName(FName("NoCollision"));
			SecondDoorMesh->SetCollisionProfileName(FName("NoCollision"));
			
			MainDoorMesh->SetSimulatePhysics(true);
			if (SecondDoorMesh != nullptr)
			{
				SecondDoorMesh->SetSimulatePhysics(false);
			}
		}
	}
}