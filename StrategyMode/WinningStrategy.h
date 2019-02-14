//
// Created by Luzh on 2019/1/30.
//

#ifndef STRATEGYMODE_WINNINGSTRATEGY_H
#define STRATEGYMODE_WINNINGSTRATEGY_H

#include "Strategy.h"
#include "Hand.h"
#include <string>

class WinningStrategy : public Strategy {
public:
    Hand* nextHand() override;
    void study(bool win) override;
private:
    bool won = false;
    Hand* prevHand;
};

#endif //STRATEGYMODE_WINNINGSTRATEGY_H
