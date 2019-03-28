//
// Created by Luzh on 2019-03-28.
//

#include "ConcreteMediator.h"

ConcreteMediator::ConcreteMediator() {
    createColleagues();
}

void ConcreteMediator::createColleagues() {
    mConcreteColleague1 = new ConcreteColleague1();
    mConcreteColleague1->setMediator(this);
    mConcreteColleague2 = new ConcreteColleague2();
    mConcreteColleague2->setMediator(this);
}

void ConcreteMediator::colleagueChanged(int num) {
    if (num == 1) {
        mConcreteColleague2->send("hi, 1");
    } else if (num == 2) {
//        mConcreteColleague1->send("hello, 2");
    }
}

ConcreteMediator::~ConcreteMediator() {
    delete mConcreteColleague1;
    mConcreteColleague1 = nullptr;
    delete mConcreteColleague2;
    mConcreteColleague2 = nullptr;
}
