#include <iostream>
#include "ListFactory.h"
#include "ListLink.h"
#include "ListFactory.h"


int main() {
    ListFactory* listFactory = new ListFactory();
    std::shared_ptr<ListLink> people(listFactory->getLink("人民日报", "http://www.people.com.cn/"));
    std::shared_ptr<ListLink> gmw(listFactory->getLink("光明日报", "http://www..gmw.cn/"));

    std::shared_ptr<ListTray> traynews(listFactory->getTray("日报"));
    traynews->addItem(people.get());
    traynews->addItem(gmw.get());

    std::shared_ptr<ListPage> page(listFactory->getPage("LinkPage", "a"));
    page->add(traynews.get());
    page->output();
    people.reset();
    gmw.reset();
    traynews.reset();
    page.reset();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}