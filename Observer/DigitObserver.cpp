//
// Created by Luzh on 2020/4/14.
//

#include "DigitObserver.h"
#include "GenerateNumber.h"

#include <iostream>

using namespace std;

void DigitObserver::apply(GenerateNumber *generateNumber) {
    cout << generateNumber->getNumber() << endl;
}
