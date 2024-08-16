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

private:
    int cardId;
    string cardName;
    TrainType cardType;

    int YouQing;
    int GanJing;
    int xunLian;
    int InitialJiBan;
    int DeYiLv;
    vector<int> PropertyBonus;
    vector<int> InitialBonus;
    int wizVitalBonus;
};

#endif // SUPPORTCARD_H
