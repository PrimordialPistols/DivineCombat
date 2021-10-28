// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseEnemy.generated.h"

UCLASS()
class DIVINECOMBAT_API ABaseEnemy : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseEnemy();

	/** This holds all the stats for the AI */
	struct FAIStatHolder* StatHolder;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Target Priority")
	bool bIsWeakAgainst;

	int32 ChanceToHit;

	/** Used for the Target Priority System Converts the string names into varibles */
	const FName AxeUnit = "AxeEnemy";
	const FName SpearUnit = "SpearEnemy";
	const FName SwordUnit = "SwordEnemy";


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	/** Methods to calcualte damage and chance to hit */
	int32 ToHit();
	int32 DamageDealt();

	/** Determines if opponent is weak */
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void WeaponTriangle();
	/**Checks if in prioroty before attacking  */ 
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void CheckTarget();
	/** One move to call to calaulate everything */
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void AttackMove();
	/** Will handle movement */
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void Move();

	UFUNCTION(BlueprintCallable, Category = "Base Enemy")
	bool TakeDamage(int DamageAmount);


};
