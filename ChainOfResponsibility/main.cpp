#include <iostream>

#include "Support.h"
#include "NoSupport.h"
#include "OddSupport.h"
#include "LimitSupport.h"

int main() {
    Support *alice = new NoSupport("Alice");
    Support *bob = new OddSupport("bob");
    Support *diana = new LimitSupport("diana", 4);
    alice->setNext(bob)->setNext(diana);
    for (int i = 0; i < 100; i++) {
        alice->support(new Problem(i));
    }
    return 0;
}