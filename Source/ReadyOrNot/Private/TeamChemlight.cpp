#include "TeamChemlight.h"

ATeamChemlight::ATeamChemlight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->TeamMaterialIndex = 0;
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->CurrentTeam = ETeamType::TT_NONE;
    this->StaticMeshComponent->SetupAttachment(RootComponent);
}

void ATeamChemlight::HandleTeamChanged(ETeamType Team) {
}


