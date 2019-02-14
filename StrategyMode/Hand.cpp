//
// Created by Luzh on 2019/1/22.
//

#include "Hand.h"
#include <stdio.h>
#include <iostream>


std::vector<Hand* > Hand::hands = {
    new Hand(Hand::HANDVALUE_GUU),
    new Hand(Hand::HANDVALUE_CHO),
    new Hand(Hand::HANDVALUE_PAA)
};


Hand* Hand::getHand(int index) {
    if (index < 0 || index > 2) {
        std::cout << "The param of getHand must be greater than 0 and less than 3";
    }
    return hands[index];
}

bool Hand::isStrongerThan(Hand *h) {
    if (fight(h) == 1) {
        return true;
    } else {
        return false;
    }
}

bool Hand::isWeakerThan(Hand *h) {
    if (fight(h) == -1) {
        return true;
    } else {
        return false;
    }
}

int Hand::fight(Hand *h) {
    if (this == h) {
        return 0;
    } else if (handValue % 3 == h->handValue) {
        return 1;
    } else {
        return -1;
    }
}
