//
// Created by Luzh on 2019-02-25.
//

#ifndef CHAINOFRESPONSIBILITY_SUPPORT_H
#define CHAINOFRESPONSIBILITY_SUPPORT_H

#include <string>
#include "Problem.h"

class Support {
public:
    Support(std::string name) : mName(name) {}
    Support* setNext(Support *next);
    virtual void support(Problem *problem) final;
    std::string getName();

protected:
    virtual bool resolve(Problem *problem) = 0;
    void done(Problem *problem);
    void fail(Problem *problem);

private:
    std::string mName;
    Support *mNext;
};


#endif //CHAINOFRESPONSIBILITY_SUPPORT_H
