//
// Created by Luzh on 2018/11/7.
//

#include "Director.h"

void Director::construct() {
    mBuilder->makeTitle("Greeting");
    mBuilder->makeString("从早上到下午");
    mBuilder->makeItems("晚上");
    mBuilder->close();
}

