#include "Library.h"

Library::Library() :m_numberOfTypes(7)
{
    Lists = new Container< Book, LinkedList >[m_numberOfTypes];
}

Library::~Library()
{
}

//get type number from user
int Library::getType()
{
    cout << "Enter Book Type (pick a number)\n"
        << "1: Religious \n"
        << "2: Prophetic-Sunnah\n"
        << "3: Fiction\n"
        << "4: NonFiction\n"
        << "5: Biography\n"
        << "6: SelfHelp\n"
        << "7: Another Type \n";
    int n;
    do {
        cout << "Your Choice: ";
        cin >> n;
    } while (!(n >= 1 && n <= m_numberOfTypes));
    return n;
}

void Library::insertBookFront()
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        Book b("Religious");
        Lists[0].insertFront(b);
        break;
    }
    case 2: {
        Book b("Prophetic-Sunnah");
        Lists[1].insertFront(b);
        break;
    }
    case 3: {
        Book b("Fiction");
        Lists[2].insertFront(b);
        break;
    }
    case 4: {
        Book b("Non-Fiction");
        Lists[3].insertFront(b);
        break;
    }
    case 5: {
        Book b("Biography");
        Lists[4].insertFront(b);
        break;
    }
    case 6: {
        Book b("Self-Help");
        Lists[5].insertFront(b);
        break;
    }
    case 7: {
        Book b("Others");
        Lists[6].insertFront(b);
        break;
    }
    }
}

void Library::insertBookEnd()
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        Book b("Religious");
        Lists[0].insertEnd(b);
        break;
    }
    case 2: {
        Book b("Prophetic-Sunnah");
        Lists[1].insertEnd(b);
        break;
    }
    case 3: {
        Book b("Fiction");
        Lists[2].insertEnd(b);
        break;
    }
    case 4: {
        Book b("Non-Fiction");
        Lists[3].insertEnd(b);
        break;
    }
    case 5: {
        Book b("Biography");
        Lists[4].insertEnd(b);
        break;
    }
    case 6: {
        Book b("Self-Help");
        Lists[5].insertEnd(b);
        break;
    }
    case 7: {
        Book b("Others");
        Lists[6].insertEnd(b);
        break;
    }
    }
}

void Library::inserBookAt(size_t index)
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        if (index > 0 && index < Lists[0].getSize()) { Book b("Religious"); Lists[0].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 2: {
        if (index > 0 && index < Lists[1].getSize()) { Book b("Prophetic-Sunnah"); Lists[1].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 3: {
        if (index > 0 && index < Lists[2].getSize()) { Book b("Fiction"); Lists[2].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 4: {
        if (index > 0 && index < Lists[3].getSize()) { Book b("Non-Fiction"); Lists[3].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 5: {
        if (index > 0 && index < Lists[4].getSize()) {Book b("Biography"); Lists[4].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 6: {
        if (index > 0 && index < Lists[5].getSize()) { Book b("Self-Help"); Lists[5].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 7: {
        if (index > 0 && index < Lists[6].getSize()) {Book b("Others"); Lists[6].insertAt(b, index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    }
}

void Library::removeBookFront()
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        if (Lists[0].getSize()) { Lists[0].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 2: {
        if (Lists[1].getSize()) { Lists[1].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 3: {
        if (Lists[2].getSize()) { Lists[2].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 4: {
        if (Lists[3].getSize()) { Lists[3].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 5: {
        if (Lists[4].getSize()) { Lists[4].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 6: {
        if (Lists[5].getSize()) { Lists[5].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    case 7: {
        if (Lists[6].getSize()) { Lists[6].deleteFront(); cout << "Success" << endl; }
        else                    { cout << "Falid" << endl; }       break;
    }
    }
}

void Library::removeBookEnd()
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        if (Lists[0].getSize()) { Lists[0].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 2: { 
        if (Lists[1].getSize()) { Lists[1].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 3: { 
        if (Lists[2].getSize()) { Lists[2].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 4: { 
        if (Lists[3].getSize()) { Lists[3].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 5: { 
        if (Lists[4].getSize()) { Lists[4].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 6: { 
        if (Lists[5].getSize()) { Lists[5].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    case 7: { 
        if (Lists[6].getSize()) { Lists[6].deleteEnd(); cout << "success" << endl; }
        else                    { cout << "Faild" << endl; }     break;
    }
    }
}

void Library::removeBookAt(size_t index)
{
    int choice = getType();
    switch (choice)
    {
    case 1: {
        if (index > 0 && index < Lists[0].getSize()) { Lists[0].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 2: {
        if (index > 0 && index < Lists[1].getSize()) { Lists[1].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 3: {
        if (index > 0 && index < Lists[2].getSize()) { Lists[2].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 4: {
        if (index > 0 && index < Lists[3].getSize()) { Lists[3].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 5: {
        if (index > 0 && index < Lists[4].getSize()) { Lists[4].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 6: {
        if (index > 0 && index < Lists[5].getSize()) { Lists[5].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    case 7: {
        if (index > 0 && index < Lists[6].getSize()) { Lists[6].deleteAt(index); }
        else { cout << "Invalid position" << endl; }    break;
    }
    }
}

int Library::searchBook()
{
    int choice = getType();

    string ISBN;
    cout << "Enter Book ISBN: ";
    cin >> ISBN;

    Book b;
    b.setISBN(ISBN);

    switch (choice)
    {
    case 1: { if (Lists[0].getSize()) return Lists[0].Find(b);  return 0; }
    case 2: { if (Lists[1].getSize()) return Lists[0].Find(b);  return 0; }
    case 3: { if (Lists[2].getSize()) return Lists[0].Find(b);  return 0; }
    case 4: { if (Lists[3].getSize()) return Lists[0].Find(b);  return 0; }
    case 5: { if (Lists[4].getSize()) return Lists[0].Find(b);  return 0; }
    case 6: { if (Lists[5].getSize()) return Lists[0].Find(b);  return 0; }
    case 7: { if (Lists[6].getSize()) return Lists[0].Find(b);  return 0; }
    }
    return 0;
}


void Library::statistics()
{
    cout << "RELIGIOUS        : " << Lists[0].getSize() << endl;
    cout << "PROPHETIC-SUNNAH : " << Lists[1].getSize() << endl;
    cout << "FICTION          : " << Lists[2].getSize() << endl;
    cout << "NON-FICTION      : " << Lists[3].getSize() << endl;
    cout << "BIOGRAPHY        : " << Lists[4].getSize() << endl;
    cout << "SELF-HELP        : " << Lists[5].getSize() << endl;
    cout << "OTHERS           : " << Lists[6].getSize() << endl;
}

void Library::shortage()
{
    if (Lists[0].getSize() < 4)
        cout << "-> RELIGIOUS" << endl;
    if (Lists[1].getSize() < 4)
        cout << "-> PROPHETIC-SUNNAH" << endl;
    if (Lists[2].getSize() < 4)
        cout << "-> FICTION" << endl;
    if (Lists[3].getSize() < 4)
        cout << "-> NON-FICTION" << endl;
    if (Lists[4].getSize() < 4)
        cout << "-> BIOGRAPHY" << endl;
    if (Lists[5].getSize() < 4)
        cout << "-> SELF-HELP" << endl;
}

void Library::setColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void Library::separator(int x = 40) {
    for (int i = 0; i < x; i++)
        cout << '-';
    cout << endl;
}

void Library::DisplayCategory() {
    int choice = getType();
    setColor(14);
    switch (choice)
    {
    case 1: {
        cout << "RELIGIOUS" << endl; setColor(15);
        if (Lists[0].getSize())
            Lists[0].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 2: {
        cout << "PROPHETIC-SUNNAH" << endl; setColor(15);
        if (Lists[1].getSize())
            Lists[1].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 3: {
        cout << "FICTION" << endl; setColor(15);
        if (Lists[2].getSize())
            Lists[2].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 4: {
        cout << "NON-FICTION" << endl; setColor(15);
        if (Lists[3].getSize())
            Lists[3].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 5: {
        cout << "BIOGRAPHY" << endl; setColor(15);
        if (Lists[4].getSize())
            Lists[4].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 6: {
        cout << "SELF-HELP" << endl; setColor(15);
        if (Lists[5].getSize())
            Lists[5].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    case 7: {
        cout << "OTHERS" << endl; setColor(15);
        if (Lists[6].getSize())
            Lists[6].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); break;
    }
    }
    setColor(15);
}

void Library::Display() {
    setColor(14);
    switch (1)
    {
    case 1: {
        cout << "RELIGIOUS" << endl; setColor(15);
        if (Lists[0].getSize())
            Lists[0].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator();
    }
    case 2: {
        cout << "PROPHETIC-SUNNAH" << endl; setColor(15);
        if (Lists[1].getSize())
            Lists[1].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); 
    }
    case 3: {
        cout << "FICTION" << endl; setColor(15);
        if (Lists[2].getSize())
            Lists[2].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); 
    }
    case 4: {
        cout << "NON-FICTION" << endl; setColor(15);
        if (Lists[3].getSize())
            Lists[3].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator();
    }
    case 5: {
        cout << "BIOGRAPHY" << endl; setColor(15);
        if (Lists[4].getSize())
            Lists[4].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); 
    }
    case 6: {
        cout << "SELF-HELP" << endl; setColor(15);
        if (Lists[5].getSize())
            Lists[5].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); 
    }
    case 7: {
        cout << "OTHERS" << endl; setColor(15);
        if (Lists[6].getSize())
            Lists[6].Display();
        else
            cout << "EMPTY" << endl;
        setColor(14); separator(); 
    }
    }
    setColor(15);
}

//1-> found & available, -1->found but not available, 0->not found
int Library::modify()
{
    string isbn;
    cout << "Enter Book ISBN: ";
    cin >> isbn;
    Book b;
    b.setISBN(isbn);
    Book* ptr = nullptr;

    int choice = getType();
    switch (choice)
    {
    case 1: {
        ptr = Lists[0].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 2: {
        ptr = Lists[1].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 3: {
        ptr = Lists[2].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 4: {
        ptr = Lists[3].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 5: {
        ptr = Lists[4].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 6: {
        ptr = Lists[5].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    case 7: {
        ptr = Lists[6].Retrieve(b);
        if (ptr) {
            if (ptr->getAvailability()) {
                ptr->setAvailability(false);
                return 1;
            }
            return -1;
        }
        return 0;
    }
    }
    return 0;
}
