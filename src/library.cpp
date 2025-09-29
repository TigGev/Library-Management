#include "library.h"
#include <iostream>

void displayBook (const Book& book) {
    std::cout << "---------------------------------------\n";
    std::cout << "Title: " << book.getTitle() << "\n"
    << "Author: " << book.getAuthor() << "\n"
    << "Publication year: " << book.getPublicationYear() << "\n"
    << "Checked out: " << (book.isCheckedOutStatus() ? "Yes" : "No") << std::endl;
}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::addBook(Book&& book) {
    books.push_back(std::move(book));
}

void Library::listBooks() {
    for (const Book& book : books) {
        displayBook(book);
    }
    std::cout << "\n\n";
}

void Library::checkOutBook(const std::string& title) {
    for (Book& book : books) {
        if (book.getTitle() == title) {
            if (!book.isCheckedOutStatus()) {
                book.checkOut();
                std::cout << "Book checked out." << std::endl;
                return;
            }
            else {
                std::cout << "Book already checked out." << std::endl;
                return;
            }
        }
    }
    std::cout << "Book not found." << std::endl;
}

void Library::returnBook(const std::string& title) {
    for (Book& book : books) {
        if (title == book.getTitle()) {
            book.returnBook();
            std::cout << "Book returned." << std::endl;
            return;
        }
    }
    std::cout << "There was no such book." << std::endl;
}

void Library::searchBookByAuthor(const std::string& author) {
    int count = 0;
    for (const Book& book : books) {
        if (book.getAuthor() == author) {
            ++count;
            displayBook(book);
        }
    }
    if (count) {
        std::cout << count << " books found." << std::endl;
        return;
    }
    std::cout << "No books found." << std::endl;
}
