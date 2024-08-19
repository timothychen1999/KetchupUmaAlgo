#ifndef SPIRITTOWERNODE_H
#define SPIRITTOWERNODE_H

#include "GlobalEnum.h"
#include <random>
#include <time.h>

class SpiritTowerNode
{
public:
	SpiritTowerNode();
	SpiritTowerNode(SpiritType spiritType, SpiritColor spiritColor);
	SpiritType spiritType;
	SpiritColor spiritColor;
	int propertyAmount;
	SpiritTowerNode* left;
	SpiritTowerNode* right;
	void Init();
};
#endif
