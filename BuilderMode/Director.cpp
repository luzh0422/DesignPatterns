//
// Created by Luzh on 2018/11/7.
//

#include "Director.h"
#include <string>

void Director::construct() {
    mBuilder->makeTitle("Greeting");
    mBuilder->makeString("从早上至下午");
    std::string str[2] = {"早上好", "下午好"};
    mBuilder->makeItems(str, 2);
    mBuilder->makeString("晚上");
    std::string str1[3] = {
        "晚上好.",
        "晚安",
        "再见",
    };
    mBuilder->makeItems(str1, 3);
    mBuilder->close();
}

