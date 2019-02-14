//
// Created by Luzh on 2019/1/31.
//

#ifndef STRATEGYMODE_PLAYER_H
#define STRATEGYMODE_PLAYER_H

#include <string>
#include "Strategy.h"
#include "Hand.h"

class Player {
public:
    Player(std::string name, Strategy* strategy);
    Hand* nextHand();
    void win();
    void lose();
    void even();
    void toString();

private:
    int gameCount = 0;
    int loseCount = 0;
    int winCount = 0;
    std::string mName;
    Strategy* mStrategy;
};

#endif //STRATEGYMODE_PLAYER_H
