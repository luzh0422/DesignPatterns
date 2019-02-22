//
// Created by Luzh on 2019/2/19.
//

#ifndef VISITORMODE_ENTRY_H
#define VISITORMODE_ENTRY_H

#include "Element.h"
#include <string>

class Entry : public Element {
public:
    virtual std::string getName() = 0;
    virtual int getSize() = 0;
    virtual void add(Entry *entry);
    virtual std::string toString();
};

#endif //VISITORMODE_ENTRY_H
