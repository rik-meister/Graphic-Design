// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "LightPulseComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class GRAPHICSDESIGN_API ULightPulseComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	ULightPulseComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	
	UPROPERTY()
	TObjectPtr<class ULightComponent> ParentLightComponent;
	
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UPROPERTY(EditAnywhere)
	float PulseLength = 1.0f;
	
	UPROPERTY(EditAnywhere)
	float MinIntensity = 0.0f;
	
	UPROPERTY(EditAnywhere)
	float MaxIntensity = 8.0f;
	
	UPROPERTY(EditAnywhere)
	FString FlickerPattern = FString(TEXT("a"));
};
