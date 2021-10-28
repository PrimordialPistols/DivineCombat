// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEnemy.h"
#include "GameplayTagContainer.h"
#include "Containers/UnrealString.h"
#include "AIStatHolder.h"

// Sets default values
ABaseEnemy::ABaseEnemy()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABaseEnemy::BeginPlay()
{
	Super::BeginPlay();
	
}
// Called every frame
void ABaseEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}


void ABaseEnemy::CheckTarget()
{
	if (!bIsWeakAgainst)
	{
		AttackMove();
	}
	else
		return;
	//if weak = false attack
	//if health = low attack
	//if close attack
	//restor health
}

int32 ABaseEnemy::ToHit()
{
	StatHolder->BaseNumber = 75;
	ChanceToHit = StatHolder->BaseNumber + StatHolder->Hit - StatHolder->Avoidance + StatHolder->WeaponAdvantage;
	UE_LOG(LogTemp, Warning, TEXT("Chance to hit = %d"), ChanceToHit);

	return ChanceToHit;
}

int32 ABaseEnemy::DamageDealt()
{
	//Damage = Attack - OPPONENTDEFENSE;
	return StatHolder->Damage;
}

void ABaseEnemy::AttackMove()
{
	WeaponTriangle();
	ToHit();
	DamageDealt();
	//PlayerTakeDamage(Damage);
}


bool ABaseEnemy::TakeDamage(int DamageAmount)
{
	StatHolder->CurrentHealth -= DamageAmount;

	if (StatHolder->CurrentHealth <= 0)
	{
		return true;
		UE_LOG(LogTemp, Warning, TEXT("Enemy Dead"));
	}
	else
		return false;
}

void ABaseEnemy::WeaponTriangle()
{
	//REFACTOR LATER
	if (ActorHasTag(AxeUnit))
	{
		if (ActorHasTag(SpearUnit))
		{
			bIsWeakAgainst = true;
			StatHolder->WeaponAdvantage = -15;
		}
	}

	else if (ActorHasTag(SpearUnit))
	{
		if (ActorHasTag(SwordUnit))
		{
			bIsWeakAgainst = true;
			StatHolder->WeaponAdvantage = -15;
		}
	}

	else if (ActorHasTag(SwordUnit))
	{
		if (ActorHasTag(AxeUnit))
		{
			bIsWeakAgainst = true;
			StatHolder->WeaponAdvantage = -15;
		}
	}
	else
		bIsWeakAgainst = false;
}

void ABaseEnemy::Move()
{

}





