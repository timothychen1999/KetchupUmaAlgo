#ifndef DECKSYSTEM_H
#define DECKSYSTEM_H

#include <vector>
#include "JsonLoader.h"
#include "SupportCard.h"
#include "TurnData.h"
using namespace std;

class DeckSystem
{
public:
    DeckSystem();
    DeckSystem(TurnData turnData);
    void PrintInfo();
private:
    vector<SupportCard> deck;
};

#endif

