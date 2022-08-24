// Virtual base classes are used in virtual inheritance in a way of preventing multiple “instances” of a given class appearing in an inheritance hierarchy when using multiple inheritances.
#include <iostream>
using namespace std;

class a
{

public:
    int x;
    a()
    {
        x = 10;
    }
};

class b : virtual public a
{
};
class c : virtual public a
{
};
class d : public b, public c
{
};

int main()
{
    d k;
    cout << "the valuse is " << k.x << endl;
}
