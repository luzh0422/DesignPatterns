//
// Created by Luzh on 2020/5/6.
//

#include "NonterminalExpression.h"
#include <iostream>

void NonterminalExpression::interpret(const Context &c) {
    std::cout << "construct TerminalExpression & invoke TerminalExpression.interpret" << std::endl;
    if (termialExpression == NULL) {
        termialExpression = new TermialExpression;
    }
    for (int i = 0; i < mTimes; i++) {
        termialExpression->interpret(c);
    }
}
