//
// Created by Luzh on 2019/2/25.
//

#ifndef CHAINOFRESPONSIBILITY_PROBLEM_H
#define CHAINOFRESPONSIBILITY_PROBLEM_H

#include <string>

class Problem {
public:
    Problem(int n) : num(n) {}
    int getNumber();
    std::string getName();

private:
    int num;
};


#endif //CHAINOFRESPONSIBILITY_PROBLEM_H
