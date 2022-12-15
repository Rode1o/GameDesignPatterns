// Fill out your copyright notice in the Description page of Project Settings.


#include "Bullet.h"
#include "Components/StaticMeshComponent.h"
#include "DestroyBullet.h"

// Sets default values
ABullet::ABullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BulletMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Bullet Mesh"));
	
	IsActive = true;
}

// Called when the game starts or when spawned
void ABullet::BeginPlay()
{
	Super::BeginPlay();
	
	BulletMesh->OnComponentBeginOverlap.AddDynamic(this, &ABullet::OnOverlapBegin);

}

// Called every frame
void ABullet::Tick(float DeltaTime)
{
	if (!IsActive)
		return;

	Super::Tick(DeltaTime);

	MoveBullet(DeltaTime);
}

void ABullet::MoveBullet(float Delta)
{
	CurrentLocation = GetActorLocation();
	CurrentLocation.Y += MoveSpeed * Delta;
	SetActorLocation(CurrentLocation);
}

void ABullet::ChangeBulletState(bool Active)
{
	IsActive = Active;
	BulletMesh->SetHiddenInGame(!IsActive);
}

void ABullet::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, 
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, 
	bool bFromSweep, const FHitResult& SweepResult)
{

	if (!IsActive)
		return;

	// collided with bullet destroy actor
	if (Cast<ADestroyBullet>(OtherActor))
	{
		ChangeBulletState(false);
	}
}

