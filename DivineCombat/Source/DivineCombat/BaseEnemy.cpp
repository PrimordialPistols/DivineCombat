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

	//if weak = false attack
	//if health = low attack
	//if close attack
	//restor health
}


int32 ABaseEnemy::ToHit(int BaseNumber, int Hit, int Avoidance, int WeaponAdvantage)
{
	ChanceToHit = BaseNumber + Hit - Avoidance + WeaponAdvantage;
	UE_LOG(LogTemp, Warning, TEXT("Chance to hit = %d"), ChanceToHit);

	return ChanceToHit;
}

int32 ABaseEnemy::DamageDealt(int Damage, int PlayerDefense)
{
	int AdjustedDamage = Damage - PlayerDefense;
	return AdjustedDamage;
}

void ABaseEnemy::AttackMove(int BaseNumber, int Hit, int Avoidance, int WeaponAdvantage, int Damage)
{

}

void ABaseEnemy::WeaponTriangle(int WeaponAdvantage)
{
	//REFACTOR LATER
	if (ActorHasTag(AxeUnit))
	{
		if (ActorHasTag(SpearUnit))
		{
			bIsWeakAgainst = true;
			WeaponAdvantage = -15;
		}
	}

	else if (ActorHasTag(SpearUnit))
	{
		if (ActorHasTag(SwordUnit))
		{
			bIsWeakAgainst = true;
			WeaponAdvantage = -15;
		}
	}

	else if (ActorHasTag(SwordUnit))
	{
		if (ActorHasTag(AxeUnit))
		{
			bIsWeakAgainst = true;
			WeaponAdvantage = -15;
		}
	}
	else
		bIsWeakAgainst = false;
}





