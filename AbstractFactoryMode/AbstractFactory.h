//
// Created by Luzh on 2018/11/19.
//

#ifndef ABSTRACTFACTORYMODE_ABSTRACTFACTORY_H
#define ABSTRACTFACTORYMODE_ABSTRACTFACTORY_H

#include "./AbstractItem.h"
#include "./AbstractLink.h"
#include "./AbstractTray.h"
#include "./AbstractPage.h"
#include <string>

using std::string;

class AbstractFactory {
public:
    virtual AbstractLink* getLink(string caption, string url) = 0;
    virtual AbstractTray* getTray(string caption) = 0;
    virtual AbstractPage* getPage(string title, string author) = 0;
};

#endif //ABSTRACTFACTORYMODE_ABSTRACTFACTORY_H
