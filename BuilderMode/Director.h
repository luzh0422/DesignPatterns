//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_DIRECTOR_H
#define BUILDERMODE_DIRECTOR_H

#include "Builder.h"

template <class T>
    int GetLength(T& arr) {
        return sizeof(arr) / sizeof(arr[0]);
    }

class Director {
public:
    Director(Builder* pBuilder) : mBuilder(pBuilder) {}
    void construct();
    
private:
    Builder* mBuilder;
};

#endif //BUILDERMODE_DIRECTOR_H
