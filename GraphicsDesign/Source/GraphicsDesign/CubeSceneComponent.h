// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CubeSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName="Material Swapper") )
class GRAPHICSDESIGN_API UCubeSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:	



	UCubeSceneComponent();
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	/** Index of material slot to change */
	UPROPERTY(EditAnywhere)
	int TargetMeshMaterialIndex = 0;
	
	/** Array of materials to cycle through */
	UPROPERTY(EditAnywhere)
	TArray<class UMaterial*> Materials;
	
	/** Time in seconds between each material change */
	UPROPERTY(EditAnywhere)
	float SwapInterval = 1.0f;

protected:
	// Called when the game starts

	virtual void BeginPlay() override;
	
private:
	UPROPERTY()
	TWeakObjectPtr<class UStaticMeshComponent> TargetMeshComponent;
	
	/** Time in seconds since the last material change */
	float SwapAccumulator = 0.0f;
	
	/** Index of current material applied to static mesh component */
	int CurrentMaterialIndex = 0;
	
};

