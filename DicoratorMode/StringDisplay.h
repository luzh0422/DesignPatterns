//
// Created by Luzh on 2019/2/16.
//

#ifndef DICORATORMODE_STRINGDISPLAY_H
#define DICORATORMODE_STRINGDISPLAY_H

#include "Display.h"
#include <string>

class StringDisplay : public Display {
public:
    StringDisplay(std::string str) : mString(str) {}
    int getRows() override;
    int getColumns() override;
    std::string getRowText(int n) override;

private:
    std::string mString;
};


#endif //DICORATORMODE_STRINGDISPLAY_H
