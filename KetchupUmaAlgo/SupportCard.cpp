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
    cardLimitBreak = limitBreak;
    cardName = cardData.value("cardName", "");
    cardType = static_cast<TrainType>(cardData.value("cardType", 1));

    if (limitBreak >= 0 && limitBreak < 5)
    {
        const auto& Detail = cardData["cardValue"][limitBreak];

        YouQing = Detail.value("youQing", 0.0);
        GanJing = Detail.value("ganJing", 0);
        xunLian = Detail.value("xunLian", 0);
        InitialJiBan = Detail.value("initialJiBan", 0);
        DeYiLv = Detail.value("deYiLv", 0.0);
        PropertyBonus = Detail.value("bonus", vector<int>(6, 0));
        InitialBonus = Detail.value("initialBonus", vector<int>(6, 0));
        wizVitalBonus = Detail.value("wizVitalBonus", 0);
        saiHou = Detail.value("saiHou", 0);
        hintLevel = Detail.value("hintLevel", 0);
        hintProbIncrease = Detail.value("hintProbIncrease", 0);
    }
    else
    {
        cerr << "Invalid limitBreak index: " << limitBreak << endl;
    }

}

void SupportCard::PrintInfo()
{
    cout << u8"卡片 ID: " << cardId << endl;
    cout << u8"卡片名稱: " << cardName << endl;
    cout << u8"突破數" << cardLimitBreak << endl;
    cout << u8"卡片類型: " << static_cast<int>(cardType) << endl;
    cout << u8"友情加成: " << YouQing << endl;
    cout << u8"幹勁加成: " << GanJing << endl;
    cout << u8"訓練加成: " << xunLian << endl;
    cout << u8"初始羈絆: " << InitialJiBan << endl;
    cout << u8"得意率: " << DeYiLv << endl;

    cout << u8"屬性加成:" << endl;
    for (int val : PropertyBonus)
        cout << val << " ";
    cout << endl;

    cout << u8"初始加成:" << endl;
    for (int val : InitialBonus)
        cout << val << " ";
    cout << endl;

    cout << u8"體力回復: " << wizVitalBonus << endl;
    cout << u8"競賽加成: " << saiHou << endl;
    cout << u8"靈感等級: " << hintLevel << endl;
    cout << u8"靈感機率: " << hintProbIncrease << endl;
    cout << endl;
}

