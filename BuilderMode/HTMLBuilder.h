//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_HTMLBUILDER_H
#define BUILDERMODE_HTMLBUILDER_H

#include "Builder.h"
#include <string>
#include <vector>
#include <fstream>

class HTMLBuilder : public Builder {
public:
    void makeTitle(std::string name) override;
    void makeItems(std::string* items, int lenth) override;
    void makeString(std::string str) override;
    void close() override;

private:
    std::ofstream mHTML;
    std::string fileName;
};

#endif //BUILDERMODE_HTMLBUILDER_H
