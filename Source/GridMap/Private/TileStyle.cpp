// Fill out your copyright notice in the Description page of Project Settings.


#include "../Public/TileStyle.h"

UStaticMesh* UTileStyle::GetThumbnailMesh()
{
	if (OneWallMesh != nullptr) return OneWallMesh;
	if (CornerWallMesh != nullptr) return CornerWallMesh;
	if (TunnelWallMesh != nullptr) return OneWallMesh;
	if (UWallMesh != nullptr) return CornerWallMesh;
	if (FloorMesh != nullptr) return FloorMesh;

	return nullptr;
}

EMeshType UTileStyle::GetMeshType(uint8& WallAndCornerVariant, uint8& DoorPlacement, double& Rotation, uint8& MirrorX)
{
	// UE_LOG(LogTemp, Display, TEXT("walls %i, doors %i"), WallVariant, DoorPlacement);
	const uint8 WallVariant = WallAndCornerVariant & 15; //cut out corner data 0000 1111
	switch((EWallType)WallVariant)
	{
	case EWallType::UP:
		Rotation = -90.f;
		if (DoorPlacement == 1) return EMeshType::ONEWALL_UP;
		return EMeshType::ONEWALL;
	case EWallType::DOWN:
		Rotation = 90.f;
		if (DoorPlacement == 4) return EMeshType::ONEWALL_UP;
		return EMeshType::ONEWALL;
	case EWallType::LEFT:
		Rotation = 180.f;
		if (DoorPlacement == 8) return EMeshType::ONEWALL_UP;
		return EMeshType::ONEWALL;
	case EWallType::RIGHT:
		Rotation = 0.f;
		if (DoorPlacement == 2) return EMeshType::ONEWALL_UP;
		return EMeshType::ONEWALL;
	case EWallType::UPRIGHT:
		Rotation = -90.f;
		if (DoorPlacement == 1) return EMeshType::CORNERWALL_UP;
		if (DoorPlacement == 2) return EMeshType::CORNERWALL_RIGHT;
		if (DoorPlacement == 3) return EMeshType::CORNERWALL_UPRIGHT;
		return EMeshType::CORNERWALL;
	case EWallType::RIGHTDOWN:
		Rotation = 0.f;
		if (DoorPlacement == 2) return EMeshType::CORNERWALL_UP;
		if (DoorPlacement == 4) return EMeshType::CORNERWALL_RIGHT;
		if (DoorPlacement == 6) return EMeshType::CORNERWALL_UPRIGHT;
		return EMeshType::CORNERWALL;
	case EWallType::LEFTDOWN:
		Rotation = 90.f;
		if (DoorPlacement == 4) return EMeshType::CORNERWALL_UP;
		if (DoorPlacement == 8) return EMeshType::CORNERWALL_RIGHT;
		if (DoorPlacement == 12) return EMeshType::CORNERWALL_UPRIGHT;
		return EMeshType::CORNERWALL;
	case EWallType::UPLEFT:
		Rotation = -180.f;
		if (DoorPlacement == 1) return EMeshType::CORNERWALL_RIGHT;
		if (DoorPlacement == 8) return EMeshType::CORNERWALL_UP;
		if (DoorPlacement == 9) return EMeshType::CORNERWALL_UPRIGHT;
		return EMeshType::CORNERWALL;
	case EWallType::UPDOWN:
		Rotation = 90.f;
		if (DoorPlacement == 1) return EMeshType::TUNNELWALL_UP;
		if (DoorPlacement == 4)
		{
			MirrorX = -1;
			return EMeshType::TUNNELWALL_UP;
		}
		if (DoorPlacement == 5) return EMeshType::TUNNELWALL_UPDOWN;
		return EMeshType::TUNNELWALL;
	case EWallType::LEFTRIGHT:
		Rotation = 0.f;
		if (DoorPlacement == 2)
		{
			MirrorX = -1;
			return EMeshType::TUNNELWALL_UP;
		}
		if (DoorPlacement == 8) return EMeshType::TUNNELWALL_UP;
		if (DoorPlacement == 10) return EMeshType::TUNNELWALL_UPDOWN;
		return EMeshType::TUNNELWALL;
	case EWallType::UPRIGHTDOWN:
		Rotation = -90.f;
		//Singular
		if (DoorPlacement == 1) return EMeshType::UWALL_UP;
		if (DoorPlacement == 2) return EMeshType::UWALL_RIGHT;
		if (DoorPlacement == 4)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UP;
		}

		//Two
		if (DoorPlacement == 3) return EMeshType::UWALL_UPRIGHT;
		if (DoorPlacement == 6)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UPRIGHT;
		}
		if (DoorPlacement == 5) return EMeshType::UWALL_UPDOWN;

		//Full
		if (DoorPlacement == 7) return EMeshType::UWALL_FULL;
		return EMeshType::UWALL;
	case EWallType::LEFTDOWNRIGHT:
		Rotation = 0.f;
		//Singular
		if (DoorPlacement == 2) return EMeshType::UWALL_UP;
		if (DoorPlacement == 4) return EMeshType::UWALL_RIGHT;
		if (DoorPlacement == 8)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UP;
		}

		//Two
		if (DoorPlacement == 6) return EMeshType::UWALL_UPRIGHT;
		if (DoorPlacement == 12)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UPRIGHT;
		}
		if (DoorPlacement == 10) return EMeshType::UWALL_UPDOWN;

		//Full
		if (DoorPlacement == 14) return EMeshType::UWALL_FULL;
		return EMeshType::UWALL;
	case EWallType::UPLEFTDOWN:
		Rotation = 90.f;
		//Singular
		if (DoorPlacement == 4) return EMeshType::UWALL_UP;
		if (DoorPlacement == 8) return EMeshType::UWALL_RIGHT;
		if (DoorPlacement == 1)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UP;
		}

		//Two
		if (DoorPlacement == 12) return EMeshType::UWALL_UPRIGHT;
		if (DoorPlacement == 9)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UPRIGHT;
		}
		if (DoorPlacement == 5) return EMeshType::UWALL_UPDOWN;

		//Full
		if (DoorPlacement == 13) return EMeshType::UWALL_FULL;
		return EMeshType::UWALL;
	case EWallType::LEFTUPRIGHT:
		Rotation = -180.f;
		//Singular
		if (DoorPlacement == 8) return EMeshType::UWALL_UP;
		if (DoorPlacement == 1) return EMeshType::UWALL_RIGHT;
		if (DoorPlacement == 2)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UP;
		}

		//Two
		if (DoorPlacement == 9) return EMeshType::UWALL_UPRIGHT;
		if (DoorPlacement == 3)
		{
			MirrorX = -1;
			return EMeshType::UWALL_UPRIGHT;
		}
		if (DoorPlacement == 10) return EMeshType::UWALL_UPDOWN;

		//Full
		if (DoorPlacement == 11) return EMeshType::UWALL_FULL;
		return EMeshType::UWALL;
	}
	return EMeshType::FLOOR;
}
