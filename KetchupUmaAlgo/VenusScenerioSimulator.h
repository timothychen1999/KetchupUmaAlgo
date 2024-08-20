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
	// �qthisTurn�}�l�����쵲��
	int SimulateFromThisTurn();
	// �qTurn1�}�l�����쵲��
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