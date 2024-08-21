#ifndef FACILITY_H
#define FACILITY_H

#include <vector>
#include <string>
#include <tuple>
#include "GlobalEnum.h"
#include "SupportCard.h"
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
	tuple<SpiritColor, SpiritType, int> GetSpiritData();

private:
	int _level;
	int _maxLevel;
	tuple <SpiritColor, SpiritType, int> _spiritData;
	vector <int> _trainingValue;
	vector <SupportCard> _supportCard;
	float _levelScore;
	FacilityType _facilityType;
	void _updateLevel();
};

#endif

