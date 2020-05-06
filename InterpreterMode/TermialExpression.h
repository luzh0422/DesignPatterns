//
// Created by Luzh on 2020/5/6.
//

#ifndef INTERPRETERMODE_TERMIALEXPRESSION_H
#define INTERPRETERMODE_TERMIALEXPRESSION_H

#include <string>
#include "Expression.h"

class TermialExpression : public Expression {
public:
    void interpret(const Context &c) override;
private:
    std::string mStatement;
};


#endif //INTERPRETERMODE_TERMIALEXPRESSION_H
