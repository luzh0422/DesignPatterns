//
// Created by Luzh on 2020/4/13.
//

#ifndef OBSERVER_OBSERVER_H
#define OBSERVER_OBSERVER_H

class GenerateNumber;

class Observer {
public:
    Observer() {};
    virtual void apply(GenerateNumber* generateNumber) = 0;
};


#endif //OBSERVER_OBSERVER_H
