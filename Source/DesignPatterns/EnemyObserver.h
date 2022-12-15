// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemyObserver.generated.h"

// https://stackoverflow.com/questions/62165120/c-equivalent-blueprint-event-dispatcher-vs-blueprint-events

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDied, FString, message);

UCLASS()
class DESIGNPATTERNS_API AEnemyObserver : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemyObserver();

	UPROPERTY(BlueprintAssignable)
	FEnemyDied EnemyDied;

	UPROPERTY(EditAnywhere)
		FString MessageForPrinting;

	UPROPERTY(EditAnywhere)
		float Timer = 2.0f;

	void CallEnemyDiedDispatcher();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
