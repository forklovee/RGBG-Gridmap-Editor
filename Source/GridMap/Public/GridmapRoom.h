#pragma once


#include "CoreMinimal.h"

#include "DataAssets/GridMapRoomDataAsset.h"
#include "TileStyle.h"

#include "GameFramework/Actor.h"

#include "GridmapRoom.generated.h"

class UInstancedStaticMeshComponent;
class UTileStyle;
struct FTileData;
enum class EMeshType : uint8;

UCLASS()
class GRIDMAP_API AGridMapRoom : public AActor
{
	GENERATED_BODY()

public:
	AGridMapRoom();

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

#if WITH_EDITOR
	void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif WITH_EDITOR
	
	const UGridMapRoomDataAsset* GetRoomData() const { return RoomData.LoadSynchronous(); };
	void SetRoomData(const UGridMapRoomDataAsset* _RoomDataAsset) { RoomData = _RoomDataAsset; };

	UFUNCTION(BlueprintCallable)
	void BuildRoom();
	void BuildRoom(const TSoftObjectPtr<UGridMapRoomDataAsset> _RoomDataAsset);
	
	void SetFogOfWarVisibility(bool bIsVisible);
	
	void CreateMeshInstance(FTileData &TileData, TTuple<UTileStyle*, EMeshType> &Key, const FTransform &Transform);
	
	void Clear();

	UTileStyle* GetTileStyle(const FVector &TileLocation)
	{
		if (!RoomTiles.Contains(TileLocation))
		{
			return nullptr;
		}
		return RoomTiles[TileLocation].TileStyle;
	};
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data", meta = (DisplayName = "Room Data Asset", AllowPrivateAccess = "true", ExposeOnSpawn = "true", ConstructorParam = "RoomDataAsset"))
	TSoftObjectPtr<UGridMapRoomDataAsset> RoomData;
	TMap<FVector, uint8> InGame_OpenSockets;
	
protected:
	void RegisterInstancedStaticMeshComponent(UTileStyle* _TileStyle);
	UInstancedStaticMeshComponent* CreateIsmComponent(UStaticMesh* StaticMesh, UTileStyle* TileStyle, EMeshType MeshType);
	void SetOverlapVolumeExtends();
	
	//basics
	TMap<FVector, FTileData> RoomTiles;
	TArray<FVector> DoorSocketTileKeys;
	float TileSize = 100.f;

	//instanced meshes and tile styles
	TArray<UTileStyle*> TileStyles;
	TMap<TTuple<UTileStyle*, EMeshType>, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents;
	TMap<UInstancedStaticMeshComponent*, TArray<FVector>> InstancedStaticMeshIndexes;

	//room dimensions
	class UBoxComponent* OverlapVolume;
	FVector4d RoomExtends = FVector4d::Zero();
	
	bool bIsPreviewRoom = false;

private:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Room Data", meta = (DisplayName = "Show Fog Of War in Editor", AllowPrivateAccess = "true"))
	bool bEditorShowFogOfWar = false;
	
	UMaterialInstanceDynamic* FogOfWarMaterialInstance;
	float TargetFogOfWarOpacity = 1.0f;
	float CurrentFogOfWarOpacity = 1.0f;

	TArray<ALevelDoor*> LevelDoors;
};
