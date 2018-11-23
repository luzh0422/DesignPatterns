//
// Created by Luzh on 2018/11/19.
//

#ifndef ABSTRACTFACTORYMODE_ABSTRACTITEM_H
#define ABSTRACTFACTORYMODE_ABSTRACTITEM_H

#include <string>

class AbstractItem {
public:
    AbstractItem(std::string caption) : mCaption(caption) {}
    virtual std::string makeHTML() = 0;

private:
    std::string mCaption;
};

#endif //ABSTRACTFACTORYMODE_ABSTRACTITEM_H
