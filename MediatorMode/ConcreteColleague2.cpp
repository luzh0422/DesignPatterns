//
// Created by Luzh on 2019-03-28.
//

#include "ConcreteColleague2.h"
#include <iostream>

void ConcreteColleague2::send(std::string message) {
    std::cout << "ConcreteColleague2: " + message << std::endl;
    mMediator->colleagueChanged(2);
}
