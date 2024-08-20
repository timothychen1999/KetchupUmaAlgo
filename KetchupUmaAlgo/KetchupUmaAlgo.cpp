#include <iostream>
#include "FacilitySystem.h"
#include "SpiritTowerSystem.h"
#include "DeckSystem.h"
using namespace std;

void TestDeck()
{
	TurnData thisTurn = GetThisTurn();
	DeckSystem* deck = new DeckSystem(thisTurn);
	deck->PrintInfo();
}

void TestFacility()
{
	TurnData thisTurn = GetThisTurn();
	FacilitySystem testSystem = FacilitySystem(thisTurn);
	testSystem.PrintInfo();
}

void TestSpiritTower()
{
	SpiritTowerSystem* tower = new SpiritTowerSystem();
	tower->AddSpirit(SpiritType::Speed, SpiritColor::Red);
	tower->AddSpirit(SpiritType::Stamina, SpiritColor::Blue);
	tower->AddSpirit(SpiritType::SkillPt, SpiritColor::Yellow);
	tower->AddSpirit(SpiritType::Power, SpiritColor::Red);
	tower->AddSpirit(SpiritType::Power, SpiritColor::Yellow);
	tower->AddSpirit(SpiritType::Speed, SpiritColor::Red);
	tower->AddSpirit(SpiritType::Will, SpiritColor::Yellow);
	tower->AddSpirit(SpiritType::SkillPt, SpiritColor::Blue);
	tower->AddSpirit(SpiritType::Speed, SpiritColor::Red);
	tower->PrintInfo();

	tower->Activate();
	tower->PrintInfo();
}

int main()
{
	TestDeck();
	//TestFacility();
	//TestSpiritTower();
}
