#include <iostream>
#include "AbstractDisplay.h"
#include "CharDisplay.h"
#include "StringDisplay.h"

int main() {
    AbstractDisplay *a = new CharDisplay('H');
    a->display();
    AbstractDisplay *b = new StringDislplay("Hello World");
    b->display();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}