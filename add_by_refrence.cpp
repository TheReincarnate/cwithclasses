#include <iostream>
using namespace std;

void add(int &y)
{
    y++;
}
int main()
{
    int x = 23;
    add(x);
    cout << x;
}