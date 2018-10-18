//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_BOOKSHELFITERATOR_H
#define ITERATORMODE_BOOKSHELFITERATOR_H

#include "Iterator.h"
#include "Aggregate.h"

class BookShelfIterator : public Iterator {
public:
    BookShelfIterator(Aggregate *pAggregate) : mAggreate(pAggregate), Iterator() {}
    bool hasNext();
    std::string next();

private:
    Aggregate *mAggreate;
    int index = 0;
};

#endif //ITERATORMODE_BOOKSHELFITERATOR_H
