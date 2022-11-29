#pragma once

#include "CoreMinimal.h"
#include "ShooterGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

UCLASS()
class SHOOTER_API AKillEmAllGameMode : public AShooterGameModeBase
{
	GENERATED_BODY()
	
public:
	void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
};
