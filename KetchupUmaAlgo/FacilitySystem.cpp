#include "FacilitySystem.h"

FacilitySystem::FacilitySystem()
{
	for (int i = 0;i < 5;i++)
	{
		Facility tempFacility = Facility(static_cast<FacilityType>(i));
		_facilityGroup.push_back(tempFacility);
	}
}

FacilitySystem::FacilitySystem(TurnData thisTurn)
{
	for (int i = 0;i < 5;i++)
	{
		Facility tempFacility = Facility(static_cast<FacilityType>(i), thisTurn.trainLevelCount);
		_facilityGroup.push_back(tempFacility);
	}
}

void FacilitySystem::Click(TrainType trainType)
{
	_facilityGroup[static_cast<int>(trainType)].Click();
}

void FacilitySystem::PrintInfo()
{
	for (int i = 0;i < 5 ;i++)
	{
		cout << "設施" << i << "的等級為" << _facilityGroup[i].GetLevel() << endl;
	}
}

