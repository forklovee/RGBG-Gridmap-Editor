
#include "Spawners/ActorSpawner.h"

#include "AIController.h"
#include "Components/TextRenderComponent.h"
#include "Spawners/SpawnerDataAsset.h"

AActorSpawner::AActorSpawner()
{
	BaseComponent = CreateDefaultSubobject<USceneComponent>(FName("Root"));
	RootComponent = BaseComponent;
	
	PreviewStaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PreviewStaticMesh"));
	PreviewStaticMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PreviewStaticMesh->SetRelativeLocation(FVector3d(0.0, 0.0, 200.0));
	PreviewStaticMesh->SetupAttachment(RootComponent);
	
	PreviewSkeletalMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("PreviewSkeletalMesh"));
	PreviewSkeletalMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	PreviewSkeletalMesh->SetRelativeLocation(FVector3d(0.0, 0.0, 0.0));
	PreviewSkeletalMesh->SetupAttachment(RootComponent);
	// PreviewSkeletalMesh->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale);

	PreviewText = CreateDefaultSubobject<UTextRenderComponent>(FName("PreviewText"));
	PreviewText->Text = FText::FromString("Spawner");
	PreviewText->HorizontalAlignment = EHorizTextAligment::EHTA_Center;
	PreviewText->SetRelativeLocation(FVector3d(0.0, 0.0, 250.0));
	PreviewText->SetWorldRotation(FRotator(45.0, 225.0, 0.0));
	PreviewText->SetupAttachment(RootComponent);

	SpawnerPreviewBeam = CreateDefaultSubobject<UStaticMeshComponent>(FName("SpawnerPreviewBeam"));
	SpawnerPreviewBeam->SetRelativeScale3D(FVector3d(0.75, 0.75, 0.25));
	SpawnerPreviewBeam->SetRelativeLocation(FVector3d(0.0, 0.0, 0.0));
	SpawnerPreviewBeam->SetRelativeRotation(FRotator(0.0, 0.0, 180.0));
	SpawnerPreviewBeam->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpawnerPreviewBeam->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/EngineVolumetrics/LightBeam/Mesh/S_EV_SimpleLightBeam_01.S_EV_SimpleLightBeam_01")).Object);
	SpawnerPreviewBeam->SetupAttachment(RootComponent);
	
	SpawnerMarker = CreateDefaultSubobject<UStaticMeshComponent>(FName("SpawnerMarker"));
	SpawnerMarker->SetRelativeLocation(FVector3d(0.0, 0.0, 180.0));
	SpawnerMarker->SetRelativeRotation(FRotator(0.0, 45.0, 0.0));
	SpawnerMarker->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	SpawnerMarker->SetStaticMesh(ConstructorHelpers::FObjectFinder<UStaticMesh>(TEXT("/Engine/VREditor/TransformGizmo/RotationHandleIndicator.RotationHandleIndicator")).Object);
	SpawnerMarker->SetupAttachment(RootComponent);

	UpdatePreview(ActorSpawnData);
}

void AActorSpawner::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.Property == nullptr)
	{
		return;
	}
	const FProperty* Property = PropertyChangedEvent.Property;
	if (Property->GetName() == "ActorSpawnData" && Property->IsA(FObjectProperty::StaticClass()))
	{
		const FObjectProperty* ObjectProperty = CastField<FObjectProperty>(Property);
		UObject* NewData = ObjectProperty->GetPropertyValue_InContainer(this);
		
		UpdatePreview(Cast<USpawnerDataAsset>(NewData));
	}
}

void AActorSpawner::BeginPlay()
{
	Super::BeginPlay();

	UpdatePreview(ActorSpawnData);
}

void AActorSpawner::UpdatePreview(USpawnerDataAsset* NewSpawnerData)
{
	ActorSpawnData = NewSpawnerData;

	PreviewSkeletalMesh->SetRelativeLocation(FVector3d(0.0, 0.0, 0.0));
	PreviewStaticMesh->SetRelativeLocation(FVector3d(0.0, 0.0, 100.0));
	
	if (ActorSpawnData == nullptr || ActorSpawnData->GetActorClass() == nullptr)
	{
		PreviewSkeletalMesh->SetSkeletalMesh(nullptr);
		PreviewStaticMesh->SetStaticMesh(nullptr);
		return;
	}
	if (ActorSpawnData->GetStaticMesh() != nullptr) //Actor has a static mesh as a preview
	{
		PreviewStaticMesh->SetStaticMesh(ActorSpawnData->GetStaticMesh());
		PreviewSkeletalMesh->SetSkeletalMesh(nullptr);
	}
	else if (ActorSpawnData->GetSkeletalMesh() != nullptr)//Actor has a skeletal mesh as a preview
	{
		PreviewSkeletalMesh->SetSkeletalMesh(ActorSpawnData->GetSkeletalMesh());
		PreviewStaticMesh->SetStaticMesh(nullptr);
	}
	else
	{
		PreviewSkeletalMesh->SetSkeletalMesh(nullptr);
		PreviewStaticMesh->SetStaticMesh(nullptr);
	}
}

AActor* AActorSpawner::Spawn()
{
	if (ActorSpawnData == nullptr)
	{
		return nullptr;
	}
	UClass* ActorClass = ActorSpawnData->GetActorClass();
	if (ActorClass == nullptr)
	{
		return nullptr;
	}
	const FVector SpawnLocation = GetActorLocation()+FVector3d::UpVector*25;
	const FRotator SpawnRotation = GetActorRotation();
	
	AActor* SpawnedActor = GetWorld()->SpawnActor(ActorClass, &SpawnLocation, &SpawnRotation);
	if (!IsValid(SpawnedActor)) return nullptr;
	
	SpawnedActor->SetOwner(GetOwner());

	if (APawn* Pawn = Cast<APawn>(SpawnedActor))
	{
		if (ActorSpawnData->GetAIControllerClass() == nullptr) return SpawnedActor;
		
		AAIController* AIController = GetWorld()->SpawnActor<AAIController>(ActorSpawnData->GetAIControllerClass());
		AIController->Possess(Pawn);
		
		if (IsValid(AIController) && ActorSpawnData->GetBehaviorTree() != nullptr)
		{
			bool BTstate = AIController->RunBehaviorTree(ActorSpawnData->GetBehaviorTree());
			UE_LOG(LogTemp, Warning, TEXT("Behavior Tree State: %d"), BTstate)
		}
	}

	if (bDestroyOnSpawn)
	{
		DestroySelf();
	}
	
	return SpawnedActor;
}

void AActorSpawner::DestroySelf(float Timeout)
{
	FTimerHandle UnusedHandle;
	GetWorldTimerManager().SetTimer(UnusedHandle, this, &AActorSpawner::OnDestroy, Timeout, false);
}

USpawnerDataAsset* AActorSpawner::GetSpawnData() const
{
	return ActorSpawnData;
}

void AActorSpawner::OnDestroy()
{
	UE_LOG(LogTemp, Warning, TEXT("Destroying Spawner"))
	Destroy();
}