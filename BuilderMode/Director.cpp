//
// Created by Luzh on 2018/11/7.
//

#include "Director.h"

void Director::construct() {
    mBuilder->makeTitle();
    mBuilder->makeItems();
    mBuilder->makeString();
    mBuilder->close();
}

