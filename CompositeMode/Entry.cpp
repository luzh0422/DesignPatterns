//
// Created by Luzh on 2019/2/8.
//

#include "Entry.h"
#include <iostream>

std::string Entry::getName() {
    return mName;
}

void Entry::printList() {
    printList("");
}

void Entry::add(Entry *entry) {
    std::cout << "The function do nothing" << std::endl;
}
