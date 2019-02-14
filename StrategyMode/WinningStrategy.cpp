//
// Created by Luzh on 2019/1/30.
//

#include "WinningStrategy.h"
#include "stdio.h"

Hand* WinningStrategy::nextHand() {
    if (won) {
        return prevHand;
    }
    prevHand = Hand::getHand(0 + random() % 3);
    return prevHand;
}

void WinningStrategy::study(bool win) {
    won = win;
}
