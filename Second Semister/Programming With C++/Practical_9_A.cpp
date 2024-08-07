#include <iostream>
using namespace std;

class A
{
public:
    void add(int num1, int num2)
    {
        cout << "Sum of two numbers is: " << (num1 + num2) << endl;
    }
    void add(int num1, int num2, int num3)
    {
        cout << "Sum of three numbers is: " << (num1 + num2 + num3) << endl;
    }
};

int main()
{
    A a;
    a.add(3, 8);
    a.add(1, 2, 3);
    return 0;
}