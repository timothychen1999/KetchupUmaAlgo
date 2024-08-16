#include <iostream>
#include <fstream>
#include "nlohmann/json.hpp"
#include "TurnData.h"
#include "JsonLoader.h"
#include "SupportCard.h"

using json = nlohmann::json;
using namespace std;

TurnData GetThisTurn()
{
    ifstream file("thisTurn.json");
    if (!file.is_open())
    {
        cerr << "Could not open the file!" << endl;
        return TurnData();
    }

    json jsonThisTurn;
    file >> jsonThisTurn;
    TurnData thisTurn = TurnData(jsonThisTurn);
    return thisTurn;
}

SupportCard GetSupportCard(int id, int limitBreak)
{
    json jsonCardDB;
    string idstring = to_string(id);

    ifstream file("cardDB.json");
    if (!file.is_open())
    {
        cerr << "Could not open the file!" << endl;
        return SupportCard();
    }
    file >> jsonCardDB;

    if (jsonCardDB.contains(idstring))
    {
        json cardData = jsonCardDB[idstring];
        return SupportCard(cardData, limitBreak);

    }
    else
    {
        cerr << "Card with ID " << id << " not found" << endl;
        return SupportCard();
    }

}
