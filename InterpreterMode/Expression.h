//
// Created by Luzh on 2020/5/6.
//

#ifndef INTERPRETERMODE_EXPRESSION_H
#define INTERPRETERMODE_EXPRESSION_H

#include "Context.h"

class Expression {
public:
    virtual void interpret(const Context &c) = 0;
};


#endif //INTERPRETERMODE_EXPRESSION_H
