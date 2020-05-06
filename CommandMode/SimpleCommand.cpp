//
// Created by Luzh on 2020/5/3.
//

#include "SimpleCommand.h"
#include <iostream>

void SimpleCommand::execute() const {
    std::cout << "SimpleCommand: See, I can do simple things like pring(" + this->mPayLoad + ")\n";
}
