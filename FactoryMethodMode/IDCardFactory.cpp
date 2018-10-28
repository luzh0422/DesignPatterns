//
// Created by Luzh on 2018/10/28.
//

#include "IDCardFactory.h"
#include "IDCard.h"

Project* IDCardFactory::createProject(std::string owner) {
    return new IDCard(owner);
}

void IDCardFactory::registerProject(Project *p) {
    mOwners.push_back(p->getOwner());
}

