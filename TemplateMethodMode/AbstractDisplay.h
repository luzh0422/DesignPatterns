//
// Created by Luzh on 2018/10/23.
//

#ifndef TEMPLATEMETHODMODE_ABSTRACTDISPLAY_H
#define TEMPLATEMETHODMODE_ABSTRACTDISPLAY_H

class AbstractDisplay {
public:
    virtual void display() final;

protected:
    virtual void open() = 0;
    virtual void print() = 0;
    virtual void close() = 0;
};

#endif //TEMPLATEMETHODMODE_ABSTRACTDISPLAY_H
