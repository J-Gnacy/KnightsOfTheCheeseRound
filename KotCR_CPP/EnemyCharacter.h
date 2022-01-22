// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "DamageableInterface.h"
#include "AttackInterface.h"
#include "EnemyCharacter.generated.h"

UCLASS()
class ADROIDGAME_API AEnemyCharacter : public ACharacter, public IDamageableInterface, public IAttackInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimSequenceBase* AttackAnimation;

	int HP;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "EnemyFunction")
		void GetDamaged();
		void GetDamaged_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "EnemyFunction")
		void Attack();
		void Attack_Implementation();

};
