#include <iostream>
using namespace std;

class complex
{
private:
    float real;
    float imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(float x, float y)
    {
        real = x;
        imag = y;
    }
    complex operator+(complex c2)
    {
        complex temp;
        temp.real = real + c2.real;
        temp.imag = imag + c2.imag;
        return temp;
    }
    void display(char *msg)
    {
        cout << endl
             << msg;
        cout << "(" << real;
        cout << "," << imag << ")";
    }
};

int main()
{
    complex c1(2, 3), c2(4, 7), c3;

    c1.display("c1=");
    c2.display("c2=");

    c3 = c1 + c2;

    c3.display("c3=c1+c3=");
    return 0;
}