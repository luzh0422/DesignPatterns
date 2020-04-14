//
// Created by Luzh on 2020/4/14.
//

#ifndef OBSERVER_GRAPHOBSERVER_H
#define OBSERVER_GRAPHOBSERVER_H

#include "Observer.h"

class GraphObserver : public Observer {
public:
    GraphObserver() {}
    void apply(GenerateNumber* generateNumber);
};


#endif //OBSERVER_GRAPHOBSERVER_H
