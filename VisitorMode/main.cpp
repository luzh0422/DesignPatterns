#include <iostream>
#include "Directory.h"
#include "File.h"
#include "ListVisitor.h"

int main() {
    std::cout << "Making root entries..." << std::endl;
    Directory *rootDir = new Directory("root");
    Directory *binDir = new Directory("bin");
    Directory *tmpDir = new Directory("tmp");
    Directory *usrDir = new Directory("usr");
    rootDir->add(binDir);
    rootDir->add(tmpDir);
    rootDir->add(usrDir);
    binDir->add(new File("vi", 10000));
    binDir->add(new File("latex", 20000));
    rootDir->accept(new ListVisitor());

    return 0;
}