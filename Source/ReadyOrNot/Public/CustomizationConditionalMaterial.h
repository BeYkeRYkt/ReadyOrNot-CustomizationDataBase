#pragma once
#include "CoreMinimal.h"
#include "CustomizationConditionalMaterial.generated.h"

USTRUCT(BlueprintType)
struct FCustomizationConditionalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequiredTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertCondition;
    
    READYORNOT_API FCustomizationConditionalMaterial();
};

