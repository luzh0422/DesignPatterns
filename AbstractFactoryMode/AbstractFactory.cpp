//
// Created by Luzh on 2019/1/17.
//

#include "./AbstractFactory.h"
#include "./ListFactory.h"

AbstractFactory* AbstractFactory::createFactory(AbstractFactory::FACTORY_TYPE type) {
    AbstractFactory* pFactory = nullptr;
    switch(type) {
        case FACTORY_TYPE::listfactory:
            pFactory = new ListFactory();
            break;
        default:
            break;
    }
    return pFactory;
}

