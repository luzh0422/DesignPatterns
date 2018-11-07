//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_TEXTBUILDER_H
#define BUILDERMODE_TEXTBUILDER_H

#include "Builder.h"
#include <string>

class TextBuilder : public Builder {
private:
    std::string mResult;

public:
    void makeTitle(std::string) override;
    void makeString(std::string) override;
    void makeItems(std::string) override;
    void close() override;
    std::string getResult();
};

#endif //BUILDERMODE_TEXTBUILDER_H
