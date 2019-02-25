//
// Created by Luzh on 2019-02-25.
//

#include "Support.h"
#include <iostream>

Support* Support::setNext(Support *next) {
    mNext = next;
    return next;
}

void Support::support(Problem *problem) {
    if (resolve(problem)) {
        done(problem);
    } else if (mNext != nullptr){
        mNext->support(problem);
    } else {
        fail(problem);
    }
}

std::string Support::getName() {
    return "[" + mName + "]";
}

void Support::done(Problem *problem) {
    std::cout << problem->getName() + " is resolved by " + getName() + "." << std::endl;
}

void Support::fail(Problem *problem) {
    std::cout << "Failed to resolve " + problem->getName() + "." << std::endl;
}
