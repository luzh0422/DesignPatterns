#include <iostream>
#include "Display.h"
#include "MultiDisplay.h"
#include "StringDisplayImpl.h"

int main() {
    StringDisplayImpl* stringDisplayImpl = new StringDisplayImpl("Hello, China.");
    Display* d1 = new Display(stringDisplayImpl);

    MultiDisplay* d2 = new MultiDisplay(stringDisplayImpl);

    d1->display();
    d2->multiDisplay(5);
    return 0;
}