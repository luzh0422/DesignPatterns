//
// Created by Luzh on 2019/2/16.
//

#ifndef DICORATORMODE_BORDER_H
#define DICORATORMODE_BORDER_H

#include "Display.h"

class Border : public Display {
public:
    Border(Display *display) : mDisplay(display) {}

protected:
    Display *mDisplay;
};


#endif //DICORATORMODE_BORDER_H
