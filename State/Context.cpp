//
// Created by Luzh on 2020/4/22.
//

#include "Context.h"

void Context::changeState(State *state) {
    this->mState = state;
}

void Context::request1() {
    this->mState->handle1(this);
}

void Context::request2() {
    this->mState->handle2(this);
}
