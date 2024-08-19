#include "SpiritTowerSystem.h"

SpiritTowerSystem::SpiritTowerSystem()
{
	spiritTower = new SpiritTower();
	venusLevel[SpiritColor::Red] = 0;
	venusLevel[SpiritColor::Blue] = 0;
	venusLevel[SpiritColor::Yellow] = 0;
}

void SpiritTowerSystem::AddSpirit(SpiritType spiritType, SpiritColor spiritColor)
{
	spiritTower->Insert(spiritType, spiritColor);
}

void SpiritTowerSystem::Activate()
{
	spiritTower->Clear();
}

void SpiritTowerSystem::PrintInfo()
{
	spiritTower->PrintInfo();
}

