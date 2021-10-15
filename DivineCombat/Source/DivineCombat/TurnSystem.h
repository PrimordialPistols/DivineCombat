// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TurnSystem.generated.h"

UENUM(BlueprintType)
enum class ETurnOrder : uint8
{
	ETO_PLAYERTURN	UMETA(DisplayName = "Plsyer Turn"),
	ETO_ENEMYTURN	UMETA(DisplayName = "Enemy Turn"),
	ETO_WON			UMETA(DisplayName = "Won"),
	ETO_LOST		UMETA(DisplayName = "Lost")
};

UCLASS(BlueprintType)
class RPGPRACTICEGAME_API ATurnSystem : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ATurnSystem();

	UPROPERTY(VisibleAnywhere)
		ETurnOrder TurnOrder;

	UPROPERTY(VisibleAnywhere)
		bool bIsDead;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void BattleStart();
	void PlayerTurn();
	void enemyTurn();
	void EndBattle();

};

