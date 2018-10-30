//
// Created by Luzh on 2018/10/30.
//

#include "Singleton.h"
#include <iostream>

Singleton* Singleton::mSingleton = nullptr;

Singleton::Singleton() {

}

Singleton::~Singleton() {

}

Singleton* Singleton::getInstance() {
    if (mSingleton == nullptr) {
        mSingleton = new Singleton();
    }
    return mSingleton;
}

void Singleton::releaseInstance() {
    if (mSingleton != nullptr) {
        delete mSingleton;
        mSingleton = nullptr;
    }
}

void Singleton::show() {
    std::cout << "This is a singleton class" << std::endl;
}

