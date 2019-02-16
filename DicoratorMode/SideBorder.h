//
// Created by Luzh on 2019/2/16.
//

#ifndef DICORATORMODE_SIDEBORDER_H
#define DICORATORMODE_SIDEBORDER_H

#include "Border.h"

class SideBorder : public Border {
public:
    SideBorder(Display *display, char borderChar);
    int getRows() override;
    int getColumns() override;
    std::string getRowText(int n) override;

private:
    char mBorderChar;
};


#endif //DICORATORMODE_SIDEBORDER_H
