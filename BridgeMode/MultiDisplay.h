//
// Created by Luzh on 2018/12/1.
//

#ifndef BRIDGEMODE_MULTIDISPLAY_H
#define BRIDGEMODE_MULTIDISPLAY_H

#include "Display.h"
#include "DisplayImpl.h"

class MultiDisplay : public Display {
public:
    MultiDisplay(DisplayImpl* displayImpl) : Display(displayImpl) {}
    virtual void multiDisplay(int size) final;
};

#endif //BRIDGEMODE_MULTIDISPLAY_H
