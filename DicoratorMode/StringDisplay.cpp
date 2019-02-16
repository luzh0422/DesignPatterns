//
// Created by Luzh on 2019/2/16.
//

#include "StringDisplay.h"

int StringDisplay::getRows() {
    return 1;
}

int StringDisplay::getColumns() {
    return mString.length();
}

std::string StringDisplay::getRowText(int n) {
    if (n == 0) {
        return mString;
    } else {
        return "";
    }
}
