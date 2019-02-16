//
// Created by Luzh on 2019/2/16.
//

#ifndef DICORATORMODE_FULLBORDER_H
#define DICORATORMODE_FULLBORDER_H

#include "Border.h"
#include <string>

class FullBorder : public Border {
public:
    FullBorder(Display *display) : Border(display) {}
    int getRows() override;
    int getColumns() override;
    std::string getRowText(int n) override;

private:
    std::string makeLine();
};


#endif //DICORATORMODE_FULLBORDER_H
