#include "SupportCard.h"
#include <iostream>

SupportCard::SupportCard()
    : cardId(0), cardName(""), cardType(static_cast<TrainType>(1)),
    YouQing(0), GanJing(0), xunLian(0), InitialJiBan(0), DeYiLv(0),
    PropertyBonus(6, 0), InitialBonus(6, 0), wizVitalBonus(0)
{
}


SupportCard::SupportCard(const json& cardData, int limitBreak)
{
    cardId = cardData.value("cardId", 0);
    cardName = cardData.value("cardName", "");
    cardType = static_cast<TrainType>(cardData.value("cardType", 1));

    if (limitBreak >= 0 && limitBreak < 5)
    {
        const auto& Detail = cardData["cardValue"][limitBreak];

        YouQing = Detail.value("youQing", 0);
        GanJing = Detail.value("ganJing", 0);
        xunLian = Detail.value("xunLian", 0);
        InitialJiBan = Detail.value("initialJiBan", 0);
        DeYiLv = Detail.value("deYiLv", 0);
        PropertyBonus = Detail.value("bonus", vector<int>(6, 0));
        InitialBonus = Detail.value("initialBonus", vector<int>(6, 0));
        wizVitalBonus = Detail.value("wizVitalBonus", 0);
    }
    else
    {
        cerr << "Invalid limitBreak index: " << limitBreak << endl;
    }
}

void SupportCard::PrintInfo()
{
    cout << "Card ID: " << cardId << endl;
    cout << "Card Name: " << cardName << endl;
    cout << "Card Type: " << static_cast<int>(cardType) << endl;
    cout << "YouQing: " << YouQing << endl;
    cout << "GanJing: " << GanJing << endl;
    cout << "XunLian: " << xunLian << endl; // Updated field
    cout << "InitialJiBan: " << InitialJiBan << endl;
    cout << "DeYiLv: " << DeYiLv << endl;

    cout << "Property Bonuses:" << endl;
    for (int val : PropertyBonus)
        cout << val << " ";
    cout << endl;

    cout << "Initial Bonuses:" << endl;
    for (int val : InitialBonus)
        cout << val << " ";
    cout << endl;

    cout << "WizVitalBonus: " << wizVitalBonus << endl; // Updated field
    cout << endl;
}

