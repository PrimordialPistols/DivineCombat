// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "AIStatHolder.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FAIStatHolder
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	float CurrentHealth;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Attack;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Defense;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Movement;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 AttackRange;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Hit;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Avoidance;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Cooldown;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 Damage;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 WeaponAdvantage;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AI Stats")
	int32 BaseNumber;
};
