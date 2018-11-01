//
// Created by Luzh on 2018/10/30.
//

#include "Singleton.h"
#include <iostream>

Singleton* Singleton::mSingleton = nullptr;

Singleton::Singleton() {
    std::cout << "This is a Singleton Class" << std::endl;
}

Singleton::~Singleton() {
    delete mSingleton;
    mSingleton = nullptr;
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
    std::cout << "This is showFunction of the singleton Class" << std::endl;
}

