#include <iostream>
using namespace std;

void add1(int &a)
{
    a++;
}
int main()
{
    int x;
    x = 10;
    add1(x);
    cout << x;
}