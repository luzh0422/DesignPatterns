//
// Created by Luzh on 2018/12/1.
//

#include "MultiDisplay.h"

void MultiDisplay::multiDisplay(int size) {
    open();
    for (int i = 0; i < size; i++) {
        print();
    }
    close();
}

