//
// Created by Luzh on 2018/10/28.
//

#include "Factory.h"

Project* Factory::create(std::string owner) {
    Project* p = createProject(owner);
    registerProject(p);
    return p;
}
