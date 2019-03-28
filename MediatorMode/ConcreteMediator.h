//
// Created by Luzh on 2019-03-28.
//

#ifndef MEDIATORMODE_CONCRETEMEDIATOR_H
#define MEDIATORMODE_CONCRETEMEDIATOR_H

#include "Mediator.h"
#include "ConcreteColleague1.h"
#include "ConcreteColleague2.h"

class ConcreteMediator : public Mediator {
private:
    ConcreteColleague1 *mConcreteColleague1;
    ConcreteColleague2 *mConcreteColleague2;
public:
    ConcreteMediator();
    ~ConcreteMediator();
    void createColleagues();
    void colleagueChanged(int num);
};


#endif //MEDIATORMODE_CONCRETEMEDIATOR_H
