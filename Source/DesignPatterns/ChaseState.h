// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "EnemyState.h"

#include "ChaseState.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UChaseState : public UObject, public IEnemyState
{
	GENERATED_BODY()

public:
	void Handle(class AEnemyBehavior* EnemyBehavior);

};
