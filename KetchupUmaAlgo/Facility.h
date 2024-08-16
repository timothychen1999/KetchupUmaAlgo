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
    // �ӳ]�I��o�H���ɼW�[�]�I��
    void GetSpirit();
    // ��o�����ݩʸH���ɼW�[�]�I��
    void GetPropertySpirit();

private:
    int _level;
    int _maxLevel;
    float _levelScore;
    FacilityType _facilityType;
    void _updateLevel();
};

#endif

