// Fill out your copyright notice in the Description page of Project Settings.


#include "PencilAndEraserUniversalFuncLib.h"

void UPencilAndEraserUniversalFuncLib::DeprojectFromTransformRecord(const FVector2D& ScreenPos,
	const FTransform& Transform,
	const float& FOVinDegree,
	const float& surfaceWidth,
	const float& surfaceHeight,
	FVector& OutWorldOrigin,
	FVector& OutWorldDirection)
{
    FMatrix ViewMatrix = Transform.ToInverseMatrixWithScale();
    FVector ViewLocation = Transform.GetTranslation();

    // swap axis st. x=z,y=x,z=y (unreal coord space) so that z is up
    ViewMatrix = ViewMatrix * FMatrix(
        FPlane(0, 0, 1, 0),
        FPlane(1, 0, 0, 0),
        FPlane(0, 1, 0, 0),
        FPlane(0, 0, 0, 1));

    const float FOV = FOVinDegree * (float)PI / 360.0f;

    FIntPoint CaptureSize(surfaceWidth, surfaceHeight);

    float XAxisMultiplier;
    float YAxisMultiplier;

    if (CaptureSize.X > CaptureSize.Y)
    {
        // if the viewport is wider than it is tall
        XAxisMultiplier = 1.0f;
        YAxisMultiplier = CaptureSize.X / (float)CaptureSize.Y;
    }
    else
    {
        // if the viewport is taller than it is wide
        XAxisMultiplier = CaptureSize.Y / (float)CaptureSize.X;
        YAxisMultiplier = 1.0f;
    }

    FMatrix    ProjectionMatrix = FReversedZPerspectiveMatrix(
        FOV,
        FOV,
        XAxisMultiplier,
        YAxisMultiplier,
        GNearClippingPlane,
        GNearClippingPlane
    );

    const FMatrix InverseViewMatrix = ViewMatrix.InverseFast();
    const FMatrix InvProjectionMatrix = ProjectionMatrix.Inverse();

    const FIntRect ViewRect = FIntRect(0, 0, CaptureSize.X, CaptureSize.Y);

    FSceneView::DeprojectScreenToWorld(ScreenPos, ViewRect, InverseViewMatrix, InvProjectionMatrix, OutWorldOrigin, OutWorldDirection);
}

