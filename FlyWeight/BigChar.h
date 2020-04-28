//
// Created by Luzh on 2020/4/28.
//

#ifndef FLYWEIGHT_BIGCHAR_H
#define FLYWEIGHT_BIGCHAR_H

#include <string>

using namespace std;

class BigChar {
public:
    BigChar(char name);
    void print() const;

private:
    string fontData = "";
};


#endif //FLYWEIGHT_BIGCHAR_H
