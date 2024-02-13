// Practical 1: Introduction to c++.
// P_1_A: Write a c++ program to create a simple calculator

#include <iostream> 
using namespace std;

int main()
{
    float firstNumber, secondNumber, answer;
    char _operator;
    cout << "Enter the first number: ";
    cin >> firstNumber;
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << "Enter which operation do you want to perform(+, -, *, /): ";
    cin >> _operator;
    switch (_operator)
    {
    case '+':
        answer = firstNumber + secondNumber;
        cout << "The sum of the number you entered is: " << answer << endl;
        break;
    case '-':
        answer = firstNumber - secondNumber;
        cout << "The difference of the number you entered is: " << answer << endl;
        break;
    case '*':
        answer = firstNumber * secondNumber;
        cout << "The multiplication of the number you entered is: " << answer << endl;
        break;
    case '/':
        answer = firstNumber / secondNumber;
        cout << "The division of the number you entered is: " << answer << endl;
        break;
    default:
        cout << "Enter a valid oparator." << endl;
    }

    return 0;
}