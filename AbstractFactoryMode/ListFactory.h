//
// Created by Luzh on 2018/11/22.
//

#ifndef ABSTRACTFACTORYMODE_LISTFACTORY_H
#define ABSTRACTFACTORYMODE_LISTFACTORY_H

#include "AbstractFactory.h"
#include "ListLink.h"
#include "ListTray.h"
#include "ListPage.h"
#include <string>

using std::string;

class ListFactory : public AbstractFactory {
public:
    ListLink* getLink(string caption, string url) override;
    ListTray* getTray(string caption) override;
    ListPage* getPage(string title, string author) override;
};

#endif //ABSTRACTFACTORYMODE_LISTFACTORY_H
