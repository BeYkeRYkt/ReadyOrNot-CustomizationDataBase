#pragma once
#include "CoreMinimal.h"
#include "CustomizationSkeletalMesh.h"
#include "CustomizationGloves.generated.h"

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationGloves : public UCustomizationSkeletalMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SkinMaterialIndex;
    
    UCustomizationGloves();

};

