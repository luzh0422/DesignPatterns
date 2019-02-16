//
// Created by Luzh on 2019/2/16.
//

#include "FullBorder.h"

int FullBorder::getRows() {
    return mDisplay->getRows() + 2;
}

int FullBorder::getColumns() {
    return mDisplay->getColumns() + 2;
}

std::string FullBorder::getRowText(int n) {
    if (n == 0 || n == getRows() - 1) {
        return "+" + makeLine() + "+";
    } else {
        return "+" + mDisplay->getRowText(n - 1) + "+";
    }
}

std::string FullBorder::makeLine() {
    std::string res;
    for (int i = 0; i < mDisplay->getColumns(); ++i) {
        res += "-";
    }
    return res;
}
