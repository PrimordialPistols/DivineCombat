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
	UFUNCTION(BlueprintPure, Category = "Target Priority")
	int32 ToHit(int BaseNumber, int Hit, int Avoidance, int WeaponAdvantage);
	UFUNCTION(BlueprintPure, Category = "Target Priority")
	int32 DamageDealt(int Damage);

	/**Checks if in prioroty before attacking  */
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void CheckTarget();
	/** One move to call to calaulate everything */
	UFUNCTION(BlueprintCallable, Category = "Target Priority")
	void AttackMove(int BaseNumber, int Hit, int Avoidance, int WeaponAdvantage, int Damage);

	/** Determines if opponent is weak */
	//UFUNCTION(BlueprintCallable, Category = "Target Priority")
	//void WeaponTriangle();



};
