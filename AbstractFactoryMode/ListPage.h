//
// Created by Luzh on 2018/11/20.
//

#ifndef ABSTRACTFACTORYMODE_LISTPAGE_H
#define ABSTRACTFACTORYMODE_LISTPAGE_H

#include "AbstractPage.h"
#include <string>

class ListPage : public AbstractPage {
public:
    ListPage(std::string title, std::string author) : AbstractPage(title, author) {}
    std::string makeHTML() override;
};

#endif //ABSTRACTFACTORYMODE_LISTPAGE_H
