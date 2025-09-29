#ifndef LIBRARY_SYSTEM
#define LIBRARY_SYSTEM
#include "library.h"
#endif

class LibrarySystem {
        Library lib;
    public:
        LibrarySystem() {};
        ~LibrarySystem() {};

        void addBookToLibrary(const Book& book);
        void addBookToLibrary(Book&& book);
        void displayBooks();
        void checkOutBookFromLibrary(const std::string& title);
        void returnBookToLibrary(const std::string& title);
        void searchBookByAuthorToLibrary(const std::string author);
};