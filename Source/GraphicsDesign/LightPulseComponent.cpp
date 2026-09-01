// Fill out your copyright notice in the Description page of Project Settings.


#include "LightPulseComponent.h"
#include "Components/LightComponent.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
ULightPulseComponent::ULightPulseComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void ULightPulseComponent::BeginPlay()
{
	Super::BeginPlay();
	
	if (ULightComponent* Light = Cast<ULightComponent>(GetAttachParent()))
	{
		ParentLightComponent = Light;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("CGLightPulseComponent must be attached to a ULightComponent"));
	}
	// ...
	
}


// Called every frame
void ULightPulseComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	if (ParentLightComponent)
	{
		float GameTimeSeconds = GetWorld()->GetTimeSeconds();
		
		int32 Index = FMath::FloorToInt(GetWorld()->GetTimeSeconds() * 10.0f) % FlickerPattern.Len();
		
		TCHAR Character = FlickerPattern[Index];
		
		float Brightness = (Character - 'a') / 25.0f;
		
		
		// calculate 0.0 to 1.0 value (alpha)
		//float CurrentAlpha = 0.5 * FMath::Sin(1 / PulseLength * GameTimeSeconds) + 0.5;
		
		// lerp between min and max intensity based on current alpha
		//float CurrentIntensity = FMath::Lerp(MinIntensity, MaxIntensity, CurrentAlpha);
		
		// assign to intensity
		//ParentLightComponent->SetIntensity(CurrentIntensity);
		
		// string for light pulsing
		
		// calculate 0.0 to 1.0 value (alpha)
		float CurrentAlpha = 0.5 * FMath::Sin(1 / PulseLength * Index) + 20;
		
		// current intensity
		//float BaseIntensity = 1000;
		
		float BaseIntensity = CurrentAlpha;
		
		// assign to intensity
		ParentLightComponent-> SetIntensity(BaseIntensity * Brightness);
	}
	
	// ...
}

