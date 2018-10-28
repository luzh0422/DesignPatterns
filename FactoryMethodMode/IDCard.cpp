//
// Created by Luzh on 2018/10/28.
//

#include "IDCard.h"
#include <iostream>

void IDCard::use() {
    std::cout << "使用" + mOwner + "的ID卡" << std::endl;
}

std::string IDCard::getOwner() {
    return mOwner;
}


