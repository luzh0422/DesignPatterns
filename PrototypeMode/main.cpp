#include <iostream>

#include "MessageBox.h"
#include "Product.h"
#include "Manager.h"

int main() {
    MessageBox* m = new MessageBox("*");
    Manager manager;
    manager.registerProduct("MessageBox", m);
    Product* p = manager.create("MessageBox");
    p->use("Hello");
    std::cout << "Hello, World!" << std::endl;
    return 0;
}