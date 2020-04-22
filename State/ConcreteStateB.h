//
// Created by Luzh on 2020/4/22.
//

#ifndef STATE_CONCRETESTATEB_H
#define STATE_CONCRETESTATEB_H

#include "State.h"

class Context;

class ConcreteStateB : public State {
public:
    void handle1(Context* context) override ;
    void handle2(Context* context) override ;
    static ConcreteStateB* getInstance();

private:
    ConcreteStateB() {}
    static ConcreteStateB* instance;
};


#endif //STATE_CONCRETESTATEB_H
