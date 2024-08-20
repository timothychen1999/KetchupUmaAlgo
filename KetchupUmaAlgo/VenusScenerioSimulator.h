#ifndef VENUSSCENERIOSIMULATOR_H
#define VENUSSCENERIOSIMULATOR_H

using namespace std;
#include "TurnData.h"
#include "FacilitySystem.h"
#include "SpiritTowerSystem.h"
#include "DeckSystem.h"

class VenusScenerioSimulator
{
public:
	VenusScenerioSimulator();
	VenusScenerioSimulator(TurnData thisTurn);
	// 從thisTurn開始模擬到結束
	int SimulateFromThisTurn();
	// 從Turn1開始模擬到結束
	int SimulateFromTurnOne();
	void PrintInfo();

private:
	int turn;
	TurnData thisTurn;
	FacilitySystem* facilitySystem;
	DeckSystem* deckSystem;
	SpiritTowerSystem* spiritTowerSystem;
};
#endif