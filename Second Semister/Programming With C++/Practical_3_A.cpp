#include <iostream>
using namespace std;

class Student
{
    string sName, sRollNo, sClass;

public:
    void setData()
    {
        cout << "Enter the name of student: ";
        cin >> sName;
        cout << "Enter the roll number of the student: ";
        cin >> sRollNo;
        cout << "Enter the class of the studend: ";
        cin >> sClass;
    }
    void getData()
    {
        cout << "The name of the student is " << sName << endl;
        cout << "The roll no of the student is " << sRollNo << endl;
        cout << "The class of the student is " << sClass << endl;
    }
};

int main()
{
    Student khan;
    khan.setData();
    khan.getData();

    return 0;
}