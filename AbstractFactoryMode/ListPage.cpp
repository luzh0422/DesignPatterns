//
// Created by Luzh on 2018/11/20.
//

#include "ListPage.h"
#include "AbstractItem.h"
#include <vector>

std::string ListPage::makeHTML() {
    std::string content;
    content = content + "<html><head><title>" + mTitle + "</title></head>\n";
    content = content + "<body>";
    content = content + "<h1>" + mTitle + "</h1>\n";
    content += "<ul>\n";
    std::vector<AbstractItem* >::iterator it;
    for (it = mContent.begin(); it != mContent.end(); it++) {
        content += (*it)->makeHTML();
    }
    content += "</ul>";
    content += "</body></html>";
    return content;
}

