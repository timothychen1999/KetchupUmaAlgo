#ifndef SPIRITTOWER_H
#define SPIRITTOWER_H

#include "GlobalEnum.h"
#include "SpiritTowerNode.h"
#include <vector>
#include <time.h>
#include <random>
#include <unordered_map>
#include <string>
using namespace std;

class SpiritTower
{
public:
    SpiritTower();
    void Insert(SpiritType type, SpiritColor color);
    void Clear();
    void PrintInfo();

private:
    void GenerateTopNode();
    SpiritColor GetWisdomColor();
    unordered_map<SpiritColor, int> colorSum;
    vector<vector<SpiritTowerNode*>> spiritTower;
};
#endif