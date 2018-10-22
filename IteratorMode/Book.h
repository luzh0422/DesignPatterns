//
// Created by Luzh on 2018/10/18.
//

#ifndef ITERATORMODE_BOOK_H
#define ITERATORMODE_BOOK_H

#include "string"


class Book {
public:
    Book(std::string name) : mName(name) {}
    std::string getName();

private:
    std::string mName;
};

#endif //ITERATORMODE_BOOK_H
