#include "book.h"
#include <utility>

Book::Book(std::string title, std::string author, int publicationYear) :
    m_title(title), m_author(author), m_publicationYear(publicationYear), m_isCheckOut(false) {}

Book::Book(const Book& other) :
    m_title(other.m_title), m_author(other.m_author), m_publicationYear(other.m_publicationYear), m_isCheckOut(other.m_isCheckOut) {}

Book::Book(Book&& other) : 
    m_title(std::move(other.m_title)), m_author(std::move(other.m_author)), m_publicationYear(other.m_publicationYear), m_isCheckOut(other.m_isCheckOut) {
        other.m_isCheckOut = false;
    }

Book& Book::operator= (const Book& other) {
    if (&other == this) return *this;
    m_title = other.m_title;
    m_author = other.m_author;
    m_publicationYear = other.m_publicationYear;
    m_isCheckOut = other.m_isCheckOut;
    return *this;
}

Book& Book::operator= (Book&& other) {
    if (&other == this) return *this;
    m_title = std::move(other.m_title);
    m_author = std::move(other.m_author);
    m_publicationYear = other.m_publicationYear;
    m_isCheckOut = other.m_isCheckOut;
    return *this;
}

std::string Book::getTitle() const {
    return m_title;
}

std::string Book::getAuthor() const {
    return m_author;
}

int Book::getPublicationYear() const {
    return m_publicationYear;
}

bool Book::isCheckedOutStatus() const {
    return m_isCheckOut;
}

void Book::checkOut() {
    m_isCheckOut = true;
}

void Book::returnBook() {
    m_isCheckOut = false;
}