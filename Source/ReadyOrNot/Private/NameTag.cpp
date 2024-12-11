#include "NameTag.h"

ANameTag::ANameTag(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->FontSize = 0;
    this->MaterialIndex = 0;
    this->MaterialParameter = TEXT("Texture_NameTag");
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->MaterialInstance = NULL;
    this->RenderTarget = NULL;
}


