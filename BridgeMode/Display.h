//
// Created by Luzh on 2018/12/1.
//

#ifndef BRIDGEMODE_DISPLAY_H
#define BRIDGEMODE_DISPLAY_H

#include "./DisplayImpl.h"

class Display {
public:
    Display(DisplayImpl *displayImpl) : mDisplayImpl(displayImpl) {}
    void open();
    void print();
    void close();
    virtual void display() final;

private:
    DisplayImpl* mDisplayImpl;
};

#endif //BRIDGEMODE_DISPLAY_H
