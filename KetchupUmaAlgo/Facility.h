#ifndef FACILITY_H
#define FACILITY_H

#include <vector>
#include <string>
#include "GlobalEnum.h"

class Facility
{
public:
    Facility(FacilityType facilityType);
    int GetLevel();
    FacilityType GetFacilityType();
    void Click();
    void WinVenusRace();
    // 該設施獲得碎片時增加設施值
    void GetSpirit();
    // 獲得對應屬性碎片時增加設施值
    void GetPropertySpirit();

private:
    int _level;
    int _maxLevel;
    float _levelScore;
    FacilityType _facilityType;
    void _updateLevel();
};

#endif

