#include "PreviewRoom.h"

#include "DataAssets/GridMapRoomDataAsset.h"

#include "Components/BoxComponent.h"
#include "Components/InstancedStaticMeshComponent.h"

APreviewRoom::APreviewRoom()
{
	PrimaryActorTick.bCanEverTick = false;
	TileSize = -1.f;

	bIsPreviewRoom = true;
}

void APreviewRoom::BeginPlay()
{
	Super::BeginPlay();
	Clear();
}

#if WITH_EDITOR
void APreviewRoom::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (bIsPreviewRoom && RoomData)
	{
		BuildRoomFromRoomTiles(RoomData->GetRoomTiles());
	}
}
#endif

uint8 APreviewRoom::GetWallVariant(FVector& TilePosition) const
{
	const bool TargetTile = RoomTiles.Contains(TilePosition);
	if (!TargetTile) return 0;
	FVector CheckDirection = FVector::ZeroVector;
	uint8 NearTiles = 0;
	
	//Up
	CheckDirection.Y -= 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) NearTiles += 1 << 0;
	CheckDirection.Y += 1;
	//Right
	CheckDirection.X += 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) NearTiles += 1 << 1;
	CheckDirection.X -= 1;
	//Down
	CheckDirection.Y += 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) NearTiles += 1 << 2;
	CheckDirection.Y -= 1;
	//Left
	CheckDirection.X -= 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) NearTiles += 1 << 3;
	CheckDirection.X += 1;

	//Corners
	uint8 NearCorners = 0;
	//Right up
	CheckDirection = FVector(1, -1, 0);
	if(!RoomTiles.Contains(TilePosition+CheckDirection))
	{
		if((NearTiles & 1) == 0 && (NearTiles & 2) == 0) NearCorners += 1 << 0;
	}
	//Right down
	CheckDirection = FVector(1, 1, 0);
	if(!RoomTiles.Contains(TilePosition+CheckDirection))
	{
		if((NearTiles & 2) == 0 && (NearTiles & 4) == 0) NearCorners += 1 << 1;
	}
	//Left down
	CheckDirection = FVector(-1, 1, 0);
	if(!RoomTiles.Contains(TilePosition+CheckDirection))
	{
		if((NearTiles & 4) == 0 && (NearTiles & 8) == 0) NearCorners += 1 << 2;
	}
	//Left up
	CheckDirection = FVector(-1, -1, 0);
	if(!RoomTiles.Contains(TilePosition+CheckDirection))
	{
		if((NearTiles & 8) == 0 && (NearTiles & 1) == 0) NearCorners += 1 << 3;
	}
	
	return NearTiles | (NearCorners << 4);
}

TArray<FVector> APreviewRoom::GetWallDirections(FVector& TilePosition) const
{
	TArray<FVector> WallDirections;
	if (!RoomTiles.Contains(TilePosition)) return {};
	FVector CheckDirection = FVector::ZeroVector;
	//Up
	CheckDirection.Y -= 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) WallDirections.Add(FVector(0, -1, 0));
	CheckDirection.Y += 1;
	//Right
	CheckDirection.X += 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) WallDirections.Add(FVector(1, 0, 0));
	CheckDirection.X -= 1;
	//Down
	CheckDirection.Y += 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) WallDirections.Add(FVector(0, 1, 0));
	CheckDirection.Y -= 1;
	//Left
	CheckDirection.X -= 1;
	if(!RoomTiles.Contains(TilePosition+CheckDirection)) WallDirections.Add(FVector(-1, 0, 0));
	CheckDirection.X += 1;
	return WallDirections;
}

TArray<FVector> APreviewRoom::GetDoorDirections(uint8 DoorPlacement)
{
	TArray<FVector> DoorDirections = {};
	if ((DoorPlacement & 1) != 0) DoorDirections.Add(FVector(0, -1, 0));
	if ((DoorPlacement & 2) != 0) DoorDirections.Add(FVector(1, 0, 0));
	if ((DoorPlacement & 4) != 0) DoorDirections.Add(FVector(0, 1, 0));
	if ((DoorPlacement & 8) != 0) DoorDirections.Add(FVector(-1, 0, 0));
	return DoorDirections;
}

// ROOM EDITOR

void APreviewRoom::BuildRoomFromRoomTiles(TArray<FTileData>& WorkingRoomTiles)
{
	Clear();
	for (FTileData& RoomTile : WorkingRoomTiles)
	{
		UTileStyle* TileStyle = RoomTile.TileStyle;
		if (TileStyle == nullptr) continue;
		TileSize = (TileSize == -1.f) ? TileStyle->TileSize : 240;
		FVector GlobalPosition = RoomTile.Position*TileSize;
		BrushSetTile(GlobalPosition, TileStyle);
	}

	for (FTileData& RoomTile : WorkingRoomTiles)
	{
		UTileStyle* TileStyle = RoomTile.TileStyle;
		if (TileStyle == nullptr) continue;
		TileSize = (TileSize == -1.f) ? TileStyle->TileSize : 240;
		FVector GlobalPosition = RoomTile.Position*TileSize;
		if (RoomTile.DoorPlacement != 0)
		{
			BrushSetDoor(GlobalPosition, RoomTile.DoorPlacement);
		}
	}
}

void APreviewRoom::CreateElevatorActor()
{
	if (RoomData)
	{
		if (ElevatorActor != nullptr && IsValid(ElevatorActor))
		{
			ElevatorActor->Destroy();
		}
		ElevatorActor = nullptr;
		
		if (RoomData->HasElevator)
		{
			UClass* ElevatorClass = RoomData->ElevatorObjectClass;
			const FRotator ElevatorYaw = FRotator(0, RoomData->ElevatorYawRotation, 0);
			if (ElevatorClass != nullptr)
			{
				ElevatorActor = GetWorld()->SpawnActor(ElevatorClass, &RoomData->ElevatorPosition, &ElevatorYaw);
			}
		}

		HasElevator = RoomData->HasElevator;
		ElevatorActorClass = HasElevator ? RoomData->ElevatorObjectClass : nullptr;
		ElevatorPosition = HasElevator ? RoomData->ElevatorPosition : FVector::ZeroVector;
		ElevatorYawRotation = HasElevator ? RoomData->ElevatorYawRotation : 0.f;
	}
}


TArray<FTileData> APreviewRoom::GetRoomTilesData()
{
	TArray<FTileData> WorkingRoomTilesData;
	RoomTiles.GenerateValueArray(WorkingRoomTilesData);
	
	return WorkingRoomTilesData;
}

void APreviewRoom::BrushSetTile(FVector& Location, UTileStyle* TileStyle)
{
	// UE_LOG(LogTemp, Display, TEXT("%i %i"), Location.X, Location.Y);

	FVector GridLocation = Location/TileSize;

	//if different size return
	if (TileStyle == nullptr) return;
	//If new Tile, then add
	if (!RoomTiles.Contains(GridLocation))
	{
		if (RoomTiles.Num() == 0 && TileSize == -1.f)
		{
			TileSize = TileStyle->TileSize;
			GridLocation = Location/TileSize;
		}
		RoomTiles.Add(GridLocation, FTileData(GridLocation, nullptr));
	}

	//If painting over the same style, do nothing.
	if(RoomTiles.Contains(GridLocation) && RoomTiles[GridLocation].TileStyle == TileStyle) return;

	if (!TileStyles.Contains(TileStyle))
	{
		TileStyles.Add(TileStyle);
		RegisterInstancedStaticMeshComponent(TileStyle);
	}
	
	UpdateNearTiles(GridLocation, TileStyle);
	if (!OverlapVolume)
	{
		UpdateOverlapVolume(Location, false);
	}

	CreateFloor(GridLocation, TileStyle);
}

void APreviewRoom::CreateWall(FVector& GridLocation, UTileStyle* TileStyle)
{
	if (!RoomTiles.Contains(GridLocation)) return;
	
	FTileData& TileData = RoomTiles[GridLocation];
	if (TileStyle != nullptr || (TileStyle != nullptr && TileData.TileStyle == nullptr)) TileData.TileStyle = TileStyle;

	if (IsValid(TileData.InstancedStaticMeshComponent) && TileData.MeshType != EMeshType::FLOOR)
	{
		// UE_LOG(LogTemp, Display, TEXT("InstancedStaticMeshComponent of Tile!!! %s"), *TileData.InstancedStaticMeshComponent->GetStaticMesh()->GetName());
		UInstancedStaticMeshComponent* CurrentInstancedStaticMeshComponent = TileData.InstancedStaticMeshComponent;

		if (InstancedStaticMeshIndexes.Contains(CurrentInstancedStaticMeshComponent)
			&& InstancedStaticMeshIndexes[CurrentInstancedStaticMeshComponent].Contains(GridLocation))
		{
			const int MeshIndex = InstancedStaticMeshIndexes[CurrentInstancedStaticMeshComponent].Find(GridLocation);
			if (MeshIndex > -1)
			{
				CurrentInstancedStaticMeshComponent->RemoveInstance(MeshIndex);
				InstancedStaticMeshIndexes[CurrentInstancedStaticMeshComponent].Remove(GridLocation);
			}
		}
	}
	// if (IsValid(TileData.CornerInstancedStaticMeshComponent) && (TileData.WallPlacement & (15 << 4)) != 0)
	if (IsValid(TileData.CornerInstancedStaticMeshComponent))
	{
		// UE_LOG(LogTemp, Display, TEXT("InstancedStaticMeshComponent of Tile!!! %s"), *TileData.InstancedStaticMeshComponent->GetStaticMesh()->GetName());
		UInstancedStaticMeshComponent* CornerInstancedStaticMeshComponent = TileData.CornerInstancedStaticMeshComponent;
	
		if (InstancedStaticMeshIndexes.Contains(CornerInstancedStaticMeshComponent))
		{
			for (int CornerId = 0; CornerId < 4; CornerId++)
			{
				FVector CornerLocation = GridLocation+FVector(0, 0, CornerId);
				if (InstancedStaticMeshIndexes[CornerInstancedStaticMeshComponent].Contains(CornerLocation))
				{
					const int MeshIndex = InstancedStaticMeshIndexes[CornerInstancedStaticMeshComponent].Find(CornerLocation);
					if (MeshIndex > -1)
					{
						CornerInstancedStaticMeshComponent->RemoveInstance(MeshIndex);
						InstancedStaticMeshIndexes[CornerInstancedStaticMeshComponent].Remove(CornerLocation);
					}
				}
			}
		}
	}
	
	uint8 DoorPlacement = 0;
	const uint8 WallAndCornerVariant = GetWallVariant(GridLocation);
	uint8 WallVariant = WallAndCornerVariant & 15;
	uint8 MirrorX = 1;

	TileData.MeshType = TileStyle->GetMeshType(WallVariant, DoorPlacement, TileData.YawWallRotation, MirrorX);
	
	double WallBuildYaw = TileData.YawWallRotation;
	DoorPlacement = TileData.DoorPlacement;
	EMeshType WallBuildMesh = TileStyle->GetMeshType(WallVariant, DoorPlacement, WallBuildYaw, MirrorX);
	if (TileData.TileStyle == nullptr) return;
	
	const TTuple<UTileStyle*, EMeshType> WallBrushKey = TTuple<UTileStyle*, EMeshType>(TileData.TileStyle, WallBuildMesh);
	// UE_LOG(LogTemp, Display, TEXT("Get instanced mesh for %i"), WallBuildMesh);
	// UE_LOG(LogTemp, Display, TEXT("Has registered comp: %i"), InstancedStaticMeshes.Contains(WallBrushKey));

	if (!InstancedStaticMeshComponents.Contains(WallBrushKey) || InstancedStaticMeshComponents[WallBrushKey] == nullptr) return;
	UInstancedStaticMeshComponent* Brush = InstancedStaticMeshComponents[WallBrushKey];
	FTransform Transform = FTransform(FRotator(0, WallBuildYaw, 0).Quaternion(), GridLocation*TileSize, FVector(MirrorX, 1, 1));
	// RemoveAnyInstancedMeshFromLocation(GridLocation);
	// UE_LOG(LogTemp, Display, TEXT("Yaw: %f"), TileData.YawWallRotation)
	if(!InstancedStaticMeshIndexes.Contains(Brush))
	{
		InstancedStaticMeshIndexes.Add(Brush, {});
	}
	if(InstancedStaticMeshIndexes.Contains(Brush) && !InstancedStaticMeshIndexes[Brush].Contains(GridLocation))
	{
		TileData.InstancedStaticMeshComponent = Brush;
		InstancedStaticMeshIndexes[Brush].Add(GridLocation);
		Brush->AddInstance(Transform);
	}

	//Corner brush
	const uint8 CornerPlacement = WallAndCornerVariant >> 4;
	if (CornerPlacement == 0) return; //no corners

	const TTuple<UTileStyle*, EMeshType> CornerBrushKey = TTuple<UTileStyle*, EMeshType>(TileData.TileStyle, EMeshType::CORNER);

	if (!InstancedStaticMeshComponents.Contains(CornerBrushKey) || InstancedStaticMeshComponents[CornerBrushKey] == nullptr) return;
	Brush = InstancedStaticMeshComponents[CornerBrushKey];
	
	if(!InstancedStaticMeshIndexes.Contains(Brush))
	{
		InstancedStaticMeshIndexes.Add(Brush, {});
	}
	
	for (uint8 CornerId = 0; CornerId < 4; CornerId++)
	{
		if ((CornerPlacement & (1 << CornerId)) == 0) continue;
		
		const FVector CornerBrushLocation = GridLocation+FVector(0, 0, CornerId);
		const double CornerYawRotation = 180.f+(90.f*CornerId);

		Transform = FTransform(FRotator(0, CornerYawRotation, 0).Quaternion(), GridLocation*TileSize, FVector(1, 1, 1));

		if(InstancedStaticMeshIndexes.Contains(Brush) && !InstancedStaticMeshIndexes[Brush].Contains(CornerBrushLocation))
		{
			TileData.CornerInstancedStaticMeshComponent = Brush;
			InstancedStaticMeshIndexes[Brush].Add(CornerBrushLocation);
			Brush->AddInstance(Transform);
		}
	}
}

void APreviewRoom::CreateFloor(FVector& GridLocation, UTileStyle* TileStyle)
{
	TTuple<UTileStyle*, EMeshType> FloorBrushKey = TTuple<UTileStyle*, EMeshType>(TileStyle, EMeshType::FLOOR);
	if (!InstancedStaticMeshComponents.Contains(FloorBrushKey) || InstancedStaticMeshComponents[FloorBrushKey] == nullptr) return;
	UInstancedStaticMeshComponent* FloorBrush = InstancedStaticMeshComponents[FloorBrushKey];
	FTransform FloorTransform = FTransform(FRotator(0, 0, 0).Quaternion(), GridLocation*TileSize);

	//If there is a floor of the same style, dont create one
	if(!InstancedStaticMeshIndexes.Contains(FloorBrush))
	{
		InstancedStaticMeshIndexes.Add(FloorBrush, {});
	}
	if(!InstancedStaticMeshIndexes[FloorBrush].Contains(GridLocation))
	{
		InstancedStaticMeshIndexes[FloorBrush].Add(GridLocation);
		FloorBrush->AddInstance(FloorTransform);
	}
	// UE_LOG(LogTemp, Display, TEXT("Floor Created!"));
}

void APreviewRoom::BrushUnsetTile(FVector& Location)
{
	FVector GridLocation = Location/TileSize;
	if (!RoomTiles.Contains(GridLocation)) return;

	FTileData& TileData = RoomTiles[GridLocation];

	if (OverlapVolume)
	{
		UpdateOverlapVolume(Location, true);
	}
	
	RemoveFloorMesh(GridLocation);
	RemoveWallMesh(GridLocation);
	RoomTiles.Remove(GridLocation);
	if (RoomTiles.Num() == 0) TileSize = -1.f;
	
	UpdateNearTiles(GridLocation, nullptr);
}

void APreviewRoom::BrushSetDoor(FVector& Location, uint8 ForcedDoorPlacement)
{
	FVector GridLocation = Location/TileSize;
	if (!RoomTiles.Contains(GridLocation)) return;
	FTileData& TargetTile = RoomTiles[GridLocation];
	uint8 DoorPlacement = ForcedDoorPlacement;
	if (DoorPlacement == 0)
	{
		DoorPlacement = GetWallVariant(GridLocation);
	}
	// if (TargetTile.DoorPlacement != 0) return;
	TargetTile.DoorPlacement = DoorPlacement;

	if (!DoorSocketTileKeys.Contains(GridLocation))
	{
		DoorSocketTileKeys.Add(GridLocation);
	}
	
	UpdateTile(GridLocation, nullptr);
}

void APreviewRoom::BrushUnsetDoor(FVector& Location)
{
	FVector GridLocation = Location/TileSize;
	if (!RoomTiles.Contains(GridLocation)) return;
	FTileData& TargetTile = RoomTiles[GridLocation];
	if (TargetTile.DoorPlacement == 0) return;
	TargetTile.DoorPlacement = 0;
	if (!DoorSocketTileKeys.Contains(GridLocation))
	{
		DoorSocketTileKeys.Remove(GridLocation);
	}
	UpdateTile(GridLocation, nullptr);
}

void APreviewRoom::UpdateTile(FVector& GridLocation, UTileStyle* ForceTileStyle)
{
	if (RoomTiles.Contains(GridLocation))
	{
		RoomTiles[GridLocation].WallPlacement = GetWallVariant(GridLocation);
		CreateWall(GridLocation, ForceTileStyle);
	}
}

FTileData* APreviewRoom::GetTileData(FVector& GridLocation)
{
	if (RoomTiles.Contains(GridLocation))
	{
		return &RoomTiles[GridLocation];
	}
	return nullptr;
	
}

int APreviewRoom::GetTileSize()
{
	return TileSize;
}

FVector APreviewRoom::GetOverlapVolumeBoxExtent()
{
	if (!OverlapVolume)
	{
		return FVector::ZeroVector;
	}
	return OverlapVolume->GetUnscaledBoxExtent();
}

FVector APreviewRoom::GetOverlapVolumeRelativePosition()
{
	if (!OverlapVolume)
	{
		return FVector::ZeroVector;
	}
	return OverlapVolume->GetRelativeLocation();
}

void APreviewRoom::RemoveWallMesh(FVector& GridLocation)
{
	if (!RoomTiles.Contains(GridLocation)) return;
	FTileData& TileData = RoomTiles[GridLocation];
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent = TileData.InstancedStaticMeshComponent;
	if (!IsValid(InstancedStaticMeshComponent))
	{
		UTileStyle* TileStyle = TileData.TileStyle;
		if (!IsValid(TileStyle)) return;
		if (TileData.MeshType == EMeshType::NONE || TileData.MeshType == EMeshType::FLOOR) return;
		TTuple<UTileStyle*, EMeshType> WallKey = TTuple<UTileStyle*, EMeshType>(TileStyle, TileData.MeshType);
		if (!InstancedStaticMeshComponents.Contains(WallKey) ||
			(InstancedStaticMeshComponents.Contains(WallKey) && !IsValid(InstancedStaticMeshComponents[WallKey]))) return;
		InstancedStaticMeshComponent = InstancedStaticMeshComponents[WallKey];
		if (!IsValid(InstancedStaticMeshComponent)) return;
	}
	if (!InstancedStaticMeshIndexes.Contains(InstancedStaticMeshComponent)) return;
	TArray<FVector>& SetIndecies = InstancedStaticMeshIndexes[InstancedStaticMeshComponent];
	if (!SetIndecies.Contains(GridLocation)) return;
	int MeshIndex = SetIndecies.Find(GridLocation);
	if (MeshIndex < 0) return;
	
	InstancedStaticMeshComponent->RemoveInstance(MeshIndex);
	SetIndecies.Remove(GridLocation);
}

void APreviewRoom::RemoveFloorMesh(FVector& GridLocation)
{
	if (!RoomTiles.Contains(GridLocation)) return;
	
	FTileData& TileData = RoomTiles[GridLocation];
	if (TileData.TileStyle == nullptr) return;
	const TTuple<UTileStyle*, EMeshType> FloorBrushKey = TTuple<UTileStyle*, EMeshType>(TileData.TileStyle, EMeshType::FLOOR);
	if (!InstancedStaticMeshComponents.Contains(FloorBrushKey) || InstancedStaticMeshComponents[FloorBrushKey] == nullptr) return;
	
	UInstancedStaticMeshComponent* FloorBrush = InstancedStaticMeshComponents[FloorBrushKey];
	if (!IsValid(FloorBrush)) return;
	
	if (!InstancedStaticMeshIndexes.Contains(FloorBrush)) return;
	TArray<FVector>& SetIndecies = InstancedStaticMeshIndexes[FloorBrush];
	if (!SetIndecies.Contains(GridLocation)) return;
	int MeshIndex = SetIndecies.Find(GridLocation);
	if (MeshIndex < 0) return;
	
	FloorBrush->RemoveInstance(MeshIndex);
	SetIndecies.Remove(GridLocation);
}

void APreviewRoom::UpdateOverlapVolume(FVector& BrushLocation, bool IsErasing)
{
	if (OverlapVolume == nullptr || RoomTiles.Num() == 0 || !RoomData.IsValid()) return;
	
	TArray<FVector> Positions;
	RoomTiles.GetKeys(Positions);

	if (!Positions.Contains(BrushLocation/TileSize)) return;
	
	if (BrushLocation.X < RoomExtends.X)
	{
		RoomExtends.X = BrushLocation.X - TileSize*.25f;
	}
	if (BrushLocation.X > RoomExtends.Y)
	{
		RoomExtends.Y = BrushLocation.X + TileSize*.25f;
	}

	if (BrushLocation.Y < RoomExtends.Z)
	{
		RoomExtends.Z = BrushLocation.Y - TileSize*.25f;
	}
	if (BrushLocation.Y > RoomExtends.W)
	{
		RoomExtends.W = BrushLocation.Y + TileSize*.25f;
	}

	const FVector BoxSize = FVector(abs(RoomExtends.X)+abs(RoomExtends.Y), abs(RoomExtends.Z)+abs(RoomExtends.W), TileSize*4)*.5f;
	const FVector Center = FVector(RoomExtends.Y + RoomExtends.X, RoomExtends.W + RoomExtends.Z, 0)*.5f;
	
	OverlapVolume->SetBoxExtent(BoxSize+FVector(TileSize));
	RoomData->OverlapVolumeExtent = BoxSize+FVector(TileSize);
	OverlapVolume->SetRelativeLocation(Center);
	RoomData->OverlapVolumePosition = Center;
}


void APreviewRoom::UpdateNearTiles(FVector& GridLocation, UTileStyle* TileStyle = nullptr)
{
	for (int X = GridLocation.X - 1; X <= GridLocation.X + 1; X++)
	{
		for (int Y = GridLocation.Y - 1; Y <= GridLocation.Y + 1; Y++)
		{
			FVector UpdatedTile = FVector(X, Y, 0);
			UpdateTile(UpdatedTile, UpdatedTile == GridLocation ? TileStyle : nullptr);
		}
	}
}
