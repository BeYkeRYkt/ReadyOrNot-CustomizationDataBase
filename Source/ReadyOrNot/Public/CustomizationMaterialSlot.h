#pragma once
#include "CoreMinimal.h"
#include "CustomizationMaterialSlot.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FCustomizationMaterialSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Slot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> Material;
    
    READYORNOT_API FCustomizationMaterialSlot();
};

