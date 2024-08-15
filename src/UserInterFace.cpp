#include "UserInterFace.h"

void UserInterFace::setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void UserInterFace::print(string text, bool newLine)
{
    cout << text << (newLine ? "\n" : " ");
}

void UserInterFace::separator(int color)
{
    int x = 80;
    setColor(color);
    for (auto i = 0; i < x; ++i)
    {
        cout << "_";
    }
    setColor(15);
    cout << endl;
}

void UserInterFace::Back(int x)
{
    for (auto i = 0; i < x; ++i)
    {
        cout << ".";
        Sleep(400);
    }
}

void UserInterFace::Books_system()
{
    system("cls");
    setColor(13);
    print("\t\tWelcome to Our Library system");
    print("\t\t_____________________________\n");
    setColor(15);
    print("How can we help you \x03 ....");
    print("1) Books Modification System ");
    print("2) Information Department ");
    print("3) Borrow A Book");
    print("0) close ");
    print("Your choice! ", false);
}

void UserInterFace::Adding() {
    int choice;
    cout << "1) Add Front \n"
        << "2) Add End \n"
        << "3) Add At \n"
        << "YOUR CHOICE: ";
    cin >> choice;
    separator(9);
    switch (choice) {
    case 1:
        lib.insertBookFront();
        break;
    case 2:
        lib.insertBookEnd();
        break;
    case 3:
        setColor(12);
        cout << "=>PLEASE BE CAREFUL IN DEALING WITH POSITIONS TO AVOID ERRORS" << endl;
        cout << "       YOU CAN KNOW SIZES IN INFORMATION SECTION" << endl;
        setColor(15);
        size_t pos;
        cout << "Enter position: ";
        cin >> pos;
        lib.inserBookAt(pos);
        break;
    default:
        cout << "InValid Choice" << endl;
    }
}

void UserInterFace::Deleting() {
    int choice;

    cout << "1) Delete Front \n"
        << "2) Delete End \n"
        << "3) Delete At \n"
        << "YOUR CHOICE: ";
    cin >> choice;
    separator(9);
    switch (choice) {
    case 1:
        lib.removeBookFront();
        break;
    case 2:
        lib.removeBookEnd();
        break;
    case 3:
        setColor(12);
        cout << "=>PLEASE BE CAREFUL IN DEALING WITH POSITIONS TO AVOID ERRORS" << endl;
        cout << "          YOU CAN KNOW SIZES IN INFORMATION SECTION" << endl;
        setColor(15);
        size_t pos;
        cout << "Enter position: ";
        cin >> pos;
        lib.removeBookAt(pos);
        break;
    default:
        cout << "InValid Choice" << endl;
    }
}

void UserInterFace::Modification()
{
    int ch;
    while (true)
    {
        system("cls");
        setColor(9);
        print("\t\tWelcome in \'Books Modification Section\' ");
        print("\t\t______________________________________\n");
        setColor(15);
        print("-> Enter a service ... ");
        print("1) Add a Book ");
        print("2) Search for a Book ");
        print("3) Delete a Book ");
        print("0) Back to Main page ");
        print("Your choice!  ", false);

        cin >> ch;
        separator(9);
        switch (ch)
        {
        case 1:
            //Add
            system("cls");
            setColor(9);
            print("\t\tAdd a Book");
            print("\t\t__________\n");
            setColor(15);

            Adding();

            separator(9);
            print("\t\t<- Back ", false);
            Back();
            break;
        case 2:
            //Search
            system("cls");
            setColor(9);
            print("\t\tSearch for a Book");
            print("\t\t________________\n");
            setColor(12);
            print("=>MAKE SURE IF YOUR LIBRARY IS NOT EMPTY AVOIDING ERRORS");
            print("   YOU CAN GO TO INFORMATION SECTION TO KNOW SIZES\n");
            setColor(15);

            if (lib.searchBook())
                print("FOUND SUCCESSFULLY");
            else
                print("COULDN\'T BE FOUND");

            separator(9);
            print("\t\t<- Back ", false);
            Back();
            break;
        case 3:
            //Delete
            system("cls");
            setColor(9);
            print("\t\tDelete a Book");
            print("\t\t_____________\n");
            setColor(12);
            print("=>MAKE SURE IF YOUR LIBRARY IS NOT EMPTY AVOIDING ERRORS");
            print("   YOU CAN GO TO INFORMATION SECTION TO KNOW SIZES\n");
            setColor(15);

            Deleting();

            separator(9);
            print("\t\t<- Back ", false);
            Back();
            break;
        case 0:
            //out
            print("\t\t\tBack to Main page ", false);
            Back();
            return;
        default:
            //invalid
            print("\t\t\tInvalid choice, Try again ", false);
            Back();
            break;
        }
    }
}

void UserInterFace::Display() {
    int ch;
    cout << "1) print catergory \n"
        << "2) print all books in the library \n"
        << "Your choice : ";
    cin >> ch;
    switch (ch){
    case 1:
        lib.DisplayCategory();
        break;
    case 2:
        lib.Display();
        break;
    default:
        cout << "InValid Choice" << endl;
    }
}

void UserInterFace::Information()
{
    int ch;
    while (true)
    {
        system("cls");
        setColor(14);
        print("\t\tWelcome in \'Information Department\' ");
        print("\t\t______________________________________\n");
        setColor(15);
        print("-> Enter a service ... ");
        print("1) Print Books (All, one & Category) ");
        print("2) Categories with shortage ");
        print("3) Inquire about Quantities");
        print("0) Back to Main page ");
        print("Your choice!  ", false);

        cin >> ch;
        separator(14);
        switch (ch)
        {
        case 1:
            //print
            system("cls");
            setColor(14);
            print("\t\tPrint Books (All, one Category) ");
            print("\t\t________________________________\n");
            setColor(15);

            Display();

            separator(14);
            system("pause");
            break;
        case 2:
            //Shortage
            system("cls");
            setColor(14);
            print("\t\tCategories with shortage");
            print("\t\t_______________________\n");
            setColor(15);
            print("=>CATEGORIES SHOWN HERE IS LESS THAN 4 BOOKES\n");
            setColor(12);
            lib.shortage();
            setColor(15);

            separator(14);
            system("pause");
            break;
        case 3:
            //quantities
            system("cls");
            setColor(14);
            print("\t\tInquire about Quantities");
            print("\t\t________________________\n");
            setColor(15);

            lib.statistics();

            separator(14);
            system("pause");
            break;
        case 0:
            //out
            print("\t\t\tBack to Main page ", false);
            Back();
            return;
        default:
            //invalid
            print("\t\t\tInvalid choice, Try again ", false);
            Back();
            break;
        }
    }
}

void UserInterFace::Borrow()
{
    system("cls");
    setColor(8);
    print("\t\tWelcome in \'Borrowing Department\' ");
    print("\t\t__________________________________\n");
    setColor(12);
    cout << "=>PLEASE BE CAREFUL IN DEALING WITH POSITIONS TO AVOID ERRORS" << endl;
    cout << "       YOU CAN KNOW SIZES IN INFORMATION SECTION" << endl;
    setColor(15);

    int x = lib.modify();
    if (x == 1)
        cout << "Success" << endl;
    else if (x == -1)
        cout << "Sorry, This book is not available right now" << endl;
    else
        cout << "Sorry, Book is not found" << endl;
    separator(8);
    print("\t\t\tBack to Main page ", false);
    Back();
}
