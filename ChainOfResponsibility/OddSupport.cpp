//
// Created by Luzh on 2019-02-25.
//

#include "OddSupport.h"

bool OddSupport::resolve(Problem *problem) {
    if (problem->getNumber() % 2 != 0) {
        return true;
    } else {
        return false;
    }
}
