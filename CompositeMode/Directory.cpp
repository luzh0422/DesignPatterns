//
// Created by Luzh on 2019/2/11.
//

#include "Directory.h"
#include <iostream>

void Directory::add(Entry *entry) {
    mLists.push_back(entry);
}

void Directory::printList() {
    Entry::printList();
}

void Directory::printList(std::string prefix) {
    std::cout<< prefix + "/" + this->getName();
    for (auto it = mLists.begin(); it != mLists.end(); it++) {
        (*it)->printList();
    }
}

int Directory::getSize() {
    return 0;
}
