// Fill out your copyright notice in the Description page of Project Settings.


#include "Drats.h"

// Sets default values
ADrats::ADrats()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
	RootComponent = DefaultSceneRoot;

	Darts = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Darts"));
	UStaticMesh* Mesh = LoadObject<UStaticMesh>(NULL, TEXT("/Game/Darts/Darts02.Darts02"), NULL, LOAD_None, NULL);
	Darts->SetStaticMesh(Mesh);
	Darts->SetupAttachment(RootComponent);
	Darts->SetRelativeLocation(FVector(-321.7f,-3.0f,0.0f));


	// Use a ProjectileMovementComponent to govern this projectile's movement
	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileComp"));
	ProjectileMovement->InitialSpeed = 3000.f;
	ProjectileMovement->MaxSpeed = 3000.f;
	ProjectileMovement->bRotationFollowsVelocity = true;
	ProjectileMovement->bShouldBounce = true;

	// Die after 3 seconds by default
	InitialLifeSpan = 3.0f;

}

// Called when the game starts or when spawned
void ADrats::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADrats::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

