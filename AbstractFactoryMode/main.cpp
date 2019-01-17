#include <iostream>
//#include "ListFactory.h"
//#include "ListLink.h"
//#include "ListFactory.h"
#include "AbstractFactory.h"
#include "AbstractLink.h"
#include "AbstractTray.h"
#include "AbstractPage.h"

int main() {
    AbstractFactory* listFactory = AbstractFactory::createFactory(AbstractFactory::FACTORY_TYPE::listfactory);
    std::shared_ptr<AbstractLink> people(listFactory->getLink("人民日报", "http://www.people.com.cn/"));
    std::shared_ptr<AbstractLink> gmw(listFactory->getLink("光明日报", "http://www..gmw.cn/"));

    std::shared_ptr<AbstractTray> traynews(listFactory->getTray("日报"));
    traynews->addItem(people.get());
    traynews->addItem(gmw.get());

    std::shared_ptr<AbstractPage> page(listFactory->getPage("LinkPage", "a"));
    page->add(traynews.get());
    page->output();
    people.reset();
    gmw.reset();
    traynews.reset();
    page.reset();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}