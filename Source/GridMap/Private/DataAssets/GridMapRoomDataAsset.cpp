// Fill out your copyright notice in the Description page of Project Settings.


#include "DataAssets/GridMapRoomDataAsset.h"

int UGridMapRoomDataAsset::GetRandomSocketDirection()
{
	return FMath::RandRange(1, 4) * 2;
}

int UGridMapRoomDataAsset::GetOppositeSocketDirection(const uint8 SocketDirection)
{
	switch (SocketDirection)
	{
	default:
		return 0;
	case 1:
		return 4;
	case 2:
		return 8;
	case 4:
		return 1;
	case 8:
		return 2;
	}
}

FVector UGridMapRoomDataAsset::SocketDirectionToVector(const uint8 SocketDirection)
{
	switch (SocketDirection)
	{
	default:
		return FVector::ZeroVector;
	case 1:
		return FVector(0, -1, 0);
	case 2:
		return FVector(1, 0, 0);
	case 4:
		return FVector(0, 1, 0);
	case 8:
		return FVector(-1, 0, 0);
	}
}

TArray<FTileData>& UGridMapRoomDataAsset::GetRoomTiles()
{
	//backward compatibility with old assets
	if (RoomTilesIndexMap.Num() != RoomTiles.Num() || RoomTilesIndexMap.Num() == 0)
	{
		UpdateRoomTilesIndexMap();
	}
	
	return RoomTiles;
}

TArray<FTileData> UGridMapRoomDataAsset::GetRoomTilesCopy()
{
	//backward compatibility with old assets
	if (RoomTilesIndexMap.Num() != RoomTiles.Num() || RoomTilesIndexMap.Num() == 0)
	{
		UpdateRoomTilesIndexMap();
	}
	
	return RoomTiles;
}

TSet<int>& UGridMapRoomDataAsset::GetRoomBoundingTiles()
{
	if (RoomTilesIndexMap.Num() != RoomTiles.Num() || RoomTilesIndexMap.Num() == 0)
	{
		UpdateRoomTilesIndexMap();
	}
	return RoomBoundingTiles;
}

TArray<FTileData> UGridMapRoomDataAsset::GetDoorSocketsOfDirection(const uint8 SocketDirection)
{
	return RoomTiles.FilterByPredicate([&](const FTileData TileData)
	{
		return (SocketDirection & TileData.DoorPlacement) > 0;
	});
}

FTileData* UGridMapRoomDataAsset::GetTileDataAtPosition(const FVector& Position)
{
	if (RoomTilesIndexMap.Num() != RoomTiles.Num() || RoomTilesIndexMap.Num() == 0)
	{
		UpdateRoomTilesIndexMap();
	}
	
	if (RoomTilesIndexMap.Contains(Position))
	{
		return &RoomTiles[RoomTilesIndexMap[Position]];
	}
	return nullptr;
}

int& UGridMapRoomDataAsset::GetTileSize()
{
	return BaseTileSize;
}

void UGridMapRoomDataAsset::SetTileSize(int NewTileSize)
{
	BaseTileSize = NewTileSize;
}

void UGridMapRoomDataAsset::UpdateRoomTilesIndexMap()
{
	RoomTilesIndexMap.Empty();

	TileMapBounds = FVector4d(2137, 2137, -2137, -2137);
	
	int TileId = 0;
	for (FTileData& TileData : RoomTiles)
	{
		// Update TileMapBounds
		const FVector& TilePosition = TileData.Position;
		if (TilePosition.X < TileMapBounds.X) // min X
		{
			TileMapBounds.X = TilePosition.X;
		}
		if (TilePosition.Y < TileMapBounds.Y) // min Y
		{
			TileMapBounds.Y = TilePosition.Y;
		}
		if (TilePosition.X > TileMapBounds.Z) // max X
		{
			TileMapBounds.Z = TilePosition.X;
		}
		if (TilePosition.Y > TileMapBounds.W) // max Y
		{
			TileMapBounds.W = TilePosition.Y;
		}
		
		RoomTilesIndexMap.Add(TilePosition, TileId);
		TileId++;
	}

	RoomBoundingTiles.Empty();
	for (int Y = TileMapBounds.Y; Y <= TileMapBounds.W; Y++)
	{
		for (int X = TileMapBounds.X; X <= TileMapBounds.Z; X++)
		{
			const FVector TilePosition = FVector(X, Y, 0);
			if (!RoomTilesIndexMap.Contains(TilePosition)) continue;

			bool bIsOnBorder = false;
			for (int CheckY = -1; CheckY <= 1; CheckY++)
			{
				for (int CheckX = -1; CheckX <= 1; CheckX++)
				{
					if (CheckX == 0 && CheckY == 0) continue;

					const FVector CheckPosition = TilePosition + FVector(CheckX, CheckY, 0);
					if (!RoomTilesIndexMap.Contains(CheckPosition))
					{
						// tile is on border, add tile id to Room Bounding Tiles
						bIsOnBorder = true;
						RoomBoundingTiles.Add(RoomTilesIndexMap[TilePosition]);
						break;
					}
				}
				if (bIsOnBorder) break;
			}
		}
	}
}

bool UGridMapRoomDataAsset::TileExists(const FVector& TilePosition)
{
	if (RoomTilesIndexMap.Num() != RoomTiles.Num() || RoomTilesIndexMap.Num() == 0)
	{
		UpdateRoomTilesIndexMap();
	}

	return RoomTilesIndexMap.Contains(TilePosition);
}




