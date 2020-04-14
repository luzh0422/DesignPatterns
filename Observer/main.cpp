#include <iostream>

#include "RandomGenerateNumber.h"
#include "DigitObserver.h"
#include "GraphObserver.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    DigitObserver* ob = new DigitObserver();
    GraphObserver* graphOb = new GraphObserver();
    RandomGenerateNumber* generateNumber = new RandomGenerateNumber();
    generateNumber->addObserver(ob);
    generateNumber->addObserver(graphOb);
    for (int i = 0; i < 10; i++) {
        generateNumber->generateNumber();
    }
    return 0;
}
