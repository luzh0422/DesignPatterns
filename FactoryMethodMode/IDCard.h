//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_IDCARD_H
#define FACTORYMETHODMODE_IDCARD_H

#include "Project.h"
#include <string>

class IDCard : public Project {
public:
    IDCard(std::string owner) : mOwner(owner) {}
    void use() override;
    std::string getOwner() override;

private:
    std::string mOwner;
};

#endif //FACTORYMETHODMODE_IDCARD_H
