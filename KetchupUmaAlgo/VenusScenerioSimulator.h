#ifndef VENUSSCENERIOSIMULATOR_H
#define VENUSSCENERIOSIMULATOR_H

using namespace std;
#include"TurnData.h"

class VenusScenerioSimulator
{
public:
	VenusScenerioSimulator();
	VenusScenerioSimulator(TurnData thisTurn);
	void NewGame();

private:
	TurnData thisTurn;
};
#endif