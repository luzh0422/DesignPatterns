//
// Created by Luzh on 2018/10/23.
//

#include "CharDisplay.h"
#include <iostream>

void CharDisplay::open() {
    std::cout << "<<";
}

void CharDisplay::print() {
    std::cout << mChar;
}

void CharDisplay::close() {
    std::cout << ">>" << std::endl;
}

