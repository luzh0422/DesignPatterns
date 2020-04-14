//
// Created by Luzh on 2020/4/14.
//

#include "GraphObserver.h"
#include "GenerateNumber.h"

#include <iostream>
using namespace std;

void GraphObserver::apply(GenerateNumber *generateNumber) {
    int num = generateNumber->getNumber();
    for (int i = 0; i < num; i++) {
        cout << "*";
    }
    cout << endl;
}
