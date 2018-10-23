#include <iostream>
#include "AbstractDisplay.h"
#include "CharDisplay.h"

int main() {
    AbstractDisplay *a = new CharDisplay('H');
    a->display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}