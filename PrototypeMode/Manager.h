//
// Created by Luzh on 2018/11/1.
//

#ifndef PROTOTYPEMODE_MANAGER_H
#define PROTOTYPEMODE_MANAGER_H

#include <map>
#include <string>
#include "Product.h"

typedef std::map<std::string, Product* > ProductMap;

class Manager {
private:
    ProductMap mProductMap;
public:
    void registerProduct(std::string, Product*);
    Product* create(std::string);
};

#endif //PROTOTYPEMODE_MANAGER_H
