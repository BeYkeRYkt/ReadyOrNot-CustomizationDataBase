#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationMaterialSlot.h"
#include "CustomizationSkin.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationSkin : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CompatibleItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> MeshOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomizationMaterialSlot> MaterialSlots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocketOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketOverride;
    
    UCustomizationSkin();
};

