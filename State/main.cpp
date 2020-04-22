#include <iostream>
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Context* context = new Context(ConcreteStateA::getInstance());
    context->request1();
    context->request1();
    context->request2();
    context->request2();
    return 0;
}
