#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationMaterialSlot.h"
#include "CustomizationTattoo.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationTattoo : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TattooTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCustomizationMaterialSlot ArmSlotOverride;
    
    UCustomizationTattoo();
};

