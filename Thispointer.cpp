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
    obj.display(); // displays the address of the object in the memory
    return 0;
}
// distinguish data members members from local variables

// One of the features of this pointer is that it makes the
// members of the class readable by distinguishing
// between the class members and the parameters with
// the same name.
// void Set(int var)
// {
// }
//  this->var var;