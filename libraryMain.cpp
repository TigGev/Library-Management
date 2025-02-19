#include <iostream>
#include "librarySystem.h"

void displayMenu() {
    std::cout << "\nLibrary Management System\n";
    std::cout << "1. Add a new book\n";
    std::cout << "2. Display all books\n";
    std::cout << "3. Check out a book\n";
    std::cout << "4. Return a book\n";
    std::cout << "5. Search book by author\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    LibrarySystem system;
    int choice;

    while (true) {
        displayMenu();
        std::cin >> choice;
        std::cin.ignore(); 

        if (choice == 1) {
            std::string title, author;
            int year;

            std::cout << "Enter book title: ";
            std::getline(std::cin, title);
            std::cout << "Enter author name: ";
            std::getline(std::cin, author);
            std::cout << "Enter publication year: ";
            std::cin >> year;
            std::cin.ignore();

            system.addBookToLibrary(Book(title, author, year));
            std::cout << "Book added successfully!\n";

        } else if (choice == 2) {
            system.displayBooks();

        } else if (choice == 3) {
            std::string title;
            std::cout << "Enter the book title to check out: ";
            std::getline(std::cin, title);

            system.checkOutBookFromLibrary(title);

        } else if (choice == 4) {
            std::string title;
            std::cout << "Enter the book title to return: ";
            std::getline(std::cin, title);

            system.returnBookToLibrary(title);

        } else if (choice == 5) {
            std::string author;
            std::cout << "Enter the author name which you are looking for: ";
            std::getline(std::cin, author);

            system.searchBookByAuthorToLibrary(author);
        }
         else if (choice == 6) {
            std::cout << "Exiting the program. Goodbye!\n";
            break;

        } else {
            std::cout << "Invalid choice! Please enter a number between 1 and 5.\n";
        }
    }

    return 0;
}
