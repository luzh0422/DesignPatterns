//
// Created by Luzh on 2018/11/20.
//

#include "ListTray.h"
#include "AbstractItem.h"
#include <string>
#include <vector>

string ListTray::makeHTML() {
    std::string content;
    std::vector<AbstractItem* >::iterator it;
    content = content + "<li>\n<ul>\n";
    for (it = mItems.begin(); it != mItems.end(); it++) {
        content = content + (*it)->makeHTML();
    }
    content = content + "</ul>\n</li>\n";
    return content;
}

