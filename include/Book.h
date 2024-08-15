#ifndef BOOK_H
#define BOOK_H


#include <string>
#include <iostream>

using namespace std;

class Book
{
private:
    string m_title{};
    string m_author{};
    string m_ISBN{};
    string m_type{};
    bool m_availability;
public:
    Book();
    Book(string);
    ~Book();

    string getISBN();
    void setISBN(string isbn);
    bool getAvailability();
    void setAvailability(bool a);
    void setType(string t);
    string getType();

    void GetBook();
    void SetBook();

    //search
    bool operator ==(const Book& b)const;

    friend ostream& operator<<(ostream& out, const Book& b);

};



#endif // BOOK_H
