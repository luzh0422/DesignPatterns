//
// Created by Luzh on 2020/4/13.
//

#ifndef OBSERVER_GENERATENUMBER_H
#define OBSERVER_GENERATENUMBER_H

#include <vector>

#include "Observer.h"

using namespace std;

class GenerateNumber {
public:
    GenerateNumber() {}
    void addObserver(Observer* ob);
    void deleteObserver(Observer* ob);
    virtual void generateNumber() = 0;
    int getNumber();

protected:
    void notifyObeserves();
    int mNumber;
    vector<Observer*> observers;
};

#endif //OBSERVER_GENERATENUMBER_H
