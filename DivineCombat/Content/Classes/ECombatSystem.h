// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * Enum to determine what the current state of combat is
 */
UENUM(BlueprintType)
enum class ECombat : uint8
{
	CE_PLAYERTURN	UMETA(DisplayName = "Player turn"),
	CE_ENEMYTURN	UMETA(DisplayName = "Enemy turn"),
	CE_WON			UMETA(DisplayName = "Won"),
	CE_LOST			UMETA(DisplayName = "Lost")
};

class DIVINECOMBAT_API ECombatSystem
{
public:
	ECombatSystem();
	~ECombatSystem();
};
