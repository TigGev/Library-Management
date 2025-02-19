#include "librarySystem.h"
#include <iostream>

void LibrarySystem::addBookToLibrary(const Book& book) {
    lib.addBook(book);
    std::cout << "Book is added." << std::endl;
}

void LibrarySystem::addBookToLibrary(Book&& book) {
    lib.addBook(book);
    std::cout << "Book is added." << std::endl;
}

void LibrarySystem::displayBooks() {
    std::cout << "All books in library.\n" << std::endl;
    lib.listBooks();
}

void LibrarySystem::checkOutBookFromLibrary(const std::string& title) {
    lib.checkOutBook(title);
}

void LibrarySystem::returnBookToLibrary(const std::string& title) {
    lib.returnBook(title);
}

void LibrarySystem::searchBookByAuthorToLibrary(const std::string author) {
    lib.searchBookByAuthor(author);
}
