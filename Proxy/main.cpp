#include <iostream>

#include "Proxy.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Proxy proxy;
    proxy.setPrinterName("Alex");
    std::cout << proxy.getPrinterName() << std::endl;
    proxy.setPrinterName("Jack");
    proxy.print();
    return 0;
}
