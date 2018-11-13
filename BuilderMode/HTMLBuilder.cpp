//
// Created by Luzh on 2018/11/7.
//

#include "HTMLBuilder.h"
#include <iostream>

void HTMLBuilder::makeTitle(std::string name) {
    fileName = name + ".html";
    mHTML.open(fileName);
}

void HTMLBuilder::makeItems(std::string* items, int length) {
    mHTML << "<ul>" << "\n";
    for (int i = 0; i < length; i++) {
        mHTML << "<li>" + *items + "</li>" << "\n";
        items++;
    }
    mHTML << "</ul>" << "\n";
}

void HTMLBuilder::makeString(std::string str) {
    mHTML << "<p>" + str + "</p>" << "\n";
}

void HTMLBuilder::close() {
    mHTML.close();
}