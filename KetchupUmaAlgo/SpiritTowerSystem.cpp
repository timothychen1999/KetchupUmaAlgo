#include "SpiritTowerSystem.h"

SpiritTowerSystem::SpiritTowerSystem()
{
	spiritTower = new SpiritTower();
	venusLevel[SpiritColor::Red] = 0;
	venusLevel[SpiritColor::Blue] = 0;
	venusLevel[SpiritColor::Yellow] = 0;
}

SpiritTowerSystem::SpiritTowerSystem(TurnData thisTurn)
{
	spiritTower = new SpiritTower();
	venusLevel[SpiritColor::Red] = thisTurn.venusLevelRed;
	venusLevel[SpiritColor::Blue] = thisTurn.venusLevelBlue;
	venusLevel[SpiritColor::Yellow] = thisTurn.venusLevelYellow;

	for (int i = 0;i < 8;i++)
	{
		SetSpirit(thisTurn.venusSpiritsBottom[i], 3, i);
	}
	for (int i = 0;i < 4;i++)
	{
		SetSpirit(thisTurn.venusSpiritsUpper[i], 2, i);
	}
	for (int i = 0;i < 2;i++)
	{
		SetSpirit(thisTurn.venusSpiritsUpper[i + 4], 1, i);
	}
}

void SpiritTowerSystem::AddSpirit(SpiritType spiritType, SpiritColor spiritColor)
{
	spiritTower->Insert(spiritType, spiritColor);
}

void SpiritTowerSystem::SetSpirit(int index, int layer, int position)
{
	if (index == 0) return;
	SpiritType type = static_cast<SpiritType>(index % 8 - 1);
	SpiritColor color = static_cast<SpiritColor>(index / 8);
	spiritTower->SetNode(type, color, layer, position);
}

void SpiritTowerSystem::Activate()
{
	spiritTower->Clear();
}

void SpiritTowerSystem::PrintInfo()
{
	spiritTower->PrintInfo();
}

