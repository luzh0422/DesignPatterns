//
// Created by Luzh on 2018/10/23.
//

#include "StringDisplay.h"
#include <iostream>

void StringDislplay::open() {
    std::cout << "+++++++++++++" << std::endl;
}

void StringDislplay::print() {
    std::cout << "|" + mString + "|" << std::endl;
}

void StringDislplay::close() {
    std::cout << "+++++++++++++" << std::endl;
}

