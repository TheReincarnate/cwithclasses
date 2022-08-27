#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    void getdata()
    {
        cout << "real:";
        cin >> real;
        cout << "img:";
        cin >> img;
    }
    complex add(complex a, complex b)
    {
        complex temp;
        temp.real = a.real + b.real;
        temp.img = a.img + b.img;
        return temp;
    }
    void display()
    {
        cout << "\n\n"
             << real << "+i" << img;
    }
    friend complex sub(complex a, complex b);
};
complex sub(complex a, complex b)
{
    complex temp;
    temp.real = a.real - b.real;
    temp.img = a.img - b.img;
    return temp;
}
int main()
{
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3 = c3.add(c1, c2);
    c3.display();
    c3 = sub(c1, c2);
    c3.display();

    return 0;
}