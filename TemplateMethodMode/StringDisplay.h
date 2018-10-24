//
// Created by Luzh on 2018/10/23.
//

#ifndef TEMPLATEMETHODMODE_STRINGDISPLAY_H
#define TEMPLATEMETHODMODE_STRINGDISPLAY_H

#include "AbstractDisplay.h"
#include <string>

class StringDislplay : public AbstractDisplay {
public:
    StringDislplay(std::string pString) : mString(pString) {}
    void open() override;
    void print() override;
    void close() override;
private:
    std::string mString;
};

#endif //TEMPLATEMETHODMODE_STRINGDISPLAY_H
