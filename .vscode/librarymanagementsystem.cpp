
// should store and retrieve the information like book name book id number of books and
// purchase date
#include <iostream>
#include <fstream>
using namespace std;

class library
{
    char name[30];
    int id;
    int number;
    char date[10];

public:
    void getdata()
    {
        cout << endl
             << "----------------------------------" << endl;

        cout << "Enter the name of the book:";
        cin >> name;

        cout << "Enter book id:";
        cin >> id;

        cout << "Enter the number of books:";
        cin >> number;

        cout << "Enter the date of purchase of book";
        cin >> date;

        cout << endl
             << "----------------------------------" << endl;
    }

    void showdata()
    {
        cout << endl
             << "----------------------------------" << endl;
        cout << "Book name:" << name << endl;
        cout << "Book ID:" << id << endl;
        cout << "Number of books:" << number << endl;
        cout << "Purchase Date:" << date << endl;
        cout << endl
             << "----------------------------------" << endl;
    }
    void add()
    {
        fstream file;
        library a;
        file.open("record.txt", ios::app | ios::in | ios::binary);
        cout << "The library records:";
        a.getdata();
        file.write((char *)&a, sizeof(a));
        file.close();
    }
    void displayall()
    {
        fstream file;
        library a;
        file.open("record.txt", ios::in | ios::out | ios::binary);
        while (file.read((char *)&a, sizeof(a)))
        {
            a.showdata();
        }
        file.close();
    }
};

int main()
{
    cout << "Enter the detail of the book:" << endl;
    library a1;
    // a1.add();
    a1.displayall();
    return 0;
}