//
// Created by Luzh on 2018/11/1.
//

#include "MessageBox.h"
#include <iostream>

Product* MessageBox::createClone() {
    return new MessageBox(*this);
}

void MessageBox::use(std::string str) {
    int length = str.length();
    for (int i = 0; i < length + 4; i++) {
        std::cout << mDecochar;
    }
    std::cout<< std::endl;
    std::cout << mDecochar + " " + str + " " + mDecochar;
    std::cout << std::endl;
    for (int i = 0; i < length + 4; i++) {
        std::cout << mDecochar;
    }
    std::cout << std::endl;
}

