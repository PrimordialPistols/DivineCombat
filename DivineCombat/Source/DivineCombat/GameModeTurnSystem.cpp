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

	
}

void AGameModeTurnSystem::EnemyTurn()
{
	
	
}

void AGameModeTurnSystem::EndBattle()
{

	
}