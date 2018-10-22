#include <iostream>

#include "Print.h"
#include "PrintBanner.h"
#include "PrintBannerObject.h"

int main() {
    Print *print = new PrintBanner("A");
    print->printStrong();
    print->printWeak();

    Print *print1 = new PrintBannerObject("B");
    print1->printWeak();
    print1->printStrong();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}