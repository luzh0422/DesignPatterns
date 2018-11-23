//
// Created by Luzh on 2018/11/19.
//

#ifndef ABSTRACTFACTORYMODE_ABSTRACTLINK_H
#define ABSTRACTFACTORYMODE_ABSTRACTLINK_H

#include "AbstractItem.h"
#include <string>

class AbstractLink : public AbstractItem{
public:
    AbstractLink(std::string url, std::string caption) : AbstractItem(caption), mUrl(url), mCaption(caption) {}

protected:
    std::string mUrl;
    std::string mCaption;
};

#endif //ABSTRACTFACTORYMODE_ABSTRACTLINK_H
