//
// Created by Luzh on 2019-02-25.
//

#include "LimitSupport.h"

bool LimitSupport::resolve(Problem *problem) {
    if (problem->getNumber() == mLimit) {
        return true;
    } else {
        return false;
    }
}
