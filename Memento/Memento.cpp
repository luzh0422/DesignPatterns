//
// Created by Luzh on 2020/4/16.
//

#include "Memento.h"

void Memento::addFruit(std::string fruit) {
    mFruits.push_back(fruit);
}

int Memento::getMoney() {
    return mMoney;
}