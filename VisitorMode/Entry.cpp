//
// Created by Luzh on 2019/2/20.
//

#include "Entry.h"

void Entry::add(Entry *entry) {
    return;
}

std::string Entry::toString() {
    return getName() + "(" + std::to_string(getSize()) + ")";
}

