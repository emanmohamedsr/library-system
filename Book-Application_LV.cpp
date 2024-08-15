#include <iostream>
#include "UserInterFace.h"

using namespace std;

int main()
{
    UserInterFace U;

    int choice;
    while (true)
    {
        U.Books_system();
        cin >> choice;
        U.separator(13);
        switch (choice)
        {
        case 1:
            //Modification
            U.Modification();
            break;
        case 2:
            //info
            U.Information();
            break;
        case 0:
            //out
            U.print("\t\t\tThanks \x03");
            return 0;
            break;
        case 3:
            U.Borrow();
            break;
        default:
            U.print("\t   Invalid Choice, Try again ", false);
            U.Back();
            break;
        }
    }
}

