#pragma once
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int pageNumber;
    bool isBorrowed;
public:
    Book() = default;
    Book(string title, string author, int pageNumber, bool isBorrowed);
    void setTitle(string title);
    void setAuthor(string author);
    void setPageNumber(int pages);
    string getTitle();
    string getAuthor();
    int getPageNumber();
    void borrowBook();
    void returnBook();
    void showInfo() const ; // ensures that it does not modify the state of the object, which helps in maintaining const correctness. 
                            //This means functions that shouldn't modify the object are guaranteed not to do so.
    ~Book();
};