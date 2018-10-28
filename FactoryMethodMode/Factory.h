//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_FACTORY_H
#define FACTORYMETHODMODE_FACTORY_H

#include <string>
#include "Project.h"

class Factory {
public:
    Project virtual *create(std::string owner) final;
protected:
    Project virtual *createProject(std::string owner) = 0;
    void virtual registerProject(Project*) = 0;
};

#endif //FACTORYMETHODMODE_FACTORY_H
