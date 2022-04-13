// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAbilityComponent.h"
#include "GrenadeComponent.generated.h"

/**
 * 
 */
UCLASS()
class GAME259_A_URE_API UGrenadeComponent : public UBaseAbilityComponent
{
	GENERATED_BODY()

public:
	UGrenadeComponent();
	
	UFUNCTION(BlueprintCallable)
		bool TriggerAbilityEffect() override;

	UFUNCTION(BlueprintCallable)
		bool SpawnGrenadeActor();
};