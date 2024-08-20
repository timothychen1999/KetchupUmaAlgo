#ifndef TURNDATA_H
#define TURNDATA_H

#include <nlohmann/json.hpp>
#include <vector>

using json = nlohmann::json;
using namespace std;

class TurnData
{
public:
	// ���QID
	int umaId;
	// �^�X��
	int turn;
	// ��e��O
	int vital;
	// �̤j��O
	int maxVital;
	// �O�_�ѽᲧ�[
	bool isQieZhe;
	// �O�_�Q�H���w
	bool isAiJiao;
	// ���Ѳv�[��
	int failureRateBias;
	// ��e����
	vector<int> fiveStatus;
	// ��e����
	vector<int> fiveStatusLimit;
	// ��ept
	int skillPt;
	// �F�l(1���t/2����/3���q/4�}�n/5����)
	int motivation;
	// �ޯ�dID
	vector<int> cardId;
	// �䴩�d��}
	vector<int> cardLimitBreak;
	// �ޯ�d����
	vector<int> cardJiBan;
	// �V�m�]�I����(�C12���ɤ@��)
	vector<int> trainLevelCount;
	// �ذ��Ŧ]�l(�`�P��)
	vector<int> zhongMaBlueCount;
	// �ذ��@���]�l(�ڨ�ꤣ�T�w�o�Oԣ��)
	vector<int> zhongMaExtraBonus;
	// �O�_�v�ɦ^�X
	bool isRacing;
	// ���k������
	int venusLevelYellow;
	// ���k������
	int venusLevelRed;
	// �Ťk������
	int venusLevelBlue;
	// 01-08 ���t�@�O�ڴ�ptXX
	// 09-16 �ųt�@�O�ڴ�ptXX
	// 17-24 ���t�@�O�ڴ�ptXX(?)
	vector<int> venusSpiritsBottom;
	// 01-08 ���t�@�O�ڴ�ptXX
	// 09-16 �ųt�@�O�ڴ�ptXX
	// 17-24 ���t�@�O�ڴ�ptXX(?)
	vector<int> venusSpiritsUpper;
	// �i�Ϊ��k���C��
	int venusAvailableWisdom;
	// �O�_���}�Ҥk���ʹ�
	bool venusIsWisdomActive;
	// �O�_Ĳ�o�k���쨣
	bool venusCardFirstClick;
	// �O�_Ĳ�o�k���~�X
	bool venusCardUnlockOutgoing;
	// �k���d�O�_���������A
	bool venusCardIsQingRe;
	// �k���d��������^�X
	int venusCardQingReContinuousTurns;
	// �k���d�~�X�ϥα��p
	vector<bool> venusCardOutgoingUsed;
	// �^�X���q(0�^�X��ʫe/1�^�X��ʮ�/2�^�X��ʫ�)
	int stageInTurn;
	// �C�i�d�h���Ӧ�m�F
	vector<vector<bool>> cardDistribution;
	// �O�_��Ĳ�o�F�P
	vector<bool> cardHint;
	// A:�O�_�����H�� B:�H���C��(1��2��3��) C:�H������(�t�@�O�ڴ�ptXX)
	// �Ʀr�t�N�� 32A+8B+C
	// ��m���O���t�@�O�ڴ��V�𮧥~�X����
	vector<int> spiritDistribution;
	// �H���`���q
	vector<int> spiritBonus;
	// �V�m�`��
	vector<vector<int>> trainValue;
	// �V�m���Ѳv
	vector<int> failRate;

	TurnData();
	// Method to initialize from a JSON object
	TurnData(const json& j);
};

#endif // TURNDATA_H
