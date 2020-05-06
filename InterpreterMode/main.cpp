#include <iostream>

#include "Context.h"
#include "NonterminalExpression.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Context *c = new Context;
    NonterminalExpression *nonterminalExpression = new NonterminalExpression(5);
    nonterminalExpression->interpret(*c);
    delete(c);
    delete(nonterminalExpression);
    return 0;
}
