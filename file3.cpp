// Write a program to store and retrieve the information of patient (Patient ID, name,
// address, age and type) and delete the record in hospital management system.

#include <iostream>
#include <fstream>
using namespace std;

class hospital
{
    char name[20], type[20];
    char address[20];
    int id, age;

public:
    void getdata()
    {
        cout << "*----------------------------------------*";
        cout << "Enter the name of the patient: ";
        cin >> name;
        cout << "Enter the ID of the patient: ";
        cin >> id;
        cout << "Enter the address of the patient: ";
        cin >> address;
        cout << "Enter the type of the patient: ";
        cin >> type;
        cout << "Enter the age of the patient: ";
        cin >> age;
        cout << "*----------------------------------------*";
    }

    void displaydata()
    {
        cout << "*----------------------------------------*";
        cout << "\n\nPatient ID:: " << id;
        cout << "\nPatient name:: " << name;
        cout << "\nPatient address:: " << address;
        cout << "\nPatient type:: " << type;
        cout << "\nPatient age:: " << age;
        cout << "\n\n*----------------------------------------*";
    }

    void add()
    {
        hospital h;
        fstream file;
        file.open("HospitalManagementSystem.txt", ios::in || ios::out || ios::binary || ios::app)
                cout
            << "\nthe hospital recored:";
        h.getdata();
        file.write((char *)&h, sizeof(h));
        file.close;
    }
    void show()
    {
        hospital h;
        fstream file;
        file.open("HospitalManagementSystem.txt", ios::in || ios::binary) while ((char *)&h, sizeof(h))
        {
            h.display();
        }
        file.close;
    }

}

int
main()
{
    hospital h;
    char n;
    cout << "Enter the information of patient: " << endl;
    do
    {
        h.getdata();
        cout << "more data(y/n)?";
        cin >> n;
    } while (n == 'y' || 'Y');
    h.show();
}
