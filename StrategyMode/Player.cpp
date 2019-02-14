//
// Created by Luzh on 2019/1/31.
//

#include "Player.h"
#include <iostream>

Player::Player(std::string name, Strategy* strategy) {
    mName = name;
    mStrategy = strategy;
}

Hand* Player::nextHand() {
    return mStrategy->nextHand();
}

void Player::win() {
    mStrategy->study(true);
    winCount++;
    gameCount++;
}

void Player::lose() {
    mStrategy->study(false);
    loseCount++;
    gameCount++;
}

void Player::even() {
    mStrategy->study(false);
    gameCount++;
}

void Player::toString() {
    std::cout << mName + ": " + std::to_string(gameCount) + " games, " + std::to_string(winCount) + " win, " + std::to_string(loseCount) + " lose." << std::endl;
}
