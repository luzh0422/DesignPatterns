//
// Created by Luzh on 2019/2/16.
//

#ifndef DICORATORMODE_DISPLAY_H
#define DICORATORMODE_DISPLAY_H

#include <string>

class Display {
public:
    virtual int getRows() = 0;
    virtual int getColumns() = 0;
    virtual std::string getRowText(int n) = 0;
    virtual void show() final;
};

#endif //DICORATORMODE_DISPLAY_H
