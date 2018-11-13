#include <iostream>
#include "Director.h"
#include "HTMLBuilder.h"

int main() {
    HTMLBuilder* htmlBuilder = new HTMLBuilder();
    Director director(htmlBuilder);
    director.construct();
    delete htmlBuilder;
    htmlBuilder = nullptr;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}