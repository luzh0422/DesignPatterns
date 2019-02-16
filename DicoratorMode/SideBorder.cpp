//
// Created by Luzh on 2019/2/16.
//

#include "SideBorder.h"

SideBorder::SideBorder(Display *display, char borderChar) : Border(display) {
    mBorderChar = borderChar;
}

int SideBorder::getRows() {
    return mDisplay->getRows();
}

int SideBorder::getColumns() {
    return mDisplay->getColumns() + 2;
}

std::string SideBorder::getRowText(int n) {
    return mBorderChar + mDisplay->getRowText(n) + mBorderChar;
}

