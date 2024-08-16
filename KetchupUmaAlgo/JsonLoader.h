#ifndef JSONLOADER_H
#define JSONLOADER_H

#include "TurnData.h"
#include "SupportCard.h"

TurnData GetThisTurn();
SupportCard GetSupportCard(int id, int limitBreak);

#endif // JSONLOADER_H
