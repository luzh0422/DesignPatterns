//
// Created by Luzh on 2020/4/22.
//

#ifndef STATE_CONCRETESTATEA_H
#define STATE_CONCRETESTATEA_H

#include "State.h"

class Context;

class ConcreteStateA : public State {
public:
    void handle1(Context* context) override;
    void handle2(Context* context) override;
    static ConcreteStateA* getInstance();

private:
    ConcreteStateA() : State() {};
    static ConcreteStateA* instance;
};


#endif //STATE_CONCRETESTATEA_H
