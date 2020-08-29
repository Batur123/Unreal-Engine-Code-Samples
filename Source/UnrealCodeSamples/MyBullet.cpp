// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBullet.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AMyBullet::AMyBullet()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>("BulletMesh");
	SetRootComponent(BallMesh);

	BulletMovement = CreateDefaultSubobject<UProjectileMovementComponent>("BulletMovement");
	BulletMovement->InitialSpeed = 5000.0f;
	BulletMovement->MaxSpeed = 5000.0f;
}

// Called when the game starts or when spawned
void AMyBullet::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Test"));
	
}

// Called every frame
void AMyBullet::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

