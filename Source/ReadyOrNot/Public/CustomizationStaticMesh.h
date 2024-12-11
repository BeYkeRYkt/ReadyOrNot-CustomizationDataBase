#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationStaticMesh.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationStaticMesh : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Socket;
    
    UCustomizationStaticMesh();

};

