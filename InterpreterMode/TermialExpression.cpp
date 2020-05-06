//
// Created by Luzh on 2020/5/6.
//

#include "TermialExpression.h"
#include <iostream>

void TermialExpression::interpret(const Context &c) {
    mStatement = c.getInfoToInterpret();
    std::cout << this->mStatement << " -- TerminalExpression" << std::endl;
}
