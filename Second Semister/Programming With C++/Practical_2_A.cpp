// Practical 2 : introduction to c++
// P_2_A: write a c++ program to find the greatest of three numbers.

#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    if (num1 < num2)
        num1 = num2;
    if (num1 < num3)
        num1 = num3;
    cout << "The greatest number is: " << num1 << endl;
    return 0;
}