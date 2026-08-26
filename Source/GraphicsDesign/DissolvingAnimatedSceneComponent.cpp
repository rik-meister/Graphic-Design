// Fill out your copyright notice in the Description page of Project Settings.


#include "DissolvingAnimatedSceneComponent.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Logging/StructuredLog.h"

// Sets default values for this component's properties
UDissolvingAnimatedSceneComponent::UDissolvingAnimatedSceneComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDissolvingAnimatedSceneComponent::BeginPlay()
{
	Super::BeginPlay();

	if (UMeshComponent* ParentMeshComp = Cast<UMeshComponent>(GetAttachParent()))
	{
		TargetMeshComponent = ParentMeshComp;
		if (UMaterialInterface* TargetMaterial = TargetMeshComponent->GetMaterial(TargetMaterialIndex))
		{
			if (!DynamicDissolveMaterial)
			{
				UMaterialInstanceDynamic* NewMID = UMaterialInstanceDynamic::Create(TargetMaterial, this);
				TargetMeshComponent->SetMaterial(TargetMaterialIndex, NewMID);
				DynamicDissolveMaterial = NewMID;
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CGDissolveAnimatorComponent: Parent component is not a static mesh component!"));
	}
	// ...
	
}


// Called every frame
void UDissolvingAnimatedSceneComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UDissolvingAnimatedSceneComponent::Dissolve()
{
	if (!DynamicDissolveMaterial || !TargetMeshComponent.IsValid()) {return;}
	
	float CurrentTime = GetWorld()->GetTimeSeconds();
	DynamicDissolveMaterial->SetScalarParameterValue(EffectStartTime, CurrentTime);
	DynamicDissolveMaterial->SetScalarParameterValue(EffectStrengthParameterName, 1.0);
}