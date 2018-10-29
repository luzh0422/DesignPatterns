//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_IDCARDFACTORY_H
#define FACTORYMETHODMODE_IDCARDFACTORY_H

#include "Factory.h"
#include <string>
#include <vector>

class IDCardFactory : public Factory {
protected:
    Project* createProject(std::string owner) override;
    void registerProject(Project *p) override;

private:
    std::vector<std::string > mOwners;
};

#endif //FACTORYMETHODMODE_IDCARDFACTORY_H
