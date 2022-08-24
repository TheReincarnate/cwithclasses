#include <iostream>
#include <string.h>
using namespace std;

class hello
{
    char name[20];

public:
    void getdata()
    {
        cout << "Enter a string";
        cin >> name;
    }
    void display()
    {
        cout << name;
    }
    hello operator+(hello x)
    {
        hello temp;
        strcat(name, x.name);
        strcpy(temp.name, name);
        return temp;
    }
};
int main()
{
    hello a, b, c;

    a.getdata();
    b.getdata();

    c = a + b;

    cout << "The resultant string is ";
    c.display();
}