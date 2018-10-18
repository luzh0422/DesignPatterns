//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_AGGREGATE_H
#define ITERATORMODE_AGGREGATE_H

#include "Iterator.h"

class Aggregate {
public:
    virtual Iterator *iterator() = 0;
    virtual int  getLength() = 0;
};

#endif //ITERATORMODE_AGGREGATE_H
