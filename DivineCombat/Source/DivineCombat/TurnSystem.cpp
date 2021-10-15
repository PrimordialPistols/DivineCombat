// Fill out your copyright notice in the Description page of Project Settings.


#include "TurnSystem.h"

// Sets default values
ATurnSystem::ATurnSystem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurnSystem::BeginPlay()
{
	Super::BeginPlay();
	BattleStart();

}

// Called every frame
void ATurnSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ATurnSystem::BattleStart()
{

	UE_LOG(LogTemp, Warning, TEXT("Bettle Start"));
	TurnOrder = ETurnOrder::ETO_PLAYERTURN;
	PlayerTurn();

}

void ATurnSystem::PlayerTurn()
{
	//PlayerAttack();
	//PlayerActions();
	UE_LOG(LogTemp, Warning, TEXT("Player turn"));
	if (bIsDead)
	{
		TurnOrder = ETurnOrder::ETO_LOST;
		EndBattle();
	}
	else
	{
		TurnOrder = ETurnOrder::ETO_ENEMYTURN;
		enemyTurn();
	}
}

void ATurnSystem::enemyTurn()
{
	//EnemyAttack();
	//EnemyActions();
	UE_LOG(LogTemp, Warning, TEXT("Enemy Turn"));
	if (bIsDead)
	{
		TurnOrder = ETurnOrder::ETO_WON;
		EndBattle();
	}
	else
	{
		TurnOrder = ETurnOrder::ETO_PLAYERTURN;
		enemyTurn();
	}
}

void ATurnSystem::EndBattle()
{
	UE_LOG(LogTemp, Warning, TEXT("End Battle"));
}
