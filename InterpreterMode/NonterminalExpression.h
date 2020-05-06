//
// Created by Luzh on 2020/5/6.
//

#ifndef INTERPRETERMODE_NONTERMINALEXPRESSION_H
#define INTERPRETERMODE_NONTERMINALEXPRESSION_H

#include "Expression.h"
#include "TermialExpression.h"

class NonterminalExpression : public Expression {
private:
    int mTimes = 0;
public:
    NonterminalExpression(int times) : mTimes(times) {}
    void interpret(const Context &c) override;

private:
    TermialExpression *termialExpression = NULL;
};


#endif //INTERPRETERMODE_NONTERMINALEXPRESSION_H
