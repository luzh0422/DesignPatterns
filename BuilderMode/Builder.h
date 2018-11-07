//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_BUILDER_H
#define BUILDERMODE_BUILDER_H

#include <string>

class Builder {
public:
    virtual void makeTitle(std::string) = 0;
    virtual void makeItems(std::string) = 0;
    virtual void makeString(std::string) = 0;
    virtual void close();
};

#endif //BUILDERMODE_BUILDER_H
