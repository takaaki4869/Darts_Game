// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Drats.generated.h"


class UProjectileMovementComponent;

UCLASS()
class DARTS_GAME_API ADrats : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADrats();

	// Scene Component
	UPROPERTY(EditAnywhere)
		TObjectPtr<USceneComponent> DefaultSceneRoot;
	//Character—p‚ÌStaticmesh : sphere
	UPROPERTY(Category = Actor, VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		TObjectPtr<UStaticMeshComponent> Darts;


	/** Projectile movement component */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
		UProjectileMovementComponent* ProjectileMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
