//
// Created by Luzh on 2020/4/28.
//

#include "BigString.h"
#include "BigCharFactory.h"

BigString::~BigString() {
    bigchars.clear();
}

BigString::BigString(std::string s) {
    BigCharFactory* bigCharFactory = BigCharFactory::getInstance();
    for (int i = 0; i < s.size(); i++) {
        bigchars.push_back(bigCharFactory->getBigChar(s[i]));
    }
}

void BigString::print() {
    for (int i = 0; i < bigchars.size(); i++) {
        bigchars[i]->print();
    }
}