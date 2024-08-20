#ifndef FACILITY_H
#define FACILITY_H

#include <vector>
#include <string>
#include "GlobalEnum.h"
using namespace std;

class Facility
{
public:
    Facility(FacilityType facilityType);
    Facility(FacilityType facilityType, vector<int> trainLevelCount);
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
    SpiritColor _spiritColor;
    SpiritType _spiritType;
    int _spiritCount;
    float _levelScore;
    FacilityType _facilityType;
    void _updateLevel();
};

#endif

