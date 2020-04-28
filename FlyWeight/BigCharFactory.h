//
// Created by Luzh on 2020/4/28.
//

#ifndef FLYWEIGHT_BIGCHARFACTORY_H
#define FLYWEIGHT_BIGCHARFACTORY_H

#include "BigChar.h"
#include <map>

class BigCharFactory {
private:
    BigCharFactory() {};
    ~BigCharFactory();
    std::map<char, BigChar*> pool = {};

public:
    static BigCharFactory* getInstance();
    static void releaseInstance();
    static BigCharFactory* instance;
    BigChar* getBigChar(char charname);
};


#endif //FLYWEIGHT_BIGCHARFACTORY_H
