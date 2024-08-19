#ifndef SPIRIT_TOWER_SYSTEM_H
#define SPIRIT_TOWER_SYSTEM_H

#include <vector>
#include <unordered_map>
#include "GlobalEnum.h"
#include "SpiritTower.h"

using namespace std;

class SpiritTowerSystem
{
public:
    SpiritTowerSystem();
    void AddSpirit(SpiritType spiritType, SpiritColor spiritColor);
    void Activate();
    void PrintInfo();

private:
    SpiritTower* spiritTower;
    unordered_map<SpiritColor,int> venusLevel;
};

#endif
