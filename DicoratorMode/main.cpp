#include <iostream>

#include "Display.h"
#include "StringDisplay.h"
#include "SideBorder.h"
#include "FullBorder.h"


int main() {
    Display *b1 = new StringDisplay("Hello world");
    Display *b2 = new SideBorder(b1, '#');
    Display *b3 = new FullBorder(b2);
    b3->show();
    return 0;
}