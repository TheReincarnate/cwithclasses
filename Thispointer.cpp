#include <iostream>
using namespace std;
class o
{
public:
    void display()
    {
        {
            cout << "The address of object is:";
            cout << this;
        }
    }
};
int main()
{
    o obj;
    obj.display();
    return 0;
}