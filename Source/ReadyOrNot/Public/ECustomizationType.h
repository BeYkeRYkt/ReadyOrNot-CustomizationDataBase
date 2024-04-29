#pragma once
#include "CoreMinimal.h"
#include "ECustomizationType.generated.h"

UENUM(BlueprintType)
enum class ECustomizationType : uint8 {
    None,
    Character,
    Voice,
    Helmet,
    Shirt,
    Pants,
    Shoes,
    Eyewear,
    Belt,
    Gloves,
    Watch,
    Tattoo,
    PrimarySkin,
    SecondarySkin,
    ArmorSkin,
    HeadwearSkin,
    Any,
};

