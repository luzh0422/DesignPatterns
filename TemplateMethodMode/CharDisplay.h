//
// Created by Luzh on 2018/10/23.
//

#ifndef TEMPLATEMETHODMODE_CHARDISPLAY_H
#define TEMPLATEMETHODMODE_CHARDISPLAY_H

#include "AbstractDisplay.h"

class CharDisplay : public AbstractDisplay {
public:
    CharDisplay(char pChar) : mChar(pChar) {}
protected:
    void open();
    void print();
    void close();
private:
    char mChar;
};

#endif //TEMPLATEMETHODMODE_CHARDISPLAY_H
