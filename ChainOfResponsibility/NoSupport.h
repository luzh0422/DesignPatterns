//
// Created by Luzh on 2019-02-25.
//

#ifndef CHAINOFRESPONSIBILITY_NOSUPPORT_H
#define CHAINOFRESPONSIBILITY_NOSUPPORT_H

#include "Support.h"
#include <string>
#include "Problem.h"

class NoSupport : public Support {
public:
    NoSupport(std::string name) : Support(name) {}

protected:
    bool resolve(Problem *problem) override;
};


#endif //CHAINOFRESPONSIBILITY_NOSUPPORT_H
