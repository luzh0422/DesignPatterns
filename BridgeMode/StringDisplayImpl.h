//
// Created by Luzh on 2018/12/1.
//

#ifndef BRIDGEMODE_STRINGDISPLAYIMPL_H
#define BRIDGEMODE_STRINGDISPLAYIMPL_H

#include <string>
#include "DisplayImpl.h"

class StringDisplayImpl : public DisplayImpl{
public:
    StringDisplayImpl(std::string str) : mStr(str), DisplayImpl() {
        mWidth = str.length();
    }

    void rawOpen() override;
    void rawPrint() override;
    void rawClose() override;

private:
    std::string mStr;
    int mWidth;
    void printLine();
};

#endif //BRIDGEMODE_STRINGDISPLAYIMPL_H
