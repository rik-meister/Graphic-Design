// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "DissolvingAnimatedSceneComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent), DisplayName= "Dissolve Animator")
class GRAPHICSDESIGN_API UDissolvingAnimatedSceneComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	virtual void BeginPlay() override;
	// Sets default values for this component's properties
	UDissolvingAnimatedSceneComponent();
	
	UPROPERTY(BlueprintReadWrite)
	int TargetMaterialIndex = 0;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EffectStrengthParameterName;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName EffectStartTime;
	
	UFUNCTION(BlueprintCallable)
	void Dissolve();

	
	
	

protected:
	// Called when the game starts
	

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
private:
	UPROPERTY()
	TWeakObjectPtr<class UMeshComponent> TargetMeshComponent;
	
	UPROPERTY()
	TObjectPtr<class UMaterialInstanceDynamic> DynamicDissolveMaterial;
	
	bool bIsDissolving = false;
		
};
