//
// Created by Luzh on 2018/11/7.
//

#ifndef BUILDERMODE_DIRECTOR_H
#define BUILDERMODE_DIRECTOR_H

#include "Builder.h"

class Director {
public:
    Director(Builder* pBuilder) : mBuilder(pBuilder) {}
    void construct();
    
private:
    Builder* mBuilder;
};

#endif //BUILDERMODE_DIRECTOR_H
