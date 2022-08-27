#include <iostream>
using namespace std;
class student
{
    char name[20];
    int roll;
    // char faculty[20];
public:
    void getdata();
    void showdata();
    void deletedata(int);
    void modifydata();
    void searchdata();
};
void student::getdata()
{
    cout << "enter the name:";
    cin >> name;
    cout << "enter the roll number";
    cin >> roll;
}

int main()
{
    student s;
    int n;
    cout << "1. Add data\n"
         << "2. Show all data\n"
         << "3. Search a data by roll number\n"
         << "4. Delete a data\n"
         << "5. Modify a data\n ";

    cin >> n;
    switch (n)
    {
    case 1:
        cout << "Enter students data";
        s.getdata();
        break;
    case 2:
        cout << "The information of all students are:";
        s.showdata();
        break;
    case 3:
        cout << "Enter the roll number to be deleted::";
        int roll;
        cin >> roll;
        s.deletedata(roll);
        break;

    default:
        break;
    }
}
