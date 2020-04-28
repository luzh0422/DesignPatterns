#include <iostream>
#include "BigString.h"
#include "BigCharFactory.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    BigString* bigString = new BigString("12-12129");
    bigString->print();
    BigCharFactory::releaseInstance();
    delete bigString;
    bigString = NULL;
    return 0;
}
