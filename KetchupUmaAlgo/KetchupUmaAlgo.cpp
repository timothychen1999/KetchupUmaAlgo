#include <iostream>
#include "TurnData.h"
#include "JsonLoader.h"
using namespace std;

int main()
{
	SupportCard card0 = GetSupportCard(10004, 4);
	card0.PrintInfo();
	SupportCard card1 = GetSupportCard(10055, 4);
	card1.PrintInfo();
	SupportCard card2 = GetSupportCard(30016, 4);
	card2.PrintInfo();
	SupportCard card3 = GetSupportCard(30134, 4);
	card3.PrintInfo();
	SupportCard card4 = GetSupportCard(30010, 4);
	card4.PrintInfo();
}

