//
// Created by Luzh on 2020/4/28.
//

#include "BigCharFactory.h"

BigCharFactory* BigCharFactory::instance = NULL;

BigCharFactory::~BigCharFactory() {
    for (auto it = pool.begin(); it != pool.end(); it++) {
        delete it->second;
        it->second = NULL;
    }
    pool.clear();
}

BigCharFactory * BigCharFactory::getInstance() {
    if (instance == NULL) {
        instance = new BigCharFactory();
    }
    return instance;
}

void BigCharFactory::releaseInstance() {
    delete instance;
    instance = NULL;
}

BigChar * BigCharFactory::getBigChar(char charname) {
    if (pool.find(charname) != pool.end()) {
        return pool.find(charname)->second;
    } else {
        BigChar* bigChar = new BigChar(charname);
        pool.insert(std::map<char, BigChar*>::value_type(charname, bigChar));
        return bigChar;
    }
}
