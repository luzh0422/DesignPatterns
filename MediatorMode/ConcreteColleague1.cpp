//
// Created by Luzh on 2019-03-28.
//

#include "ConcreteColleague1.h"
#include <iostream>

void ConcreteColleague1::send(std::string message) {
    std::cout << "ConcreteColleague1: " + message << std::endl;
    mMediator->colleagueChanged(1);
}
