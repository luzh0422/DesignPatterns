//
// Created by Luzh on 2019/2/19.
//

#include "Directory.h"
#include "Visitor.h"

std::string Directory::getName() {
    return mName;
}

int Directory::getSize() {
    int size = 0;
    for (auto it = mLists.begin(); it != mLists.end(); ++it) {
        size += (*it)->getSize();
    }
    return size;
}

void Directory::add(Entry *entry) {
    mLists.push_back(entry);
}

std::vector<Entry *>::iterator Directory::iterator() {
    return mLists.begin();
}

std::vector<Entry *>::iterator Directory::getEnd() {
    return mLists.end();
}

void Directory::accept(Visitor *visitor) {
    visitor->visit(this);
}


