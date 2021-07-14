// Osvaldo Salomon 2021

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SProjectileWeapon.generated.h"


UCLASS()
class COOPGAME_API ASProjectileWeapon : public ASWeapon
{
	GENERATED_BODY()

protected:
	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, Category="ProjectileWeapon")
	TSubclassOf<AActor> ProjectileClass;
	
};
