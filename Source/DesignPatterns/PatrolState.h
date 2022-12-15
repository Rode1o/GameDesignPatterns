// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "EnemyState.h"

#include "PatrolState.generated.h"

/**
 * 
 */
UCLASS()
class DESIGNPATTERNS_API UPatrolState : public UObject, public IEnemyState
{
	GENERATED_BODY()
	
public:
	void Handle(class AEnemyBehavior* EnemyBehavior);

};
