//
// Created by Luzh on 2019/1/31.
// According to the current hand value. calculate the hand value of the next round.
//

#ifndef STRATEGYMODE_PROBSTRATEGY_H
#define STRATEGYMODE_PROBSTRATEGY_H

#include "Strategy.h"
#include <vector>

class ProbStrategy : public Strategy {
public:
    ProbStrategy();
    Hand* nextHand() override;
    void study(bool win) override;

private:
    std::vector<std::vector<int> > history;
    int currentHandValue = 0;
    int prevHandValue = 0;
    int getSum(int handValue);
};

#endif //STRATEGYMODE_PROBSTRATEGY_H
