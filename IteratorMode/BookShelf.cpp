//
// Created by Luzh on 2018/10/18.
//

#include "BookShelf.h"
#include "BookShelfIterator.h"

Iterator* BookShelf::iterator() {
    return new BookShelfIterator(this);
}

int BookShelf::getLength() {
    return maxSize;
}

void BookShelf::appendBook(Book pBook) {
    mBooks.push_back(pBook);
    maxSize++;
}
