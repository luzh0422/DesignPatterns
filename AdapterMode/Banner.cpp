//
// Created by Luzh on 2018/10/22.
//

#include "Banner.h"
#include <iostream>

void Banner::printWithPattern() {
    std::cout << "(" + mString + ")" << std::endl;
}

void Banner::printWithAsterisk() {
    std::cout << "*" + mString + "*" << std::endl;
}

