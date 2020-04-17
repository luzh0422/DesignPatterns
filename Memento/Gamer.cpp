//
// Created by Luzh on 2020/4/16.
//

#include "Gamer.h"
#include "Memento.h"
#include <iostream>

int Gamer::getMoney() {
    return this->mMoney;
}

void Gamer::bet() {
    int dice = random() % 6 + 1;
    if (dice == 1) {
        mMoney += 100;
        std::cout << "金钱增加了." << std::endl;
    } else if (dice == 2) {
        mMoney /= 2;
        std::cout << "所持金钱减半了." << std::endl;
    } else if (dice == 6) {
        std::string fruit = getFruit();
        mFruits.push_back(fruit);
        std::cout << "获得了水果(" + fruit + ")" << std::endl;
    } else {
        std::cout << "什么都没发生" << std::endl;
    }
}

Memento * Gamer::createMemento() {
    Memento* m = new Memento(this->mMoney);
    std::vector<std::string>::iterator it = mFruits.begin();
    while(it != mFruits.end()) {
        if ((*it).substr(0, 3) == "好吃的") {
            m->addFruit(*it);
        }
        it++;
    }
}

void Gamer::restoreMemento(Memento *m) {
    this->mMoney = m->mMoney;
    this->mFruits = m->mFruits;
}

std::string Gamer::getFruit() {
    std::string prefix = "";
    if (random() % 2 == 1) {
        prefix = "好吃的";
    }
    return prefix + fruitsname[random() % fruitsname.size()];
}

std::string Gamer::toString() {
    std::string res = "";
    res += "当前持有金钱: ";
    res += std::to_string(mMoney);
    res += " ,当前拥有水果: ";
    for (auto it = mFruits.begin(); it != mFruits.end(); it++) {
        res += *it;
        res += " ";
    }
    return res;
}
