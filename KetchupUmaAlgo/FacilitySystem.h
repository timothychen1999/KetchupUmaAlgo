#ifndef FACILITYSYSTEM_H
#define FACILITYSYSTEM_H

#include<vector>
#include<iostream>
#include"GlobalEnum.h"
#include"Facility.h"
#include"TurnData.h"

using namespace std;

class FacilitySystem
{
public:
    FacilitySystem();
    FacilitySystem(TurnData thisTurn);
    void Click(TrainType trainType);
    void PrintInfo();

private:
    vector<Facility> _facilityGroup;
};

#endif
