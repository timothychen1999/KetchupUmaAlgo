#include "VenusScenerioSimulator.h"
#include "TurnData.h"
using namespace std;

VenusScenerioSimulator::VenusScenerioSimulator()
{
	facilitySystem = new FacilitySystem();
	deckSystem = new DeckSystem();
	spiritTowerSystem = new SpiritTowerSystem();
}

VenusScenerioSimulator::VenusScenerioSimulator(TurnData thisTurn)
	: thisTurn(thisTurn)
{

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
	cout << u8"��e�P�ո�T: " << endl;
	deckSystem->PrintInfo();
	cout << u8"��e�]�I��T: " << endl;
	facilitySystem->PrintInfo();
	cout << u8"��e�H�����T: " << endl;
	spiritTowerSystem->PrintInfo();
}

