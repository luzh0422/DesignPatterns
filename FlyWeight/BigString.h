//
// Created by Luzh on 2020/4/28.
//

#ifndef FLYWEIGHT_BIGSTRING_H
#define FLYWEIGHT_BIGSTRING_H

#include <vector>
#include <string>

#include "BigChar.h"

class BigString {
private:
    std::vector<BigChar*> bigchars = {};

public:
    BigString(std::string s);
    ~BigString();
    void print();

};


#endif //FLYWEIGHT_BIGSTRING_H
