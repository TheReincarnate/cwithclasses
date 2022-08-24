#include <iostream>
using namespace std;

class firstclass
{
public:
    firstclass()
    {
        cout << "this is first class" << endl;
    }
};
class secondclass
{
public:
    secondclass()
    {
        cout << "this is second class" << endl;
    }
};
class derivedclass : public firstclass, public secondclass
{
public:
    derivedclass()
    {
        cout << "this is derived class" << endl;
    }
};

int main()
{
    derivedclass d1;
    return 0;
}