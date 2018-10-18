//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_ITERATOR_H
#define ITERATORMODE_ITERATOR_H

#include <string>

class Iterator {
public:
    virtual bool hasNext() = 0;
    virtual std::string next() = 0;
};

#endif //ITERATORMODE_ITERATOR_H
