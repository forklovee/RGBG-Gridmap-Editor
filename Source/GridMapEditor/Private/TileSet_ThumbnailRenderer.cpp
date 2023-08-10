#include "TileSet_ThumbnailRenderer.h"
#include "Engine/StaticMesh.h"
// #include "TileSet.h"
#include "ShowFlags.h"
#include "SceneView.h"
#include "TileStyle.h"
#include "Misc/App.h"

void UTileSet_ThumbnailRenderer::Draw(UObject* Object, int32 X, int32 Y, uint32 Width, uint32 Height, FRenderTarget* RenderTarget, FCanvas* Canvas, bool bAdditionalViewFamily)
{
	UTileStyle* TileStyle = Cast<UTileStyle>(Object);

	// invalid or empty
	if (TileStyle == nullptr)
		return;

	const UStaticMesh* ThumbnailMesh = TileStyle->GetThumbnailMesh();
	if (ThumbnailMesh == nullptr)
		return;
	const TSoftObjectPtr<class UStaticMesh> ThumbnailMeshPtr = ThumbnailMesh;
	TileStyle->ThumbnailMesh = ThumbnailMeshPtr.LoadSynchronous();
	Super::Draw(TileStyle->ThumbnailMesh, X, Y, Width, Height, RenderTarget, Canvas, bAdditionalViewFamily);
}
