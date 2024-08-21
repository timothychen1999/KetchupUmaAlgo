#include "SpiritTower.h"
#include <iostream>
#include <algorithm>

using namespace std;

SpiritTower::SpiritTower()
{
	spiritTower.resize(4);
	spiritTower[0].resize(1, nullptr);
	spiritTower[1].resize(2, nullptr);
	spiritTower[2].resize(4, nullptr);
	spiritTower[3].resize(8, nullptr);

	colorSum[SpiritColor::Red] = 0;
	colorSum[SpiritColor::Blue] = 0;
	colorSum[SpiritColor::Yellow] = 0;

	srand(time(NULL));
}

void SpiritTower::Insert(SpiritType type, SpiritColor color)
{
	for (int i = 0; i < 8; ++i)
	{
		if (spiritTower[3][i] == nullptr)
		{
			spiritTower[3][i] = new SpiritTowerNode(type, color);
			colorSum[color] += 1;
			GenerateTopNode();
			return;
		}
	}
}

void SpiritTower::SetNode(SpiritType type, SpiritColor color, int layer, int position)
{
	spiritTower[layer][position] = new SpiritTowerNode(type, color);
	if (layer == 2 || layer == 1)
	{
		spiritTower[layer][position]->left = spiritTower[layer + 1][position * 2];
		spiritTower[layer][position]->right = spiritTower[layer + 1][position * 2 + 1];
		spiritTower[layer][position]->Init();
	}
}

void SpiritTower::Clear()
{
	for (auto& layer : spiritTower)
	{
		for (auto*& node : layer)
		{
			delete node;
			node = nullptr;
		}
	}

	for (auto& colorPair : colorSum)
	{
		colorPair.second = 0;
	}
}


void SpiritTower::GenerateTopNode()
{
	// �ͦ��ĤG�h�`�I
	for (int i = 0; i < 4; i++)
	{
		if (spiritTower[3][i * 2] && spiritTower[3][i * 2 + 1] && !spiritTower[2][i])
		{
			spiritTower[2][i] = new SpiritTowerNode();
			spiritTower[2][i]->left = spiritTower[3][i * 2];
			spiritTower[2][i]->right = spiritTower[3][i * 2 + 1];
			spiritTower[2][i]->Init();
		}
	}

	// �ͦ��ĤT�h�`�I
	for (int i = 0; i < 2; i++)
	{
		if (spiritTower[2][i * 2] && spiritTower[2][i * 2 + 1] && !spiritTower[1][i])
		{
			spiritTower[1][i] = new SpiritTowerNode();
			spiritTower[1][i]->left = spiritTower[2][i * 2];
			spiritTower[1][i]->right = spiritTower[2][i * 2 + 1];
			spiritTower[1][i]->Init();
		}
	}

	// �ͦ�����
	if (spiritTower[1][0] && spiritTower[1][1] && !spiritTower[0][0])
	{
		spiritTower[0][0] = new SpiritTowerNode();
		spiritTower[0][0]->left = spiritTower[1][0];
		spiritTower[0][0]->right = spiritTower[1][1];
		spiritTower[0][0]->spiritColor = GetWisdomColor();
		spiritTower[0][0]->spiritType = SpiritType::None;
		spiritTower[0][0]->propertyAmount = 0;
	}
}

SpiritColor SpiritTower::GetWisdomColor()
{
	SpiritTowerNode* root = spiritTower[0][0];
	SpiritColor leftColor = root->left->spiritColor;
	SpiritColor rightColor = root->right->spiritColor;

	if (colorSum[leftColor] > colorSum[rightColor])
	{
		return leftColor;
	}
	else if (colorSum[rightColor] > colorSum[leftColor])
	{
		return rightColor;
	}
	else
	{
		SpiritColor result = rand() % 100 < 50 ? leftColor : rightColor;
		return result;
	}
}

void SpiritTower::PrintInfo()
{
	int numLayers = spiritTower.size();
	int maxWidth = (1 << (numLayers - 1)) * 10;  // �p��̤j�e��

	for (int i = 0; i < numLayers; ++i)
	{
		int numNodes = spiritTower[i].size();
		int space = maxWidth / (numNodes + 1);  // �p��C�Ӹ`�I���������Z

		// ���L�h���D
		cout << u8"�h " << i + 1 << ":" << endl;

		// �������
		cout << u8"����: ";
		for (int j = 0; j < numNodes; ++j)
		{
			if (spiritTower[i][j])
			{
				cout << spiritTower[i][j]->spiritType;
			}
			else
			{
				cout << u8"��";
			}
			if (j < numNodes - 1)
			{
				cout << " | ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;

		// ����C��
		cout << u8"�C��: ";
		for (int j = 0; j < numNodes; ++j)
		{
			if (spiritTower[i][j])
			{
				cout << spiritTower[i][j]->spiritColor;
			}
			else
			{
				cout << u8"��";
			}
			if (j < numNodes - 1)
			{
				cout << " | ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;

		// ����ݩʶq
		cout << u8"�ݩ�: ";
		for (int j = 0; j < numNodes; ++j)
		{
			if (spiritTower[i][j])
			{
				cout << spiritTower[i][j]->propertyAmount;
			}
			else
			{
				cout << u8"��";
			}
			if (j < numNodes - 1)
			{
				cout << " | ";
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;

		// �վ�U�@�h�����Z
		cout << endl;
	}
}
