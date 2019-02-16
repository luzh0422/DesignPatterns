//
// Created by Luzh on 2019/2/16.
//

#include "Display.h"
#include <iostream>

void Display::show() {
    for (int i = 0; i < getRows(); ++i) {
        std::cout << getRowText(i) << std::endl;
    }
}