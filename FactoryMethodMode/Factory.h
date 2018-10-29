//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_FACTORY_H
#define FACTORYMETHODMODE_FACTORY_H

#include <string>
#include "Project.h"

class Factory {
public:
    virtual Project* create(std::string owner) final;
protected:
    virtual Project* createProject(std::string owner) = 0;
    virtual void registerProject(Project*) = 0;
};

#endif //FACTORYMETHODMODE_FACTORY_H
