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
    cout << u8"�d�� ID: " << cardId << endl;
    cout << u8"�d���W��: " << cardName << endl;
    cout << u8"��}��" << cardLimitBreak << endl;
    cout << u8"�d������: " << static_cast<int>(cardType) << endl;
    cout << u8"�ͱ��[��: " << YouQing << endl;
    cout << u8"�F�l�[��: " << GanJing << endl;
    cout << u8"�V�m�[��: " << xunLian << endl;
    cout << u8"��l����: " << InitialJiBan << endl;
    cout << u8"�o�N�v: " << DeYiLv << endl;

    cout << u8"�ݩʥ[��:" << endl;
    for (int val : PropertyBonus)
        cout << val << " ";
    cout << endl;

    cout << u8"��l�[��:" << endl;
    for (int val : InitialBonus)
        cout << val << " ";
    cout << endl;

    cout << u8"��O�^�_: " << wizVitalBonus << endl;
    cout << u8"�v�ɥ[��: " << saiHou << endl;
    cout << u8"�F�P����: " << hintLevel << endl;
    cout << u8"�F�P���v: " << hintProbIncrease << endl;
    cout << endl;
}

