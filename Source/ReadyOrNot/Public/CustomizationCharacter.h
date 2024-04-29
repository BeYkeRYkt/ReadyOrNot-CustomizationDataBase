#pragma once
#include "CoreMinimal.h"
#include "CustomizationDataBase.h"
#include "CustomizationCharacter.generated.h"

class UMaterialInterface;
class UPoseAsset;
class USkeletalMesh;
class UTexture2D;

UCLASS(Blueprintable)
class READYORNOT_API UCustomizationCharacter : public UCustomizationDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> HeadMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ArmsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPoseAsset> FaceROM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HairMaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ProfileImage;
    
    UCustomizationCharacter();
};

