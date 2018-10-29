//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_PROJECT_H
#define FACTORYMETHODMODE_PROJECT_H

#include <string>

class Project {
public:
    virtual void use() = 0;
    virtual std::string getOwner() = 0;
};

#endif //FACTORYMETHODMODE_PROJECT_H
