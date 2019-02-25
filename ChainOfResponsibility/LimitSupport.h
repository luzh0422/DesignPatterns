//
// Created by Luzh on 2019-02-25.
//

#ifndef CHAINOFRESPONSIBILITY_LIMITSUPPORT_H
#define CHAINOFRESPONSIBILITY_LIMITSUPPORT_H

#include "Support.h"
#include "Problem.h"
#include <string>


class LimitSupport : public Support {
public:
    LimitSupport(std::string name, int limit) : Support(name), mLimit(limit) {}
    bool resolve(Problem *problem) override;

private:
    int mLimit;
};


#endif //CHAINOFRESPONSIBILITY_LIMITSUPPORT_H
