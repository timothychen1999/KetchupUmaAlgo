#ifndef SPIRIT_TOWER_SYSTEM_H
#define SPIRIT_TOWER_SYSTEM_H

#include <vector>
#include <unordered_map>
#include "GlobalEnum.h"
#include "SpiritTower.h"
#include "TurnData.h"
using namespace std;

class SpiritTowerSystem
{
public:
    SpiritTowerSystem();
    SpiritTowerSystem(TurnData thisTurn);
    void AddSpirit(SpiritType spiritType, SpiritColor spiritColor);
    void SetSpirit(int index, int layer, int position);
    void Activate();
    void PrintInfo();

private:
    SpiritTower* spiritTower;
    unordered_map<SpiritColor,int> venusLevel;
};

#endif
