//
// Created by Luzh on 2018/11/22.
//

#include "ListFactory.h"

ListLink* ListFactory::getLink(string caption, string url) {
    return new ListLink(caption, url);
}

ListPage* ListFactory::getPage(string title, string author) {
    return new ListPage(title, author);
}

ListTray* ListFactory::getTray(string caption) {
    return new ListTray(caption);
}

