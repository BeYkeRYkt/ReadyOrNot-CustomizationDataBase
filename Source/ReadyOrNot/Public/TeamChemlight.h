#pragma once
#include "CoreMinimal.h"
#include "CustomizationExtra.h"
#include "ETeamType.h"
#include "TeamChemlight.generated.h"

class UMaterialInterface;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class READYORNOT_API ATeamChemlight : public ACustomizationExtra {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETeamType, TSoftObjectPtr<UMaterialInterface>> TeamMaterialMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TeamMaterialIndex;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETeamType CurrentTeam;
    
public:
    ATeamChemlight(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void HandleTeamChanged(ETeamType Team);
    
};

