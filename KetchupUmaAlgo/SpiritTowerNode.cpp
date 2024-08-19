#include "SpiritTowerNode.h"

SpiritTowerNode::SpiritTowerNode()
	: spiritType(SpiritType::None), spiritColor(SpiritColor::None),
	left(nullptr), right(nullptr), propertyAmount(0)
{
	srand(time(NULL));
}

// �Ψӥͦ����h�`�I
SpiritTowerNode::SpiritTowerNode(SpiritType spiritType, SpiritColor spiritColor)
	: spiritType(spiritType), spiritColor(spiritColor),
	left(nullptr), right(nullptr), propertyAmount(1)
{
	srand(time(NULL));
}

// �W�h�`�I�ͦ��ɥΨӪ�l�Ʀۨ����A
void SpiritTowerNode::Init()
{
	if (left != nullptr && right != nullptr)
	{
		spiritColor = left->spiritColor;
		spiritType = rand() % 100 < 80 ? left->spiritType : right->spiritType;
		propertyAmount = left->spiritColor == right->spiritColor ? 2 : 3;
	}
}

