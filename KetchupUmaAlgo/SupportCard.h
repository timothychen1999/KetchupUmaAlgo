#ifndef SUPPORTCARD_H
#define SUPPORTCARD_H

#include <string>
#include <vector>
#include "nlohmann/json.hpp"
#include "GlobalEnum.h"

using namespace std;
using json = nlohmann::json;

class SupportCard
{
public:
    SupportCard();
    SupportCard(const json& j, int limitBreak);
    void PrintInfo();
    int cardId;
    int cardLimitBreak;
    string cardName;
    TrainType cardType;
    double YouQing;
    int GanJing;
    int xunLian;
    int InitialJiBan;
    double DeYiLv;
    vector<int> PropertyBonus;
    vector<int> InitialBonus;
    int wizVitalBonus;
    int saiHou;
    int hintLevel;
    int hintProbIncrease;

    bool IsShining();

private:
    bool _isShining;
};

#endif
