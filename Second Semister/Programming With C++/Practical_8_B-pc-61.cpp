// lendi error

#include <iostream>
using namespace std;

class calculator
{
public:
    int num1, num2;
    void getinfo()
    {
        cout << "enter your first number : ";
        cin >> num1;
        cout << "enter your second number : ";
        cin >> num2;
    }
    int add(int a, int b)
    {
        return a + b;
    }
    int sub(int a, int b)
    {
        return a - b;
    }
    int multi(int a, int b)
    {
        return a * b;
    }
    int div(int a, int b)
    {
        return a / b;
    }
};
class show : public calculator
{
    int choices;

public:
    void value()
    {
        cout << "enter function no : ";
        cin >> choices;
        switch (choices)
        {
        case 1:
            cout << "the first No " << num1 << " and"
                 << " second No " << num2 << ", " << add(num1, num2);
            break;
        case 2:
            cout << "the first No " << num1 << " and"
                 << " second No " << num2 << ", " << sub(num1, num2);
            break;
        case 3:
            cout << "the first No " << num1 << " and"
                 << " second No " << num2 << ", " << multi(num1, num2);
            break;
        case 4:
            cout << "the first No " << num1 << " and"
                 << " second No " << num2 << ", " << div(num1, num2);
            break;
        default:
            cout << "invaild No";
        }
    }
};


int main()
{
    show s;
    s.getinfo();
    s.value();
    return 0;
}


// to create a class that describes structure of a vehicle derived 2 more classes of vehicla that demonstrate multiple inheritance
// to demonstrate run time polymorphism by adding the function addition which adds given number of integer arguments