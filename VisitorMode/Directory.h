//
// Created by Luzh on 2019/2/19.
//

#ifndef VISITORMODE_DIRECTORY_H
#define VISITORMODE_DIRECTORY_H

#include "Entry.h"
#include <vector>


class Directory : public Entry {
public:
    Directory(std::string name) : mName(name) {}
    std::string getName() override;
    int getSize() override;
    void add(Entry *) override;
    std::vector<Entry *>::iterator iterator();
    std::vector<Entry *>::iterator getEnd();
    void accept(Visitor *visitor) override;

private:
    std::vector<Entry *> mLists;
    std::string mName;
};


#endif //VISITORMODE_DIRECTORY_H
