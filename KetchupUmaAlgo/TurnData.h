#ifndef TURNDATA_H
#define TURNDATA_H

#include <nlohmann/json.hpp>
#include <vector>

using json = nlohmann::json;
using namespace std;

class TurnData
{
public:
	// 馬娘ID
	int umaId;
	// 回合數
	int turn;
	// 當前體力
	int vital;
	// 最大體力
	int maxVital;
	// 是否天賦異稟
	bool isQieZhe;
	// 是否討人喜歡
	bool isAiJiao;
	// 失敗率加值
	int failureRateBias;
	// 當前五圍
	vector<int> fiveStatus;
	// 當前五圍
	vector<int> fiveStatusLimit;
	// 當前pt
	int skillPt;
	// 幹勁(1極差/2不佳/3普通/4良好/5極佳)
	int motivation;
	// 技能卡ID
	vector<int> cardId;
	// 支援卡突破
	vector<int> cardLimitBreak;
	// 技能卡羈絆
	vector<int> cardJiBan;
	// 訓練設施分數(每12分升一等)
	vector<int> trainLevelCount;
	// 種馬藍因子(總星數)
	vector<int> zhongMaBlueCount;
	// 種馬劇本因子(我其實不確定這是啥鬼)
	vector<int> zhongMaExtraBonus;
	// 是否競賽回合
	bool isRacing;
	// 黃女神等級
	int venusLevelYellow;
	// 紅女神等級
	int venusLevelRed;
	// 藍女神等級
	int venusLevelBlue;
	// 01-08 紅速耐力根智ptXX
	// 09-16 藍速耐力根智ptXX
	// 17-24 黃速耐力根智ptXX(?)
	vector<int> venusSpiritsBottom;
	// 01-08 紅速耐力根智ptXX
	// 09-16 藍速耐力根智ptXX
	// 17-24 黃速耐力根智ptXX(?)
	vector<int> venusSpiritsUpper;
	// 可用的女神顏色
	int venusAvailableWisdom;
	// 是否有開啟女神睿智
	bool venusIsWisdomActive;
	// 是否觸發女神初見
	bool venusCardFirstClick;
	// 是否觸發女神外出
	bool venusCardUnlockOutgoing;
	// 女神卡是否為情熱狀態
	bool venusCardIsQingRe;
	// 女神卡情熱持續回合
	int venusCardQingReContinuousTurns;
	// 女神卡外出使用情況
	vector<bool> venusCardOutgoingUsed;
	// 回合階段(0回合行動前/1回合行動時/2回合行動後)
	int stageInTurn;
	// 每張卡去哪個位置了
	vector<vector<bool>> cardDistribution;
	// 是否有觸發靈感
	vector<bool> cardHint;
	// A:是否為雙碎片 B:碎片顏色(1紅2藍3黃) C:碎片種類(速耐力根智ptXX)
	// 數字含意為 32A+8B+C
	// 位置分別為速耐力根智訓休息外出比賽
	vector<int> spiritDistribution;
	// 碎片總收益
	vector<int> spiritBonus;
	// 訓練總值
	vector<vector<int>> trainValue;
	// 訓練失敗率
	vector<int> failRate;

	TurnData();
	// Method to initialize from a JSON object
	TurnData(const json& j);
};

#endif // TURNDATA_H
