//
// Created by Luzh on 2020/4/22.
//

#include "ConcreteStateB.h"
#include "ConcreteStateA.h"
#include "Context.h"
#include <iostream>

using namespace std;

ConcreteStateB* ConcreteStateB::instance = NULL;

ConcreteStateB * ConcreteStateB::getInstance() {
    if (instance == NULL) {
        instance = new ConcreteStateB();
    }
    return instance;
}

void ConcreteStateB::handle1(Context *context) {
    cout << "ConcretStateB handles request1." << endl;
}

void ConcreteStateB::handle2(Context *context) {
    cout << "ConcreteStateB handle request2." << endl;
    cout << "ConcreteStateB wants to change the state of context." << endl;
    context->changeState(ConcreteStateA::getInstance());
}
