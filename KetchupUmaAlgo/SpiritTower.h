#ifndef SPIRITTOWER_H
#define SPIRITTOWER_H

#include "GlobalEnum.h"
#include "SpiritTowerNode.h"
#include <vector>
#include <time.h>
#include <random>
#include <unordered_map>
#include <string>
#include "TurnData.h"
using namespace std;

class SpiritTower
{
public:
    SpiritTower();
    void Insert(SpiritType type, SpiritColor color);
    void SetNode(SpiritType type, SpiritColor color, int layer, int position);
    void Clear();
    void PrintInfo();

private:
    void GenerateTopNode();
    SpiritColor GetWisdomColor();
    unordered_map<SpiritColor, int> colorSum;
    vector<vector<SpiritTowerNode*>> spiritTower;
};
#endif