#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include "Library.h"

using namespace std;

class UserInterFace
{
private:
    Library lib;
public:
    void setColor(int color);
    void print(string text, bool newLine = true);
    void separator(int color);
    void Back(int x = 3);
    void Books_system();//main
    void Modification();
    void Display();
    void Adding();
    void Deleting();
    void Information();
    void Borrow();
};

#endif // USERINTERFACE_H
