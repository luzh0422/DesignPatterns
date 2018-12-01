//
// Created by Luzh on 2018/12/1.
//

#include "Display.h"

void Display::open() {
    mDisplayImpl->rawOpen();
}

void Display::print() {
    mDisplayImpl->rawPrint();
}

void Display::close() {
    mDisplayImpl->rawClose();
}

void Display::display() {
    open();
    print();
    close();
}

