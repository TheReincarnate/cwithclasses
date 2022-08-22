#include <iostream>
using namespace std;

class meter
{
    float length;

public:
    meter()
    {
        length = 0;
    }
    meter(float l)
    {
        length = 1 / 100;
    }
    void showlength()
    {
        cout << "length in meter is : " << length;
    }
};
int main()
{
    meter m1;
    float ll;
    cout << "Enter the length";
    cin >> ll;
    // m1 is uderdefined and ll is basic
    m1 = ll; // convert from basic to userdefined
    m1.showlength();
}