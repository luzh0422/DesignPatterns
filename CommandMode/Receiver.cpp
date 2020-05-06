//
// Created by Luzh on 2020/5/3.
//

#include "Receiver.h"
#include <iostream>

void Receiver::doSomething(const std::string &a) {
    std::cout << "Receiver: Working on (" + a +".)\n";
}

void Receiver::doSomeThingElse(const std::string &b) {
    std::cout << "Receiver: Also working on (" + b + ").\n";
}
