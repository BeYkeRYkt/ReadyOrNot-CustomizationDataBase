#include "CustomizationDataBase.h"

UCustomizationDataBase::UCustomizationDataBase() {
    this->Type = ECustomizationType::None;
    this->Parent = NULL;
    this->DisplayPriority = 1;
    this->bShowInLoadout = true;
}

