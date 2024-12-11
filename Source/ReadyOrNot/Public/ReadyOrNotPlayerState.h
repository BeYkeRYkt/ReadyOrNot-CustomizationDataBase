#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ReadyOrNotPlayerState.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API AReadyOrNotPlayerState : public APlayerState {
    GENERATED_BODY()
public:
    AReadyOrNotPlayerState(const FObjectInitializer& ObjectInitializer);

    // Keep empty fot nothing
};

