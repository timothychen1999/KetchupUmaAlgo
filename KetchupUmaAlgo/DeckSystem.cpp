#include "DeckSystem.h"

DeckSystem::DeckSystem()
{
	// 丸善司基
	SupportCard card0 = GetSupportCard(30107, 4);
	_deck.push_back(card0);
	// 北部玄駒
	SupportCard card1 = GetSupportCard(30028, 4);
	_deck.push_back(card1);
	// 超級小溪
	SupportCard card2 = GetSupportCard(30016, 4);
	_deck.push_back(card2);
	// 目白高峰
	SupportCard card3 = GetSupportCard(30134, 4);
	_deck.push_back(card3);
	// 美妙姿勢
	SupportCard card4 = GetSupportCard(30010, 4);
	_deck.push_back(card4);
	// 三女神
	SupportCard card5 = GetSupportCard(30137, 4);
	_deck.push_back(card5);

	_raceBonus = 0;
	for(int i=0;i<_deck.size();i++)
	{
		_raceBonus += _deck[i].saiHou;
	}
}

DeckSystem::DeckSystem(TurnData turnData)
{
	vector<int> ids = turnData.cardId;
	for (int i = 0;i < ids.size();i++)
	{
		SupportCard card = GetSupportCard(ids[i],4);
		_deck.push_back(card);
	}

	_raceBonus = 0;
	for (int i = 0;i < _deck.size();i++)
	{
		_raceBonus += _deck[i].saiHou;
	}
}

void DeckSystem::PrintInfo()
{
	cout << u8"競賽加成總合: " << _raceBonus << endl;
	for (int i = 0;i < _deck.size();i++)
	{
		_deck[i].PrintInfo();
	}
}
