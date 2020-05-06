//
// Created by Luzh on 2020/5/3.
//

#include "Invoker.h"
#include <iostream>

Invoker::~Invoker() {
    delete onStart;
    delete onFinish;
}

void Invoker::setOnStart(Command *command) {
    this->onStart = command;
}

void Invoker::setOnFinish(Command *command) {
    this->onFinish = command;
}

void Invoker::doSomethingInportant() {
    std::cout << "Invoker: Does anybody want something done before I begin?\n";
    if (this->onStart) {
        this->onStart->execute();
    }
    std::cout << "Invoker: ...doing something really important.\n";
    std::cout << "Invoker: Does anybody want something done before I finish?\n";
    if (this->onFinish) {
        this->onFinish->execute();
    }
}
