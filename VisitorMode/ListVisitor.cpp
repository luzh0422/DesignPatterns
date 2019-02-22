//
// Created by Luzh on 2019/2/21.
//

#include <iostream>
#include "Entry.h"
#include "ListVisitor.h"

void ListVisitor::visit(File *file) {
    std::cout << currentDir + "/" + file->getName() + " (" + std::to_string(file->getSize()) + ")" << std::endl;
}

void ListVisitor::visit(Directory *directory) {
    std::cout << currentDir + "/" + directory->getName() << std::endl;
    std::string saveDir = currentDir;
    currentDir = currentDir + "/" + directory->getName();
    for (auto it = directory->iterator(); it != directory->getEnd(); ++it) {
        Entry *entry = *it;
        entry->accept(this);
    }
    currentDir = saveDir;
}
