//
// Created by Luzh on 2018/11/20.
//

#include "ListLink.h"

std::string ListLink::makeHTML() {
    return "<li><a href=\"" + mUrl + "\">" + mCaption + "</a></li>\n";
}

