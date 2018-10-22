//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_BOOKSHELFITERATOR_H
#define ITERATORMODE_BOOKSHELFITERATOR_H

#include "Iterator.h"
#include "BookShelf.h"

class BookShelfIterator : public Iterator {
public:
    BookShelfIterator(BookShelf *pAggregate) : mAggreate(pAggregate), Iterator() {}
    bool hasNext();
    std::string next();

private:
    BookShelf *mAggreate;
    int index = 0;
};

#endif //ITERATORMODE_BOOKSHELFITERATOR_H
