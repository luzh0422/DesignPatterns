//
// Created by Luzh on 2019-03-28.
//

#ifndef MEDIATORMODE_COLLEAGUE_H
#define MEDIATORMODE_COLLEAGUE_H

#include "Mediator.h"
#include <string>

class Colleague {
protected:
    Mediator *mMediator;
public:
    virtual void setMediator(Mediator *mediator);
    virtual void send(std::string message) = 0;
};

#endif //MEDIATORMODE_COLLEAGUE_H
