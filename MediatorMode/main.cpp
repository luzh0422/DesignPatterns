#include <iostream>
#include "ConcreteMediator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ConcreteMediator mediator;
    mediator.colleagueChanged(1);
    return 0;
}