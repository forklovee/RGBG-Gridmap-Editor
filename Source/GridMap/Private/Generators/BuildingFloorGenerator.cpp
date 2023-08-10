#include "Generators/BuildingFloorGenerator.h"

#include "GridmapRoom.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "DataAssets/GridMapRoomDataAsset.h"
#include "DataAssets/GridmapLevelCollectionDataAsset.h"
#include "LevelDoor/LevelDoor.h"
#include "LevelInstance/LevelInstanceActor.h"
#include "NavMesh/NavMeshBoundsVolume.h"

ABuildingFloorGenerator::ABuildingFloorGenerator()
{
	VoidMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("VoidMeshComponent"));
	VoidMeshComponent->SetupAttachment(RootComponent);
}

EGenerationEndState ABuildingFloorGenerator::Generate()
{
	TArray<AGridMapRoom*> RoomActors;
	
	UE_LOG(LogTemp, Warning, TEXT("Start Generation.\n Initial State: %i"), !LevelCollectionDataAsset)
	if (!LevelCollectionDataAsset)
	{
		return EGenerationEndState::FAILURE;
	}
	
	RoomTypeLimits = LevelCollectionDataAsset->RoomTypeLimits;
	
	// return EGenerationEndState::SUCCESS;
	UE_LOG(LogTemp, Display, TEXT("Generate Floor Layout."))
	TArray<FRoom> FloorLayout = GetFloorLayout();
	
	for (FRoom &Room : FloorLayout)
	{
		//convert room type enum to string
		FString RoomTypeString = UEnum::GetValueAsString(Room.RoomType);
	
		UE_LOG(LogTemp, Warning, TEXT("%i Room: %s"), Room.Id, *UEnum::GetValueAsString(Room.RoomType));
		UE_LOG(LogTemp, Display, TEXT("\tBranch dir: %i"), Room.BranchDirection);
		UE_LOG(LogTemp, Display, TEXT("\tBranches: %i"), Room.RuleCollection.Num());
		if (Room.ParentId != -1)
		{
			UE_LOG(LogTemp, Display, TEXT("\t%i Parent: %s"), Room.ParentId, *UEnum::GetValueAsString(FloorLayout[Room.ParentId].RoomType));
		}
		if (Room.ChildrenIds.Num() > 0)
		{
			for (const int ChildId : Room.ChildrenIds)
			{
				UE_LOG(LogTemp, Display, TEXT("\t%i Child: %s"), ChildId, *UEnum::GetValueAsString(FloorLayout[ChildId].RoomType));
			}
		}
	}


	UE_LOG(LogTemp, Display, TEXT("Layout Generation Complete."))
	//Place and Choose rooms
	if (FloorLayout.Num() > 0)
	{
		FRoom &StartRoom = FloorLayout[0];
		
		PlaceRoom(StartRoom, FloorLayout);

		if (!PlaceChildRooms(StartRoom, FloorLayout))
		{
			return EGenerationEndState::FAILURE;
		}
	}
	else
	{
		return EGenerationEndState::FAILURE;
	}

	//Debug Print
	for (FRoom &Room : FloorLayout)
	{
		//convert room type enum to string
		FString RoomTypeString = UEnum::GetValueAsString(Room.RoomType);
	
		UE_LOG(LogTemp, Warning, TEXT("%i Room: %s"), Room.Id, *UEnum::GetValueAsString(Room.RoomType));
		UE_LOG(LogTemp, Display, TEXT("\tBranch dir: %i"), Room.BranchDirection);
		UE_LOG(LogTemp, Display, TEXT("\tBranches: %i"), Room.RuleCollection.Num());
		if (Room.ParentId != -1)
		{
			UE_LOG(LogTemp, Display, TEXT("\t%i Parent: %s"), Room.ParentId, *UEnum::GetValueAsString(FloorLayout[Room.ParentId].RoomType));
		}
		if (Room.ChildrenIds.Num() > 0)
		{
			for (const int ChildId : Room.ChildrenIds)
			{
				UE_LOG(LogTemp, Display, TEXT("\t%i Child: %s"), ChildId, *UEnum::GetValueAsString(FloorLayout[ChildId].RoomType));
			}
		}
	}
	
	//Build Rooms
	for (FRoom& Room : FloorLayout)
	{
		UE_LOG(LogTemp, Display, TEXT("Building %d room of type %s..."), Room.Id, *UEnum::GetValueAsString(Room.RoomType))
		
		FTransform LevelTransform = FTransform::Identity;
		LevelTransform.SetLocation(Room.RoomPosition);

		if (Room.RoomData.IsNull() && !Room.bIsDynamicCorridor)
		{
			UE_LOG(LogTemp, Error, TEXT("Room Data is Empty!"))
			continue;
		}
		
		if (!Room.RoomData.IsValid())
		{
			Room.RoomData = Room.RoomData.LoadSynchronous();
		}

		//TODO: Levels should be set in editor, and loaded here... Create level instance component in rooms.
		// TSoftObjectPtr<UWorld> RoomLevel = Room.RoomData->RoomLevel;
		// if (!RoomLevel.IsNull() && !Room.bIsDynamicCorridor)
		// {
		// 	RoomLevel = RoomLevel.LoadSynchronous();
		//
		// 	AActor* LevelInstanceActor = GetWorld()->SpawnActor(ALevelInstance::StaticClass(), &LevelTransform);
		// 	ALevelInstance* LevelInstance = Cast<ALevelInstance>(LevelInstanceActor);
		// 	Room.RoomLevel = LevelInstance;
		// 	LevelInstance->SetWorldAsset(RoomLevel);
		// 	LevelInstance->LoadLevelInstance();
		//
		// 	LevelInstances.Add(LevelInstance);
		// }
		// else
		// {
		// 	UE_LOG(LogTemp, Error, TEXT("Room %i No level spawned."), Room.Id)
		// }
		
		AActor* RoomActor = GetWorld()->SpawnActor(AGridMapRoom::StaticClass(), &LevelTransform);
		if (AGridMapRoom* GridMapRoom = Cast<AGridMapRoom>(RoomActor))
		{
			if (Room.Id == 0)
			{
				ActiveRoom = GridMapRoom;
			}
			
			if (Room.bIsDynamicCorridor)
			{
				UE_LOG(LogTemp, Display, TEXT("\tIs Dynamic Corridor!"))
			}
			
			Room.RoomActor = GridMapRoom;
			GridMapRoom->RoomData = Room.RoomData;
			GridMapRoom->InGame_OpenSockets = Room.OpenSockets;
			
			// GridMapRoom->SetRoomIdDebugText(Room.Id);
			if (Room.bIsDynamicCorridor)
			{
				GridMapRoom->BuildRoom();
			}
			else
			{
				GridMapRoom->BuildRoom(Room.RoomData);
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Room %i Failed to spawn GridMap Room Actor!"), Room.Id)
		}
	}

	UE_LOG(LogTemp, Display, TEXT("Building Complete. Lift Active Room fog of war. %i"), ActiveRoom.IsValid())
	if (ActiveRoom.IsValid())
	{
		ActiveRoom->SetFogOfWarVisibility(false);
	}

	CreateDoors();
	FillVoid();
	return EGenerationEndState::SUCCESS;
}

void ABuildingFloorGenerator::CreateDoors()
{
	for (FOpenSocket &DoorSocket : DoorSocketList)
	{
		const FRoom* Room = DoorSocket.RoomA;
		
		FVector DoorLocation = Room->RoomPosition + DoorSocket.DoorWorldPosition;
		DoorLocation.Z = 10.f;
		const float DoorYaw = (FMath::Abs(DoorSocket.SocketDirectionVector.X) != 0) ? 0.f : 90.f;
		FRotator DoorRotation = FRotator(0, DoorYaw, 0);
		if (DoorSocket.TileStyle->SingleLevelDoorAsset)
		{
			AActor* DoorActor = GetWorld()->SpawnActor(DoorSocket.TileStyle->SingleLevelDoorAsset, &DoorLocation, &DoorRotation);
			if (ALevelDoor* LevelDoor = Cast<ALevelDoor>(DoorActor))
			{
				LevelDoor->Generator = this;
				LevelDoor->RoomA = Room->RoomActor;
				LevelDoor->RoomB = DoorSocket.RoomB->RoomActor;
				LevelDoor->OnDoorOpen.AddDynamic(this, &ABuildingFloorGenerator::ChangePreviewedRoom);
				LevelDoor->OnDoorClosed.AddDynamic(this, &ABuildingFloorGenerator::ResetPreviewedRoom);
				LevelDoor->OnPlayerWalkedThroughDoor.AddDynamic(this, &ABuildingFloorGenerator::ChangeActiveRoom);
				// LevelDoor->SetActorRotation(DoorRotation);
				LevelDoors.Add(LevelDoor);
			}
		}
	}
	
}

TArray<FRoom> ABuildingFloorGenerator::GetFloorLayout()
{
	TArray<FRoom> FloorLayout;
	if (!RoomTypeLimits.Contains(ERoomType::START) || (RoomTypeLimits.Contains(ERoomType::START) && RoomTypeLimits[ERoomType::START] == 0))
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR - Generator/Level Data Asset: No Start Room Limit Found or Start Room Limit Set to 0 or less!"))
		return FloorLayout;
	}
	
	FloorLayout.Add(FRoom(0, ERoomType::START));
	//create start branches
	int StartRemainingBranches = RoomTypeLimits[ERoomType::START];
	while (StartRemainingBranches != 0)
	{
		FRoom* StartRoom = &FloorLayout[0];
		
		const ERoomType RoomType = StartRoom->RoomType;
		TArray<TArray<ERoomType>> RuleCollections = LevelCollectionDataAsset->GetRulesOfType(RoomType);

		if (RuleCollections.Num() == 0) return FloorLayout;
		
		//Get and set rules for start room branch
		TArray<ERoomType> RuleCollection = RuleCollections[ FMath::RandRange(0, RuleCollections.Num() - 1) ];
		StartRoom->RuleCollection.Add( RuleCollection );

		ExpandNecessaryBranches(StartRoom->Id, FloorLayout);
		
		UE_LOG(LogTemp, Warning, TEXT("--- Remaining Branches: %i ---"), StartRemainingBranches);
		StartRemainingBranches--;
	}
	
	return FloorLayout;
}

void ABuildingFloorGenerator::ExpandNecessaryBranches(int ParentId, TArray<FRoom>& FloorLayout)
{
	TArray<TArray<ERoomType>> RulesCollection = FloorLayout[ParentId].RuleCollection;
	
	for (TArray<ERoomType> &RuleCollection : RulesCollection)
	{
		for (const ERoomType RoomType : RuleCollection)
		{
			FRoom& Child = FloorLayout[ FloorLayout.Add( FRoom(FloorLayout.Num(), RoomType) ) ];
			Child.ParentId = ParentId;
			
			if (RoomTypeLimits.Contains(RoomType))
			{
				RoomTypeLimits[RoomType]--;
			}

			//assign rule collection to the child and make sure it doesn't exceed limits
			TArray<TArray<ERoomType>> SafeRuleCollections = GetSafeRuleCollections(RoomType);
			if (SafeRuleCollections.Num() > 0) //can expand
			{
				TArray<int> SortedCollectionIdsByFunGrade = GetRuleCollectionIdsSortedByFunGrade(SafeRuleCollections);
				
				Child.RuleCollection.Add( SafeRuleCollections[ SortedCollectionIdsByFunGrade[0] ] );
				ExpandNecessaryBranches(Child.Id, FloorLayout);
			}
				
			Child.ParentId = ParentId;
			FloorLayout[ParentId].ChildrenIds.Add(Child.Id);
			
			ParentId = Child.Id;
		}
	}
}

TArray< TArray<ERoomType> > ABuildingFloorGenerator::GetSafeRuleCollections(ERoomType RoomType)
{
	if (!LevelCollectionDataAsset->BuildRules.Contains(RoomType)) return TArray< TArray<ERoomType> >();
	
	TArray<TArray<ERoomType>> RuleCollections = LevelCollectionDataAsset->GetRulesOfType(RoomType);
	if (RuleCollections.Num() == 0) return TArray< TArray<ERoomType> >();

	TArray<TArray<ERoomType>> SafeRules = TArray<TArray<ERoomType>>(); 

	int RuleId = 0;
	for (const TArray<ERoomType> Rule : RuleCollections)
	{
		TSet<ERoomType> LimitedRoomTypes;
		RoomTypeLimits.GetKeys(LimitedRoomTypes);

		bool bIsSafe = true;
		for (const ERoomType LimitedRoomType : LimitedRoomTypes)
		{
			if (Rule.Contains(LimitedRoomType) && RoomTypeLimits[LimitedRoomType] <= 0)
			{
				bIsSafe = false;
				break;
			}
		}

		if (bIsSafe)
		{
			SafeRules.Add(Rule);
		}
		
		RuleId++;
	}

	return SafeRules;
}

TArray<int> ABuildingFloorGenerator::GetRuleCollectionIdsSortedByFunGrade(TArray< TArray<ERoomType> > &RuleCollections) const
{
	TMap<int, TArray<int>> FunGradeToRuleCollectionIds = TMap<int, TArray<int>>();

	TMap<ERoomType, uint8> RoomTypeFunGrade = LevelCollectionDataAsset->RoomTypeFunGrade;

	int RuleCollectionId = 0;
	for (TArray<ERoomType> &RuleCollection : RuleCollections)
	{
		int FunGrade = 0;
		for (const ERoomType RoomType : RuleCollection)
		{
			if (!RoomTypeFunGrade.Contains(RoomType)) continue;
			
			FunGrade += RoomTypeFunGrade[RoomType];
		}

		if (!FunGradeToRuleCollectionIds.Contains(FunGrade))
		{
			FunGradeToRuleCollectionIds.Add(FunGrade, TArray<int>());
		}
		FunGradeToRuleCollectionIds[FunGrade].Add(RuleCollectionId);

		RuleCollectionId++;
	}
	
	TArray<int> FunGrades;
	FunGradeToRuleCollectionIds.GetKeys(FunGrades);
	//sort fun grades descending
	FunGrades.Sort([](const int A, const int B) { return A > B; });

	TArray<int> SortedRuleCollectionIds;
	for (const int FunGrade : FunGrades)
	{
		//shuffle rule collection ids if they have the same fun grade
		if (FunGradeToRuleCollectionIds[FunGrade].Num() > 1)
		{
			const int32 LastIndex = FunGradeToRuleCollectionIds[FunGrade].Num() - 1;
			for (int32 i = 0; i <= LastIndex; ++i)
			{
				const int32 Index = FMath::RandRange(i, LastIndex);
				if (i != Index)
				{
					FunGradeToRuleCollectionIds[FunGrade].Swap(i, Index);
				}
			}
		}
		
		for (const int RuleCollectionIdOfFunGrade : FunGradeToRuleCollectionIds[FunGrade])
		{
			SortedRuleCollectionIds.Add(RuleCollectionIdOfFunGrade);
		}
	}
	return SortedRuleCollectionIds;
}

bool ABuildingFloorGenerator::PlaceRoom(FRoom& Room, TArray<FRoom>& FloorLayout)
{
	FTransform StartRoomTransform = FTransform::Identity;
	const bool bHasSpace = GetRoomPlacement(StartRoomTransform, Room, FloorLayout);
	Room.RoomPosition = StartRoomTransform.GetLocation();

	if (Room.RoomData.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR - Generator/Level Data Asset: No Room Data found for Room of Type: %s!"), *UEnum::GetValueAsString(Room.RoomType));
		return EGenerationEndState::FAILURE;
	}
	if (!Room.RoomData.IsValid())
	{
		Room.RoomData = Room.RoomData.LoadSynchronous();
	}
	Room.RoomTiles = Room.RoomData->GetRoomTilesCopy();
		
	//fill up level occupation map
	if (!FillUpOccupationMap(Room))
	{
		UE_LOG(LogTemp, Error, TEXT("Couldn't fill up occupation map!!!"))
	}
	
	return bHasSpace;
}

bool ABuildingFloorGenerator::PlaceChildRooms(FRoom& Room, TArray<FRoom>& FloorLayout)
{
	UE_LOG(LogTemp, Display, TEXT("\t Placing child rooms for room %d"), Room.Id);
	
	if (Room.ChildrenIds.Num() == 0)
	{
		return true;
	}
	
	bool bSuccess = true;
	for (int ChildId = 0; ChildId < Room.ChildrenIds.Num(); ChildId++)
	{
		FRoom& ChildRoom = FloorLayout[Room.ChildrenIds[ChildId]];
		if (ChildRoom.bIsPlaced) continue;
		
		if (!PlaceRoom(ChildRoom, FloorLayout))
		{
			UE_LOG(LogTemp, Display, TEXT("\t Room Has no space :("));
			
			if (ChildRoom.ParentId == -1)
			{
				UE_LOG(LogTemp, Error, TEXT("ERROR! Start room has no place? How did this happen? I'm scared."));
				return false;
			}
			if (FloorLayout.Num() < ChildRoom.ParentId + 1)
			{
				UE_LOG(LogTemp, Error, TEXT("ERROR! %d parent room not found for %d room"), ChildRoom.ParentId, ChildRoom.Id);
				return false;
			}
			
			//TODO: add creation of dynamic corridor
			if (!ChildRoom.bIsDynamicCorridor && CreateDynamicCorridor(FloorLayout[ChildRoom.ParentId], ChildRoom, FloorLayout))
			{
				UE_LOG(LogTemp, Warning, TEXT("--- CREATING DYNAMIC CORRIDOR ---"))
				FRoom& DynamicCorridor = FloorLayout.Last();
				FillUpOccupationMap(DynamicCorridor);
				
				bSuccess = PlaceChildRooms(DynamicCorridor, FloorLayout);
				continue;
			}
			UE_LOG(LogTemp, Error, TEXT("CRITICAL!!! ROOM %i HAS NO SPACE!"), Room.Id);
			return false;
		}
		
		bSuccess = PlaceChildRooms(ChildRoom, FloorLayout);
	}
	
	return bSuccess;
}

bool ABuildingFloorGenerator::GetRoomPlacement(FTransform& RoomTransform, FRoom& Room, TArray<FRoom>& FloorLayout)
{
	RoomTransform = FTransform::Identity;
	UE_LOG(LogTemp, Display, TEXT("Room %d: %s"), Room.Id, *UEnum::GetValueAsString(Room.RoomType));
	UE_LOG(LogTemp, Display, TEXT("\t Has Parent: %d"), Room.ParentId);
	if (Room.ParentId != -1)
	{
		//Set Room Data
		TArray<FLevelRoomData> RoomDataAssetsOfRoomType;
		if (!Room.bIsDynamicCorridor)
		{
			RoomDataAssetsOfRoomType = LevelCollectionDataAsset->GetRoomDataArrayOfType(Room.RoomType);
		}
		else
		{
			RoomDataAssetsOfRoomType.Add(FLevelRoomData(ERoomType::CORRIDOR, Room.RoomData));
		}

		//Debug Print - Room Data Assets List
		UE_LOG(LogTemp, Display, TEXT("Room Data assets for %s: %d"), *UEnum::GetValueAsString(Room.RoomType), RoomDataAssetsOfRoomType.Num());
		if (RoomDataAssetsOfRoomType.Num() == 0)
		{
			UE_LOG(LogTemp, Error, TEXT("284 ERROR - Generator/Level Data Asset/GetRoomTransform: No Room Data assets found for Room of Type: %s!"), *UEnum::GetValueAsString(Room.RoomType));
			if (Room.bIsDynamicCorridor)
			{
				UE_LOG(LogTemp, Error, TEXT("\tCause it's dynamic corridor..."))
			}
			RoomTransform.SetLocation(FVector::OneVector * 21372137.0);
			return false;
		}

		//Loop until there is a valid Room Data Asset
		while (RoomDataAssetsOfRoomType.Num() > 0)
		{
			//Get random Room Data Asset
			int RoomDataAssetId = FMath::RandRange(0, RoomDataAssetsOfRoomType.Num() - 1);
			TSoftObjectPtr<UGridMapRoomDataAsset> RoomDataAsset = RoomDataAssetsOfRoomType[ RoomDataAssetId ].RoomData.LoadSynchronous();

			RoomDataAssetsOfRoomType.RemoveAt(RoomDataAssetId);
			
			UE_LOG(LogTemp, Display, TEXT("--- Selected RoomDataAsset: %s"), *RoomDataAsset->RoomName);
			
			const int TileSize = RoomDataAsset->BaseTileSize;
			
			FRoom& Parent_Room = FloorLayout[Room.ParentId];
			TArray<uint8> PossibleSocketDirections = TArray<uint8>();
			if (Parent_Room.BranchDirection == 0)
			{
				uint8 PossibleSocketDirection = 1;
				for (uint8 i = 0; i < 4; ++i)
				{
					PossibleSocketDirections.Add(PossibleSocketDirection);
					PossibleSocketDirection *= 2;
				}
			}
			else
			{
				PossibleSocketDirections.Add(Parent_Room.BranchDirection);
			}

			bool bBranchDirectionValid = PossibleSocketDirections.Num() == 1;
			bool bTryDynamicCorridor = false;
			while (PossibleSocketDirections.Num() > 0)
			{
				if (PossibleSocketDirections.Num() == 0) break;
				
				const int RandomPossibleSocketDirectionId = FMath::RandRange(0, PossibleSocketDirections.Num() - 1);
				uint8 SocketDirection = PossibleSocketDirections[RandomPossibleSocketDirectionId];
				PossibleSocketDirections.RemoveAt(RandomPossibleSocketDirectionId);

				//create spare directions if branch direction is not valid
				if (bBranchDirectionValid)
				{
					uint8 PossibleSocketDirection = 1;
					for (uint8 i = 0; i < 4; ++i)
					{
						if (PossibleSocketDirection != Parent_Room.BranchDirection &&
							PossibleSocketDirection != UGridMapRoomDataAsset::GetOppositeSocketDirection(Parent_Room.BranchDirection))
						{
							PossibleSocketDirections.Add(PossibleSocketDirection);
						}
						PossibleSocketDirection *= 2;
					}
					bBranchDirectionValid = false;
				}

				TArray<FTileData> Parent_DoorSockets;
				if (!Parent_Room.RoomData.IsNull() && !Parent_Room.RoomData.IsValid())
				{
					Parent_Room.RoomData = Parent_Room.RoomData.LoadSynchronous();
				}
				if (!Parent_Room.RoomData.IsNull() && Parent_Room.RoomData.IsValid())
				{
					Parent_DoorSockets = Parent_Room.RoomData->GetDoorSocketsOfDirection(SocketDirection);
				}

				if (Parent_Room.RoomData.IsNull())
				{
					UE_LOG(LogTemp, Error, TEXT("\t PARENT ROOM DATA ASSET IS NULL!"));
				}
				
				if (Parent_DoorSockets.Num() == 0)
				{
					UE_LOG(LogTemp, Error, TEXT("\t NO DOOR SOCKETS FOUND FOR PARENT ROOM!"));
					continue;
				}
				
				const uint8 OppositeSocketDirection = UGridMapRoomDataAsset::GetOppositeSocketDirection(SocketDirection);
				TArray<FTileData> Room_DoorSockets = RoomDataAsset->GetDoorSocketsOfDirection(OppositeSocketDirection);
				if (Room_DoorSockets.Num() == 0)
				{
					UE_LOG(LogTemp, Error, TEXT("\t NO DOOR SOCKETS FOUND FOR ROOM!"));
					continue;
				}
				
				bool bCanConnect = true;
				for (const FTileData &Parent_Socket : Parent_DoorSockets)
				{
					FVector Parent_TilePosition = Parent_Socket.Position;
					FVector Parent_SocketPosition = Parent_TilePosition + UGridMapRoomDataAsset::SocketDirectionToVector(SocketDirection);
					FVector Parent_GlobalTilePosition = Parent_SocketPosition * TileSize + Parent_Room.RoomPosition;

					//check if tile is occupied
					if (LevelOccupationMap.Contains(Parent_GlobalTilePosition)) //tile occupied
					{
						UE_LOG(LogTemp, Error, TEXT("\t Space occupied!!!!"));
						continue;
					}
					
					const FTileData& Room_Socket = Room_DoorSockets[FMath::RandRange(0, Room_DoorSockets.Num() - 1)];
					FVector Room_SocketPosition = Room_Socket.Position;
					FVector Room_PositionOffset = Parent_Room.RoomPosition + (Parent_SocketPosition - Room_SocketPosition) * TileSize;

					//NEW WAY (CHECK BORDER TILES)
					//TODO: check the inside of the room as well, but not all tiles
					TSet<int> Room_BorderTilesIndexes = RoomDataAsset->GetRoomBoundingTiles();
					for (int& Room_BorderTileIndex : Room_BorderTilesIndexes)
					{
						if (RoomDataAsset->RoomTiles.Num() <= Room_BorderTileIndex)
						{
							UE_LOG(LogTemp, Error, TEXT("ERROR - Generator/Level Data Asset/GetRoomTransform: Border tile of id %i does not exist!!!"), Room_BorderTileIndex);
							continue;
						}
						FTileData& Room_BorderTile = RoomDataAsset->RoomTiles[Room_BorderTileIndex];
						const FVector Room_TileGlobalPosition = GetGlobalTilePosition(Room_BorderTile.Position, TileSize, Room_PositionOffset);
						if (LevelOccupationMap.Contains(Room_TileGlobalPosition))
						{
							bCanConnect = false;
							break;
						}
					}
					
					if (bCanConnect)
					{
						UE_LOG(LogTemp, Display, TEXT("Room %i of type %s has been placed. And Data Asset is null ? %i"), Room.Id, *UEnum::GetValueAsString(Room.RoomType), RoomDataAsset.IsNull())
						Room.RoomData = RoomDataAsset;
						Room.bIsPlaced = true;

						FTileData* Parent_SocketPtr = Parent_Room.RoomData->GetTileDataAtPosition(Parent_TilePosition);
						FTileData* Room_SocketPtr = RoomDataAsset->GetTileDataAtPosition(Room_SocketPosition);
						
						if (!Parent_SocketPtr || !Room_SocketPtr)
						{
							UE_LOG(LogTemp, Error, TEXT("Parent Socket or Room Socket is null"));
							RoomTransform.SetLocation(FVector::OneVector * 21372137.0);
							return false;
						}
						
						FVector Parent_OpenSocketPosition = Parent_TilePosition;
						Parent_OpenSocketPosition.Z = SocketDirection;
						FVector Room_OpenSocketPosition = Room_SocketPosition;
						Room_OpenSocketPosition.Z = OppositeSocketDirection;

						FVector Map_ParentSocketPosition = Parent_OpenSocketPosition*TileSize;
						FVector Map_RoomSocketPosition = Room_OpenSocketPosition*TileSize;
						Map_ParentSocketPosition += UGridMapRoomDataAsset::SocketDirectionToVector(SocketDirection) * TileSize;
						Map_RoomSocketPosition += UGridMapRoomDataAsset::SocketDirectionToVector(OppositeSocketDirection) * TileSize;

						FOpenSocket Parent_OpenSocket = FOpenSocket(
								Parent_TilePosition,
							&Parent_Room,
							&Room,
								OppositeSocketDirection,
								UGridMapRoomDataAsset::SocketDirectionToVector(OppositeSocketDirection),
								Parent_SocketPtr->TileStyle
							);
			
						int DoorSocketId = DoorSocketList.Add(Parent_OpenSocket);
						DoorSocketIndexes.Add(Map_ParentSocketPosition, DoorSocketId);
						DoorSocketIndexes.Add(Map_RoomSocketPosition, DoorSocketId);
						
						Parent_Room.OpenSockets.Add(Parent_TilePosition, SocketDirection);
						Room.OpenSockets.Add(Room_SocketPosition, OppositeSocketDirection);

						//set branch direction or copy on child rooms
						Room.BranchDirection = SocketDirection;
						
						RoomTransform.SetLocation(Room_PositionOffset);
						return true;
					}
				}
			}
		}
	}

	//Set Room Data for first room
	if (Room.Id == 0)
	{
		TArray< FLevelRoomData > RoomDataAssetsOfRoomType = LevelCollectionDataAsset->GetRoomDataArrayOfType(Room.RoomType);
		if (RoomDataAssetsOfRoomType.Num() == 0)
		{
			UE_LOG(LogTemp, Error, TEXT("401 ERROR - Generator/Level Data Asset: No Room Data assets found for Room of Type: %s!"), *UEnum::GetValueAsString(Room.RoomType));
			RoomTransform.SetLocation(FVector::OneVector * 21372137.0);
			return false;
		}
		int RoomDataAssetId = FMath::RandRange(0, RoomDataAssetsOfRoomType.Num() - 1);
		TSoftObjectPtr<UGridMapRoomDataAsset> RoomDataAsset = RoomDataAssetsOfRoomType[ RoomDataAssetId ].RoomData;
		Room.RoomData = RoomDataAsset.LoadSynchronous();
		Room.bIsPlaced = true;
		
		RoomDataAssetsOfRoomType.RemoveAt(RoomDataAssetId);
		return true;
	}
	
	return false;
}

bool ABuildingFloorGenerator::CreateDynamicCorridor(FRoom& ParentRoom, FRoom& ChildRoom, TArray<FRoom>& FloorLayout)
{
	UE_LOG(LogTemp, Display, TEXT("\t TRYING DYNAMIC CORRIDOR"));
	UTileStyle* ParentTileStyle;
	if (ParentRoom.RoomData.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("\t\t ERROR! Dynamic Corridor Creation: Parent Room Data is null!"));
		return false;
	}
	if (ParentRoom.RoomData.IsValid())
	{
		ParentRoom.RoomData = ParentRoom.RoomData.LoadSynchronous();
		if (ParentRoom.RoomData->RoomTiles.Num() != 0)
		{
			ParentTileStyle = ParentRoom.RoomData->RoomTiles[0].TileStyle;
			if (!ParentTileStyle)
			{
				UE_LOG(LogTemp, Error, TEXT("\t\t ERROR! Dynamic Corridor Creation: Parent Tile Style is null! Continuing regardless..."));
			}
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("\t\t ERROR! Dynamic Corridor Creation: No Room Tiles in Parent Room Data! (%s)"), *ParentRoom.RoomData->RoomName);
			return false;
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("\t\t ERROR! Dynamic Corridor Creation: Couldn't load Parent Room Data!"));
		return false;
	}

	FRoom DynamicCorridor = FRoom();
	DynamicCorridor.ParentId = ParentRoom.Id;
	DynamicCorridor.ChildrenIds.Add(ChildRoom.Id);
	
	DynamicCorridor.bIsDynamicCorridor = true;
	DynamicCorridor.RoomType = ERoomType::CORRIDOR;

	DynamicCorridor.RoomData = NewObject<UGridMapRoomDataAsset>();
	
	//generate basic 2x2 room
	for (int X = -1; X <= 0; X++)
	{
		for (int Y = -1; Y <= 0; Y++)
		{
			FTileData TileData = FTileData();
			
			TileData.TileStyle = ParentTileStyle;
			TileData.Position = FVector(X, Y, 0);
			TileData.WallPlacement = 0;

			if (Y == -1) TileData.WallPlacement |= 1 << 0;
			if (X == 1) TileData.WallPlacement |= 1 << 1;
			if (Y == 1) TileData.WallPlacement |= 1 << 2;
			if (X == -1) TileData.WallPlacement |= 1 << 3;
			
			DynamicCorridor.RoomData->RoomTiles.Add(TileData);
		}
	}

	FTransform DynamicCorridorTransform = FTransform();
	if (GetRoomPlacement(DynamicCorridorTransform, DynamicCorridor, FloorLayout))
	{
		const int DynamicCorridorId = FloorLayout.Add(DynamicCorridor);
		DynamicCorridor.Id = DynamicCorridorId;
		ChildRoom.ParentId = DynamicCorridorId;
		
		const int ParentRoom_OldChildId = FloorLayout[ParentRoom.Id].ChildrenIds.Find(ChildRoom.Id);
		if (ParentRoom_OldChildId == INDEX_NONE)
		{
			UE_LOG(LogTemp, Error, TEXT("\t\t JO PIERDOLA! %d's room Children ids are: "));
			for (int &ChildId : FloorLayout[DynamicCorridor.ParentId].ChildrenIds)
			{
				UE_LOG(LogTemp, Error, TEXT("\t\t\t %d"), ChildId);
			}
			UE_LOG(LogTemp, Error, TEXT("\t\t JO PIERDOLA! Was looking for: %d"), ChildRoom.Id);
			return false;
		}
		ParentRoom.ChildrenIds[ParentRoom_OldChildId] = DynamicCorridorId;
		//print out successfully created dynamic corridor
		UE_LOG(LogTemp, Display, TEXT("\t\t Dynamic Corridor Created!"));
		return true;
	}
	UE_LOG(LogTemp, Error, TEXT("\t\t Dynamic Corridor Creation Failed!"));

	return false;
}

bool ABuildingFloorGenerator::FillUpOccupationMap(FRoom& Room)
{
	if (Room.bIsOnMap) return true;
	if (Room.RoomData.IsNull())
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR - Generator/Level Data Asset: No Room Data found for Room of Type: %s!"), *UEnum::GetValueAsString(Room.RoomType));
		return false;
	}
	if (!Room.RoomData.IsValid())
	{
		Room.RoomData = Room.RoomData.LoadSynchronous();
	}
	Room.RoomTiles = Room.RoomData->GetRoomTilesCopy();
	if (LevelTileSize == 0.f)
		LevelTileSize = Room.RoomData->BaseTileSize;
	
	//fill up level occupation map
	for (FTileData &Room_Tile : Room.RoomTiles)
	{
		LevelOccupationMap.Add(
			GetGlobalTilePosition(Room_Tile.Position, LevelTileSize, Room.RoomPosition)
		);
	}

	Room.bIsOnMap = true;
	return true;
}

void ABuildingFloorGenerator::FillVoid()
{
	VoidMeshComponent->SetStaticMesh(VoidMesh);
	const int VoidSize = 100;
	TArray<FTransform> VoidTransforms;
	for (int Y = -VoidSize; Y < VoidSize; Y++)
	{
		for (int X = -VoidSize; X < VoidSize; X++)
		{
			FVector TilePosition = FVector(X, Y, 0) * LevelTileSize;
			if (LevelOccupationMap.Contains(TilePosition)) continue;
			TilePosition.Z = 250;
			FTransform Transform = FTransform();
			Transform.SetLocation(TilePosition);
			VoidTransforms.Add(Transform);
		}
	}
	VoidMeshComponent->AddInstances(VoidTransforms, false, true);
}

FVector ABuildingFloorGenerator::GetGlobalTilePosition(const FVector& TilePosition, const int TileSize,
                                                       const FVector& RoomPosition)
{
	return TilePosition * TileSize + RoomPosition;
}

void ABuildingFloorGenerator::ChangeActiveRoom(ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom, APawn* Pawn)
{
	UE_LOG(LogTemp, Warning, TEXT("Changing Active Room!"));
	if (!CurrentRoom || !NextRoom)
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR! Current or Next Room is null!"));
		return;
	}
	if (CurrentRoom != ActiveRoom)
	{
		UE_LOG(LogTemp, Warning, TEXT("Current Room front walked through door is not the same as Active Room!"));
	}

	ActiveRoom->SetFogOfWarVisibility(true);
	NextRoom->SetFogOfWarVisibility(false);

	ActiveRoom = NextRoom;
	PreviewedRoom = nullptr;

	if (Door)
	{
		Door->CloseDoor(Pawn);
	}
}

void ABuildingFloorGenerator::ShowFogOfWarOnPreviewedRoom(ALevelDoor* Door, APawn* Pawn)
{
	if (!PreviewedRoom.IsValid()) return;

	PreviewedRoom->SetFogOfWarVisibility(true);
	PreviewedRoom = nullptr;
}

void ABuildingFloorGenerator::ChangePreviewedRoom(ALevelDoor* Door, AGridMapRoom* CurrentRoom, AGridMapRoom* NextRoom,
                                                  APawn* Pawn)
{
	if (!CurrentRoom || !NextRoom)
	{
		UE_LOG(LogTemp, Error, TEXT("ERROR! Current or Next Room is null!"));
		return;
	}
	if (CurrentRoom != ActiveRoom)
	{
		UE_LOG(LogTemp, Warning, TEXT("Opened door CurrentRoom is not the same as Generator's Active Room!"));
	}
	NextRoom->SetFogOfWarVisibility(false);
	PreviewedRoom = NextRoom;
}

void ABuildingFloorGenerator::ResetPreviewedRoom(ALevelDoor* Door, APawn* Pawn)
{
	if (!PreviewedRoom.IsValid()) return;
	PreviewedRoom->SetFogOfWarVisibility(true);
	PreviewedRoom = nullptr;
}
