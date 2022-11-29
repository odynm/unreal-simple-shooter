#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlackboardBase.h"
#include "BTService_PlayerLocationIfSeen.generated.h"

UCLASS()
class SHOOTER_API UBTService_PlayerLocationIfSeen : public UBTService_BlackboardBase
{
	GENERATED_BODY()

public:
	UBTService_PlayerLocationIfSeen();

protected:
	void TickNode(UBehaviorTreeComponent &OnwerComp, uint8* NodeMemory, float DeltaSeconds) override;
};
