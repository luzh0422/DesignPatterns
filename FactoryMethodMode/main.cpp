#include <iostream>

#include "IDCardFactory.h"
#include "Factory.h"
#include "Project.h"

int main() {
    Factory* idCardFactory = new IDCardFactory();
    Project* p = idCardFactory->create("Li");
    p->use();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}