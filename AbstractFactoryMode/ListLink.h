//
// Created by Luzh on 2018/11/20.
//

#ifndef ABSTRACTFACTORYMODE_LISTLINK_H
#define ABSTRACTFACTORYMODE_LISTLINK_H

#include "AbstractLink.h"
#include <string>

using std::string;

class ListLink : public AbstractLink {
public:
    ListLink(string caption, string url) : AbstractLink(caption, url) {}
    std::string makeHTML() override;
};


#endif //ABSTRACTFACTORYMODE_LISTLINK_H
