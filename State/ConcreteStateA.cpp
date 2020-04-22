//
// Created by Luzh on 2020/4/22.
//

#include "ConcreteStateA.h"
#include "ConcreteStateB.h"
#include "Context.h"
#include <iostream>

using namespace std;

ConcreteStateA* ConcreteStateA::instance = NULL;

ConcreteStateA * ConcreteStateA::getInstance() {
    if (instance == NULL) {
        instance = new ConcreteStateA();
    }
    return instance;
}

void ConcreteStateA::handle1(Context *context) {
    cout << "ConcreteStateA handles request1." << endl;
    cout << "ConcreteStateA wants to change the state of Context." << endl;
    context->changeState(ConcreteStateB::getInstance());
}

void ConcreteStateA::handle2(Context *context) {
    cout << "ConcreteStateA handles request2." << endl;
}
