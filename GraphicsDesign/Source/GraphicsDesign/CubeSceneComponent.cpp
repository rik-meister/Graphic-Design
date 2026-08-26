// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CubeSceneComponent.h"
#include "Components/SceneComponent.h"

#include "NaniteSceneProxy.h"
#include "DataWrappers/ChaosVDParticleDataWrapper.h"


// Sets default values for this component's properties
UCubeSceneComponent::UCubeSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCubeSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	if (UStaticMeshComponent * ParentMeshComp = Cast<UStaticMeshComponent>(GetAttachParent()))
	{
		TargetMeshComponent = ParentMeshComp;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CGMaterialSwapperComponent: Parent component is not a static mesh component!"));
	}
	// ...
	
}


// Called every frame
void UCubeSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	// Accumulate time
	SwapAccumulator += DeltaTime;
	
	// Check if it's time to swap materials
	if (SwapAccumulator >= SwapInterval)
	{
		// Subtract interval from accumulator
		SwapAccumulator -= SwapInterval;
		
		// Ensure we can perform the swap before attempting
		if (Materials.Num() > 0 && TargetMeshComponent.IsValid())
		{
			++CurrentMaterialIndex;
			if (CurrentMaterialIndex >= Materials.Num())
			{
				CurrentMaterialIndex = 0;
			}
			
			TargetMeshComponent.Get()->SetMaterial(TargetMeshMaterialIndex, Materials[CurrentMaterialIndex]);
		}
	}
	// ...
}

