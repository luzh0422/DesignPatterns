//
// Created by Luzh on 2019/1/31.
//

#include "ProbStrategy.h"
#include <vector>
#include <stdio.h>

ProbStrategy::ProbStrategy() {
    std::vector<int> v = {1, 1, 1};
    for (int i = 0; i < 3; i++) {
        history.push_back(v);
    }
}

Hand* ProbStrategy::nextHand() {
    int bet = random() % (getSum(currentHandValue));
    int handValue = 0;
    if (bet < history[currentHandValue][0]) {
        handValue = 0;
    } else if (bet < history[currentHandValue][0] + history[handValue][1]) {
        handValue = 1;
    } else if (bet < history[currentHandValue][0] + history[handValue][1] + history[handValue][2]){
        handValue = 2;
    }
    prevHandValue = currentHandValue;
    currentHandValue = handValue;
    return Hand::getHand(currentHandValue);
}

void ProbStrategy::study(bool win) {
    if (win) {
        history[prevHandValue][currentHandValue] += 1;
    } else {
        history[prevHandValue][(currentHandValue + 1) % 3] += 1;
        history[prevHandValue][(currentHandValue + 2) % 3] += 1;
    }
}

int ProbStrategy::getSum(int handValue) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += history[handValue][i];
    }
    return sum;
}

