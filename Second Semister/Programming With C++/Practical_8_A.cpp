#include <iostream>
using namespace std;

class Calculator
{
    int num1, num2, ans;

public:
    void getNumber()
    {
        cout << "Enter the number 1: ";
        cin >> num1;
        cout << "Enter the number 2: ";
        cin >> num2;
    }
    void Operation()
    {
        char choice;
        cout << endl << "Press P to plus or\nPress S to subtract or\nPress M to multiply or\nPress D to divide: ";
        cin >> choice;
        switch (choice)
        {
        case 'p':
            ans = num1 + num2;
            cout << endl << "The sum of the numbers is: " << ans << endl<< endl;
            break;
        case 's':
            ans = num1 - num2;
            cout << endl << "The difference of the numbers is: " << ans << endl<< endl;
            break;
        case 'm':
            ans = num1 * num2;
            cout << endl << "The multiplication of the numbers is: " << ans << endl<< endl;
            break;
        case 'd':
            ans = num1 / (float)num2;
            cout << endl << "The division of the numbers is: " << ans << endl<< endl;
            break;
        default:
            cout << endl << "Invalid choice !!!!!!" << endl << endl;
        }
        cout << "***************************************" << endl << endl;
    }
};

int main()
{

    Calculator c;
    while (1)
    {
        c.getNumber();
        c.Operation();
    }
    return 0;
}
// Practical 9: Polimorphism
// A:  write a program to demonstrate compile time polimophism
// B: write a program to demonstrate run time polimarphism