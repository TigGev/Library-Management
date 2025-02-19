#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
        std::string m_title;
        std::string m_author;
        int m_publicationYear;
        bool m_isCheckOut;
    public:
        Book(std::string title, std::string author, int publicationYear); //param ctor
        ~Book() {}; //dtor
        Book(const Book& other); //copy ctor
        Book(Book&& other); //move ctor
        Book& operator= (const Book& other); //assign operator
        Book& operator= (Book&& other); // move operator

        std::string getTitle() const;
        std::string getAuthor() const;
        int getPublicationYear() const;
        bool isCheckedOutStatus() const;

        void checkOut();
        void returnBook();         
};
#endif