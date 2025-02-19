#ifndef LIBRARY_H
#define LIBRARY_H
#include "book.h"
#include <vector>

class Library {
        std::vector<Book> books;
    public:
        Library() {};
        ~Library() {};

        void addBook(const Book& book);
        void addBook(Book&& book);
        void listBooks();
        void searchBookByAuthor(const std::string& author);
        void checkOutBook(const std::string& title);
        void returnBook(const std::string& title);
};
#endif