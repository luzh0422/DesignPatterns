//
// Created by Luzh on 2019/2/11.
//

#ifndef COMPOSITEMODE_DIRECTORY_H
#define COMPOSITEMODE_DIRECTORY_H

#include "Entry.h"
#include <string>
#include <vector>

class Directory : public Entry {
public:
    Directory(std::string name) {
        Entry::mName = name;
    }
    void printList() override;
    void add(Entry* entry) override;

protected:
    int getSize() override;
    void printList(std::string prefix) override;

private:
    std::vector<Entry* > mLists;
};

#endif //COMPOSITEMODE_DIRECTORY_H
