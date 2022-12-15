// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerObserver.h"

#include "EnemyObserver.h"
#include "Kismet/GameplayStatics.h"


// Called when the game starts or when spawned
void APlayerObserver::BeginPlay()
{
	Super::BeginPlay();
	
	/*AEnemyObserver* Enemy = Cast<AEnemyObserver>
		(UGameplayStatics::GetActorOfClass(GetWorld(),
			AEnemyObserver::StaticClass()));
	
	if (Enemy)
	{
		Enemy->EnemyDied.AddDynamic(this, &APlayerObserver::OnEnemyDied);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ENEMY DOESN'T EXIST"));
	}*/

	TArray<AActor*> AllEnemies;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnemyObserver::StaticClass(),
		AllEnemies);

	for (AActor* Enemy : AllEnemies)
	{
		Cast<AEnemyObserver>(Enemy)->
			EnemyDied.AddDynamic(this, &APlayerObserver::OnEnemyDied);
	}
}

// Sets default values
APlayerObserver::APlayerObserver()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called every frame
void APlayerObserver::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APlayerObserver::OnEnemyDied(FString message)
{
	//UE_LOG(LogTemp, Warning, TEXT("ENEMY DIED"));
	UE_LOG(LogTemp, Warning, TEXT("%s"), *message);
}

