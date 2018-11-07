//
// Created by Luzh on 2018/11/1.
//

#include "Manager.h"
#include <iostream>

void Manager::registerProduct(std::string name, Product* p) {
    if (mProductMap.find(name) != mProductMap.end()) {
        std::cout << "The " + name + " has been registered" << std::endl;
        return;
    }
    mProductMap.insert(ProductMap::value_type(name, p));
    return;
}

Product* Manager::create(std::string name) {
    ProductMap::iterator it = mProductMap.find(name);
    if (it == mProductMap.end()) {
        std::cout << "The " + name + " has not been registered" << std::endl;
        return nullptr;
    }
    return it->second->createClone();
}

