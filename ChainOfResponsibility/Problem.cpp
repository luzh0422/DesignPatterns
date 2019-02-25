//
// Created by Luzh on 2019/2/25.
//

#include "Problem.h"

int Problem::getNumber() {
    return num;
}

std::string Problem::getName() {
    return "problem[" + std::to_string(num) + "]";
}
