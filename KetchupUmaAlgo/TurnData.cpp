#include "TurnData.h"

TurnData::TurnData()
	: umaId(0), turn(0), vital(0), maxVital(0), isQieZhe(false), isAiJiao(false),
	failureRateBias(0), fiveStatus(), fiveStatusLimit(), skillPt(0),
	motivation(0), cardId(), cardJiBan(), trainLevelCount(), zhongMaBlueCount(),
	zhongMaExtraBonus(), isRacing(false), venusLevelYellow(0), venusLevelRed(0),
	venusLevelBlue(0), venusSpiritsBottom(), venusSpiritsUpper(), venusAvailableWisdom(0),
	venusIsWisdomActive(false), venusCardFirstClick(false), venusCardUnlockOutgoing(false),
	venusCardIsQingRe(false), venusCardQingReContinuousTurns(0), venusCardOutgoingUsed(),
	stageInTurn(0), cardDistribution(), cardHint(), spiritDistribution(),
	spiritBonus(), trainValue(), failRate()
{

}

TurnData::TurnData(const json& j)
{
	umaId = j.value("umaId", 0);
	turn = j.value("turn", 0);
	vital = j.value("vital", 0);
	maxVital = j.value("maxVital", 0);
	isQieZhe = j.value("isQieZhe", false);
	isAiJiao = j.value("isAiJiao", false);
	failureRateBias = j.value("failureRateBias", 0);
	fiveStatus = j.value("fiveStatus", vector<int>());
	fiveStatusLimit = j.value("fiveStatusLimit", vector<int>());
	skillPt = j.value("skillPt", 0);
	motivation = j.value("motivation", 0);
	cardId = j.value("cardId", vector<int>());
	cardLimitBreak.resize(6);
	for (int i = 0; i < 6; i++)
	{
		cardLimitBreak[i] = cardId[i] / 100000;
		cardId[i] = cardId[i] % 100000;
	}
	cardJiBan = j.value("cardJiBan", vector<int>());
	trainLevelCount = j.value("trainLevelCount", vector<int>());
	zhongMaBlueCount = j.value("zhongMaBlueCount", vector<int>());
	zhongMaExtraBonus = j.value("zhongMaExtraBonus", vector<int>());
	isRacing = j.value("isRacing", false);
	venusLevelYellow = j.value("venusLevelYellow", 0);
	venusLevelRed = j.value("venusLevelRed", 0);
	venusLevelBlue = j.value("venusLevelBlue", 0);
	venusSpiritsBottom = j.value("venusSpiritsBottom", vector<int>());
	venusSpiritsUpper = j.value("venusSpiritsUpper", vector<int>());
	venusAvailableWisdom = j.value("venusAvailableWisdom", 0);
	venusIsWisdomActive = j.value("venusIsWisdomActive", false);
	venusCardFirstClick = j.value("venusCardFirstClick", false);
	venusCardUnlockOutgoing = j.value("venusCardUnlockOutgoing", false);
	venusCardIsQingRe = j.value("venusCardIsQingRe", false);
	venusCardQingReContinuousTurns = j.value("venusCardQingReContinuousTurns", 0);
	venusCardOutgoingUsed = j.value("venusCardOutgoingUsed", vector<bool>());
	stageInTurn = j.value("stageInTurn", 0);
	cardDistribution = j.value("cardDistribution", vector<vector<bool>>());
	cardHint = j.value("cardHint", vector<bool>());
	spiritDistribution = j.value("spiritDistribution", vector<int>());

	if (j.contains("spiritBonus") && !j["spiritBonus"].is_null())
	{
		spiritBonus = j.value("spiritBonus", vector<int>());
	}
	else
	{
		spiritBonus = vector<int>();
	}

	trainValue = j.value("trainValue", vector<vector<int>>());
	failRate = j.value("failRate", vector<int>());
}
