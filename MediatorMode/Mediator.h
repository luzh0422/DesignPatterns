//
// Created by Luzh on 2019-03-28.
//

#ifndef MEDIATORMODE_MEDIATOR_H
#define MEDIATORMODE_MEDIATOR_H


class Mediator {
public:
    virtual void createColleagues() = 0;
    virtual void colleagueChanged(int num) = 0;

};


#endif //MEDIATORMODE_MEDIATOR_H
