#include "Book.h"

Book::Book() :m_availability(true) {}

Book::Book(string t) :m_availability(true),m_type(t)
{
    cout << "Enter Book information ... \n"
        << "* Title: ";
    cin >> m_title;
    cout << "* Author: ";
    cin >> m_author;
    cout << "* IBSN: ";
    cin >> m_ISBN;
}


Book::~Book(){}


bool Book::getAvailability() {
    return m_availability;
}

void Book::setType(string t) {
    m_type = t;
}

string Book::getType()
{
    return m_type;
}

void Book::setAvailability(bool a) {
    m_availability = a;
}

string Book::getISBN() {
    return m_ISBN;
}

void Book::setISBN(string isbn) {
    m_ISBN = isbn;
}

bool Book::operator==(const Book& b)const {
    return m_ISBN == b.m_ISBN;
}

void Book::GetBook()
{
    cout << "Book information ... "
        << "\n->Type      : " << m_type
        << "\n->Title     : " << m_title
        << "\n->Author    : " << m_author
        << "\n->IBSN      : " << m_ISBN
        << "\n->Available : " << (m_availability ? "YES" : "NO") << endl
        << "\t-----------------------" << endl;

}

void Book::SetBook()
{
    cout << "Enter Book information ... \n"
        << "* Title: ";
    cin >> m_title;
    cout << "* Author: ";
    cin >> m_author;
    cout << "* IBSN: ";
    cin >> m_ISBN;
}

ostream& operator<<(ostream& out, const Book& b)
{
    out << "Book information ... "
        << "\n->Type      : " << b.m_type
        << "\n->Title     : " << b.m_title
        << "\n->Author    : " << b.m_author
        << "\n->IBSN      : " << b.m_ISBN
        << "\n->Available : " << (b.m_availability ? "YES" : "NO") << endl
        << "\t-----------------------" << endl;
    return out;
}

