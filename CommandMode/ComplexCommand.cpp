//
// Created by Luzh on 2020/5/3.
//

#include "ComplexCommand.h"
#include <iostream>

void ComplexCommand::execute() const {
    std::cout << "ComplexCommand: Complex stuff should be done by a receiver obj.\n";
    this->mReceiver->doSomething(mA);
    this->mReceiver->doSomeThingElse(mB);
}


