//
// Created by Luzh on 2018/11/19.
//

#ifndef ABSTRACTFACTORYMODE_ABSTRACTPAGE_H
#define ABSTRACTFACTORYMODE_ABSTRACTPAGE_H

#include <string>
#include <vector>
#include "./AbstractItem.h"

class AbstractPage {
public:
    AbstractPage(std::string title, std::string author) : mTitle(title), mAuthor(author) {}
    void add(AbstractItem* item);

    virtual void output() final;

    virtual std::string makeHTML() = 0;


protected:
    std::string mTitle;
    std::string mAuthor;
    std::vector<AbstractItem* > mContent;
};

#endif //ABSTRACTFACTORYMODE_ABSTRACTPAGE_H
