#include "VenusScenerioSimulator.h"
#include "TurnData.h"
using namespace std;

VenusScenerioSimulator::VenusScenerioSimulator()
	:turn(1)
{
	facilitySystem = new FacilitySystem();
	deckSystem = new DeckSystem();
	spiritTowerSystem = new SpiritTowerSystem();
}

VenusScenerioSimulator::VenusScenerioSimulator(TurnData thisTurn)
	:turn(1), thisTurn(thisTurn)
{
	facilitySystem = new FacilitySystem(thisTurn);
	deckSystem = new DeckSystem(thisTurn);
	spiritTowerSystem = new SpiritTowerSystem(thisTurn);
}

int VenusScenerioSimulator::SimulateFromThisTurn()
{
	return 0;
}

int VenusScenerioSimulator::SimulateFromTurnOne()
{
	return 0;
}

void VenusScenerioSimulator::PrintInfo()
{
	cout << u8"當前牌組資訊: " << endl;
	deckSystem->PrintInfo();
	cout << u8"當前設施資訊: " << endl;
	facilitySystem->PrintInfo();
	cout << u8"當前碎片塔資訊: " << endl;
	spiritTowerSystem->PrintInfo();
}

