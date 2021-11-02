// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameModeTurnSystem.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class ETurnOrder : uint8
{
	ETO_PLAYERTURN	UMETA(DisplayName = "Player Turn"),
	ETO_ENEMYTURN	UMETA(DisplayName = "Enemy Turn"),
	ETO_WON			UMETA(DisplayName = "Won"),
	ETO_LOST		UMETA(DisplayName = "Lost")
};


UCLASS(BlueprintType)
class DIVINECOMBAT_API AGameModeTurnSystem : public AGameModeBase
{
	GENERATED_BODY()

public:
	ETurnOrder EnumTurnOrder;

	class ABaseEnemy* BaseEnemy;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Turn System")
	bool bPlayerIsDead;

	bool bWon;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	/** Sets up the system */
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void BattleStart();
	/** Checks if player is dead if not cycles back */
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void PlayerTurn();
	/** Checks if enemy is dead if not cycles back */
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void EnemyTurn();
	/** Ends the battle sequence*/
	UFUNCTION(BlueprintCallable, Category = "Turn System")
	void EndBattle();

};