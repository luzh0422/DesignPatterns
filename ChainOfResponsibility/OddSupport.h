//
// Created by Luzh on 2019-02-25.
//

#ifndef CHAINOFRESPONSIBILITY_ODDSUPPORT_H
#define CHAINOFRESPONSIBILITY_ODDSUPPORT_H

#include "Support.h"
#include "Problem.h"

class OddSupport : public Support {
public:
    OddSupport(std::string name) : Support(name) {}
protected:
    bool resolve(Problem *problem) override;
};


#endif //CHAINOFRESPONSIBILITY_ODDSUPPORT_H
