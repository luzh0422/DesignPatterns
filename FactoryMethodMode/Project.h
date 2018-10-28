//
// Created by Luzh on 2018/10/28.
//

#ifndef FACTORYMETHODMODE_PROJECT_H
#define FACTORYMETHODMODE_PROJECT_H

#include <string>

class Project {
public:
    void virtual use() = 0;
    std::string virtual getOwner() = 0;
};

#endif //FACTORYMETHODMODE_PROJECT_H
