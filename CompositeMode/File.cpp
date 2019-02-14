//
// Created by Luzh on 2019/2/11.
//
#include "File.h"
#include <iostream>

void File::printList() {
    Entry::printList();
}

void File::printList(std::string prefix) {
    std::cout << prefix + "/" + this->getName() << std::endl;
}

int File::getSize() {
    return mSize;
}

