// Fill out your copyright notice in the Description page of Project Settings.


#include "GameModeTurnSystem.h"
#include "BaseEnemy.h"

void AGameModeTurnSystem::BeginPlay()
{
	Super::BeginPlay();
	ETurnOrder::ETO_PLAYERTURN;
}

void AGameModeTurnSystem::BattleStart()
{
	UE_LOG(LogTemp, Warning, TEXT("Battle Start"));

}


void AGameModeTurnSystem::PlayerTurn()
{

	UE_LOG(LogTemp, Warning, TEXT("Player turn"));
	if (bPlayerIsDead)
	{
		bWon = false;
		ETurnOrder::ETO_LOST;
		EndBattle();
	}
	else
	{
		ETurnOrder::ETO_ENEMYTURN;
		EnemyTurn();
	}
}

void AGameModeTurnSystem::EnemyTurn()
{
	bool bEnemyIsDead = BaseEnemy->TakeDamage(25); // CHANGE VALUE TO PLAYER DAMAGE
	UE_LOG(LogTemp, Warning, TEXT("Enemy Turn"));
	if (bEnemyIsDead)
	{
		bWon = true;
		ETurnOrder::ETO_WON;
		EndBattle();
	}
	else
	{
		ETurnOrder::ETO_PLAYERTURN;
		PlayerTurn();
	}
	
}

void AGameModeTurnSystem::EndBattle()
{

	UE_LOG(LogTemp, Warning, TEXT("End Battle"));
	if (bWon)
	{
		UE_LOG(LogTemp, Warning, TEXT("WON"))
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("LOST"))
	}
}