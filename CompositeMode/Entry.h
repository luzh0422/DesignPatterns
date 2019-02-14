//
// Created by Luzh on 2019/2/8.
//

#ifndef COMPOSITEMODE_ENTRY_H
#define COMPOSITEMODE_ENTRY_H

#include <string>

class Entry {
public:
    virtual void add(Entry* entry);
    virtual void printList();

protected:
    virtual void printList(std::string prefix) = 0;
    virtual std::string getName() final;
    virtual int getSize() = 0;
    std::string mName;
    int mSize;

};

#endif //COMPOSITEMODE_ENTRY_H
