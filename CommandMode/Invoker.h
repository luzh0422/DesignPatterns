//
// Created by Luzh on 2020/5/3.
//

#ifndef COMMANDMODE_INVOKER_H
#define COMMANDMODE_INVOKER_H

#include "Command.h"

class Invoker {
private:
    Command *onStart;
    Command *onFinish;
public:
    ~Invoker();

    void setOnStart(Command *command);
    void setOnFinish(Command *command);
    void doSomethingInportant();
};


#endif //COMMANDMODE_INVOKER_H
