#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->show();
    Singleton* a = Singleton::getInstance();
    a->show();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}