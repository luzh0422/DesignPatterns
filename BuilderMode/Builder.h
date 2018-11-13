//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_BUILDER_H
#define BUILDERMODE_BUILDER_H

#include <string>
#include <vector>

class Builder {
public:
    virtual void makeTitle(std::string a) = 0;
    virtual void makeItems(std::string *b, int length) = 0;
    virtual void makeString(std::string c) = 0;
    virtual void close() = 0;
};

#endif //BUILDERMODE_BUILDER_H
