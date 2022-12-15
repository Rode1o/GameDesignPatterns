// Fill out your copyright notice in the Description page of Project Settings.


#include "Spawner.h"

// Sets default values
ASpawner::ASpawner()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASpawner::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnLoc = GetActorLocation();
	SpawnLoc.Y += 300.0f;

}

// Called every frame
void ASpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASpawner::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ASpawner::ShootBullet);
}

void ASpawner::ShootBullet()
{
	BulletSpawned = false;

	for(ABullet* B : BulletPool)
	{
		// if the bullet is not active
		if (!B->IsActive)
		{
			BulletSpawned = true;
			
			B->SetActorLocation(SpawnLoc);
			B->ChangeBulletState(true);
			
			break;
		}
	}

	// if the bullet is not spawned from the loop
		// e.g bullet is not reused
	if (!BulletSpawned)
	{
		BulletSpawned = true;

		ABullet* NewBullet =
			GetWorld()->SpawnActor<ABullet>(Bullet, SpawnLoc, GetActorRotation());

		BulletPool.Add(NewBullet);
	}

}

