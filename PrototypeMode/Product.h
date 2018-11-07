//
// Created by Luzh on 2018/11/1.
//

#ifndef PROTOTYPEMODE_PRODUCT_H
#define PROTOTYPEMODE_PRODUCT_H

#include <string>

using std::string;

class Product {
public:
    virtual Product* createClone() = 0;
    virtual void use(string str) = 0;
};

#endif //PROTOTYPEMODE_PRODUCT_H
