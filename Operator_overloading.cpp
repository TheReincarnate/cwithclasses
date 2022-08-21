// rules of operator overloading
//  1. only existing operator can be overloaded. New operators cannot be created.
//  2. The overloaded operator must have at least one operand that is of user-defined type.
//  3. We cannot cannge the basic meaning of the operator, that is we cannot redefine '+' to subtract two values.
//  4. Overloaded operators follow the syntax rules of the original operators. They cannot be overridden.

#include <iostream>
using namespace std;

class Counter
{
    unsigned int count;

public:
    Counter()
    {
        count = 0;
    }
    int get_count()
    {
        return count;
    }
    void operator++(int)
    {
        count++;
    }
    void operator++()
    {
        count++;
    }
};

int main()
{
    Counter c1, c2;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();
    c1++;
    c2++;
    ++c2;
    cout << "\nc1=" << c1.get_count();
    cout << "\nc2=" << c2.get_count();

    return 0;
}