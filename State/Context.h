//
// Created by Luzh on 2020/4/22.
//

#ifndef STATE_CONTEXT_H
#define STATE_CONTEXT_H

#include "State.h"

class Context {
public:
    Context(State* state) : mState(state) {};
    ~Context() {
        delete mState;
    }
    void changeState(State* state);
    void request1();
    void request2();

private:
    State* mState;
};


#endif //STATE_CONTEXT_H
