#include "Facility.h"

Facility::Facility(FacilityType facilityType)
	: _level(1), _maxLevel(5), _levelScore(0), _facilityType(facilityType)
{
}

Facility::Facility(FacilityType facilityType, vector<int> trainLevelCount)
	: _level(1), _maxLevel(5), _facilityType(facilityType)
{
	_levelScore = trainLevelCount[static_cast<int>(facilityType)];
	_updateLevel();
}

int Facility::GetLevel()
{
	return _level;
}

FacilityType Facility::GetFacilityType()
{
	return _facilityType;
}

void Facility::Click()
{
	_levelScore += 2;
	_updateLevel();
}

void Facility::WinVenusRace()
{
	_levelScore += 8;
	_updateLevel();
}

void Facility::GetSpirit()
{
	_levelScore += 0.2;
	_updateLevel();
}

void Facility::GetPropertySpirit()
{
	_levelScore += 1;
	_updateLevel();
}

void Facility::_updateLevel()
{
	_level = _levelScore / 12 + 1 ;
	_level = _level <= _maxLevel ? _level : _maxLevel;
}
