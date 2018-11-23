//
// Created by Luzh on 2018/11/20.
//

#include "AbstractPage.h"
#include <fstream>
#include <iostream>

void AbstractPage::add(AbstractItem *item) {
    mContent.push_back(item);
}

void AbstractPage::output() {
    std::string fileName = mTitle + ".html";
    std::ofstream html;
    html.open(fileName);
    html << this->makeHTML();
    html.close();
    std::cout << fileName + "编写完成" << std::endl;
}

