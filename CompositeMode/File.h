//
// Created by Luzh on 2019/2/8.
//

#ifndef COMPOSITEMODE_FILE_H
#define COMPOSITEMODE_FILE_H

#include "Entry.h"
#include <string>
#include <iostream>

class File : public Entry {
public:
    File(std::string name, int size) : Entry() {
        mName = name;
        mSize = size;
    }
    void printList() override;

protected:
    void printList(std::string prefix) override;
    int getSize() override;
};

#endif //COMPOSITEMODE_FILE_H
