#include <iostream>

#include "BookShelf.h"
#include "BookShelfIterator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    BookShelf *bookShelf = new BookShelf();
    Book* book1 = new Book("a");
    Book* book2 = new Book("b");
    Book* book3 = new Book("c");
    bookShelf->appendBook(book1);
    bookShelf->appendBook(book2);
    bookShelf->appendBook(book3);
    Iterator *bookShelfIterator = bookShelf->iterator();
    std::cout << bookShelfIterator->hasNext();
    std::cout << bookShelfIterator->next();
    std::cout << bookShelfIterator->next();
    std::cout << bookShelfIterator->next();
    return 0;
}