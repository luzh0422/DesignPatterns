#include <iostream>
#include "Directory.h"
#include "File.h"

int main() {
    Directory *rootdir = new Directory("root");
    Directory *bindir = new Directory("bin");
    Directory *tmpdir = new Directory("tmp");
    Directory *usrdir = new Directory("usr");
    rootdir->add(bindir);
    rootdir->add(tmpdir);
    rootdir->add(usrdir);
    bindir->add(new File("vi", 10000));
    bindir->add(new File("latex", 20000));
    rootdir->printList();
    File *testFile = new File("test", 10000);
    testFile->add(rootdir);

    return 0;
}