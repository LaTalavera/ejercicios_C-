#include "Books.h"
#include <iostream>
using namespace std;

Book::Book() : title(""), author(""), pageNumber(0), isBorrowed(false) {}

Book::Book(string title, string author, int pageNumber, bool isBorrowed = false)
{
    this->title = title;
    this->author = author;
    this->pageNumber = pageNumber;
}

void Book::setTitle(string title)
{
    this->title = title;
}

void Book::setAuthor(string author)
{
    this->author = author;
}

void Book::setPageNumber(int pages)
{
    this->pageNumber = pages;
}

string Book::getTitle()
{
    return this->title;
}

string Book::getAuthor()
{
    return this->author;
}

int Book::getPageNumber()
{
    return this->pageNumber;
}

void Book::borrowBook()
{
    if (this->isBorrowed == false)
    {
        this->isBorrowed = true;
        cout << "Book " << this->title << "is borrowed" << endl;
    }
    else
    {
        cout << "Book " << this->title << "is already borrowed, choose another book" << endl;
    }
}

void Book::returnBook()
{
    if (this->isBorrowed == true)
    {
        this->isBorrowed = false;
        cout << "Book " << this->title << "it has just been returned" << endl;
    }
    else
    {
        cout << "Book " << this->title << "is already returned it cannot be returned again" << endl;
    }
}

void Book::showInfo() const
{
    cout << "Book title is: " << title << endl;
    cout << "Book author is: " << author << endl;
    cout << "Book number of pages is: " << pageNumber << endl;
}

Book::~Book()
{
    // Destructor body, empty if there's nothing specific to clean up
}
