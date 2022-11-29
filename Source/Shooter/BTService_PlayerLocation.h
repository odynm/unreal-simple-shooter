#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLocation.generated.h"

UCLASS()
class SHOOTER_API UBTService_PlayerLocation : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_PlayerLocation();

protected:
	void TickNode(UBehaviorTreeComponent &OnwerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
