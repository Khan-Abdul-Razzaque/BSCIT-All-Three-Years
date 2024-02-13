#include <iostream>
using namespace std;

class Employee
{
    string eName, eId, eSalary, eAddress;

public:
    void setData(void)
    {
        cout << "Enter the name of the employee: ";
        cin >> eName;
        cout << "Enter the Id of the employee: ";
        cin >> eId;
        cout << "Enter the salary of the employee: ";
        cin >> eSalary;
        cout << "Enter the address of the employee: ";
        cin >> eAddress;
    }
    void getData()
    {
        cout << "The name of the employee is " << eName << endl;
        cout << "The Id of the employee is " << eId << endl;
        cout << "The salary of the employee is " << eSalary << endl;
        cout << "The address of employee is " << eAddress << endl;
    }
};

int main()
{
    Employee E1;
    E1.setData();
    cout << endl << endl;
    E1.getData();

    return 0;
}