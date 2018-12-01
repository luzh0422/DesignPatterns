//
// Created by Luzh on 2018/12/1.
//

#include "StringDisplayImpl.h"
#include <iostream>

void StringDisplayImpl::rawOpen() {
    printLine();
}

void StringDisplayImpl::rawPrint() {
    std::cout << "|" + mStr + "|" << std::endl;
}

void StringDisplayImpl::rawClose() {
    printLine();
}

void StringDisplayImpl::printLine() {
    std::cout << "+";
    for (int i = 0; i < mWidth; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;
}

