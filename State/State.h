//
// Created by Luzh on 2020/4/22.
//

#ifndef STATE_STATE_H
#define STATE_STATE_H

class Context;

class State {
public:
    State() {};
    virtual void handle1(Context* context) = 0;
    virtual void handle2(Context* context) = 0;

protected:
};

#endif //STATE_STATE_H
