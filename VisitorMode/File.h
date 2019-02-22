//
// Created by Luzh on 2019/2/19.
//

#ifndef VISITORMODE_FILE_H
#define VISITORMODE_FILE_H

#include "Entry.h"
#include <string>

class File : public Entry {
public:
    File(std::string name, int size) : mName(name), mSize(size) {}
    std::string getName() override;
    int getSize() override;
    void accept(Visitor *visitor) override;

protected:
    std::string mName;
    int mSize;
};

#endif //VISITORMODE_FILE_H
