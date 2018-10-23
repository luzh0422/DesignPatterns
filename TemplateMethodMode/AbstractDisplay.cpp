//
// Created by Luzh on 2018/10/23.
//

#include "AbstractDisplay.h"

void AbstractDisplay::display() {
    open();
    for (int i = 0; i < 5; i++) {
        print();
    }
    close();
}