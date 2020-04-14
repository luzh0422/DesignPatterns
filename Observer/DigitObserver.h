//
// Created by Luzh on 2020/4/14.
//

#ifndef OBSERVER_DIGITOBSERVER_H
#define OBSERVER_DIGITOBSERVER_H

#include "Observer.h"

class DigitObserver : public Observer {
public:
    DigitObserver() {};
    void apply(GenerateNumber* generateNumber);
};


#endif //OBSERVER_DIGITOBSERVER_H
