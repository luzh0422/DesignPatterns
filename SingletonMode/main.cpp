#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->show();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}