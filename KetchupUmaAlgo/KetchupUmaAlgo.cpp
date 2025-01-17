﻿#include <iostream>
#include "FacilitySystem.h"
#include "SpiritTowerSystem.h"
#include "DeckSystem.h"
#include "VenusScenerioSimulator.h"
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

void TestScenerio()
{
	TurnData thisTurn = GetThisTurn();
	VenusScenerioSimulator* simulator = new VenusScenerioSimulator(thisTurn);
	simulator->PrintInfo();
}

int main()
{
	system("chcp 65001");
	//TestDeck();
	//TestFacility();
	//TestSpiritTower();
	TestScenerio();
}
