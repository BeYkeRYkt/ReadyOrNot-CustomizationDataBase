#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationVoice.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationVoice : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VoiceHandle;
    
    UCustomizationVoice();

};

