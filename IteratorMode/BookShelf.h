//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_BOOKSHELF_H
#define ITERATORMODE_BOOKSHELF_H

#include "Aggregate.h"
#include <vector>
#include "Book.h"

class BookShelf : public Aggregate {
public:
    Iterator *iterator();
    void appendBook(Book pBook);
    int getLength();

private:
    std::vector<Book> mBooks;
    int maxSize = 0;
};

#endif //ITERATORMODE_BOOKSHELF_H
