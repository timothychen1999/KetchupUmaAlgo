#ifndef GLOBALENUMS_H
#define GLOBALENUMS_H

#include <iostream>
#include <map>
#include <string>
using namespace std;

enum class FacilityType
{
    Speed,
    Stamina,
    Power,
    Will,
    Int
};

enum class TrainType
{
    Speed,
    Stamina,
    Power,
    Will,
    Int
};

enum class SpiritType
{
    Speed,
    Stamina,
    Power,
    Will,
    Int,
    SkillPt,
    None
};

enum class SpiritColor
{
    Red,
    Blue,
    Yellow,
    None
};

enum class VenusColor
{
    Red,
    Blue,
    Yellow,
    None
};

// Maps for enum to string conversion
const map<FacilityType, string> FacilityTypeToString =
{
    {FacilityType::Speed, "Speed"},
    {FacilityType::Stamina, "Stamina"},
    {FacilityType::Power, "Power"},
    {FacilityType::Will, "Will"},
    {FacilityType::Int, "Int"}
};

const map<TrainType, string> TrainTypeToString =
{
    {TrainType::Speed, "Speed"},
    {TrainType::Stamina, "Stamina"},
    {TrainType::Power, "Power"},
    {TrainType::Will, "Will"},
    {TrainType::Int, "Int"}
};

const map<SpiritType, string> SpiritTypeToString =
{
    {SpiritType::Speed, "Speed"},
    {SpiritType::Stamina, "Stamina"},
    {SpiritType::Power, "Power"},
    {SpiritType::Will, "Will"},
    {SpiritType::Int, "Int"},
    {SpiritType::SkillPt, "SkillPt"},
    {SpiritType::None, "None"}
};

const map<SpiritColor, string> SpiritColorToString =
{
    {SpiritColor::Red, "Red"},
    {SpiritColor::Blue, "Blue"},
    {SpiritColor::Yellow, "Yellow"},
    {SpiritColor::None, "None"}
};

const map<VenusColor, string> VenusColorToString =
{
    {VenusColor::Red, "Red"},
    {VenusColor::Blue, "Blue"},
    {VenusColor::Yellow, "Yellow"},
    {VenusColor::None, "None"}
};

template <typename T>
typename std::enable_if<std::is_enum<T>::value, std::ostream&>::type operator<<(std::ostream& os, const T& enumVal)
{
    if constexpr (std::is_same_v<T, FacilityType>)
    {
        os << FacilityTypeToString.at(enumVal);
    }
    else if constexpr (std::is_same_v<T, TrainType>)
    {
        os << TrainTypeToString.at(enumVal);
    }
    else if constexpr (std::is_same_v<T, SpiritType>)
    {
        os << SpiritTypeToString.at(enumVal);
    }
    else if constexpr (std::is_same_v<T, SpiritColor>)
    {
        os << SpiritColorToString.at(enumVal);
    }
    else if constexpr (std::is_same_v<T, VenusColor>)
    {
        os << VenusColorToString.at(enumVal);
    }
    else
    {
        os << "Unknown";
    }
    return os;
}

#endif
