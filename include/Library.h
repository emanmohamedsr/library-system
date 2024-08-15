#ifndef LIBRARY_H
#define LIBRARY_H

#include "Container.h"
#include "LinkedList.h"
#include "Book.h"
#include<iostream>
#include <windows.h>///sleep,color
#include <cstdlib>///system

class Library
{
private:
    Container< Book, LinkedList >* Lists;
    int m_numberOfTypes;
public:
    Library();
    ~Library();

    int getType();

    void insertBookFront();
    void insertBookEnd();
    void inserBookAt(size_t);

    void removeBookFront();
    void removeBookEnd();
    void removeBookAt(size_t);

    int searchBook();

    void DisplayCategory();
    void separator(int x);
    void Display();

    //1-> found & available, -1->found but not available, 0->not found
    int modify();

    void statistics();
    void shortage();

    void setColor(int color);
};

#endif // LIBRARY_H
