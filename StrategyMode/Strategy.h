//
// Created by Luzh on 2019/1/30.
//

#ifndef STRATEGYMODE_STRATEGY_H
#define STRATEGYMODE_STRATEGY_H

#include "Hand.h"

class Strategy {
public:
    virtual Hand* nextHand() = 0;
    virtual void study(bool win) = 0;
};

#endif //STRATEGYMODE_STRATEGY_H
