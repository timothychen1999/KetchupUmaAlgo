#include "SpiritTowerNode.h"

SpiritTowerNode::SpiritTowerNode()
	: spiritType(SpiritType::None), spiritColor(SpiritColor::None),
	left(nullptr), right(nullptr), propertyAmount(0)
{
	srand(time(NULL));
}

// 用來生成底層節點
SpiritTowerNode::SpiritTowerNode(SpiritType spiritType, SpiritColor spiritColor)
	: spiritType(spiritType), spiritColor(spiritColor),
	left(nullptr), right(nullptr), propertyAmount(1)
{
	srand(time(NULL));
}

// 上層節點生成時用來初始化自身狀態
void SpiritTowerNode::Init()
{
	if (left != nullptr && right != nullptr)
	{
		spiritColor = left->spiritColor;
		spiritType = rand() % 100 < 80 ? left->spiritType : right->spiritType;
		propertyAmount = left->spiritColor == right->spiritColor ? 2 : 3;
	}
}

