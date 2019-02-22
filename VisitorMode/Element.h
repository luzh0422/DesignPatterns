//
// Created by Luzh on 2019/2/19.
//

#ifndef VISITORMODE_ELEMENT_H
#define VISITORMODE_ELEMENT_H

class Visitor;

class Element {
public:
    virtual void accept(Visitor *visitor) = 0;
};

#endif //VISITORMODE_ELEMENT_H
