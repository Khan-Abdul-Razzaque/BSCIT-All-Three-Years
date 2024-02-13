// Define a class which contains the following methods
//     1. readNO() To read a number
//     2. factorial() To find factorial of a number
//     3. reverseNo() To find reverse of a number
//     4. isPalindrome() To check the number is palindrome or not
//     5. isArmstrong() To chech the number is Armstrong number or not

#include <iostream>
#include <cmath>
using namespace std;

class Demo
{
    int num;
    void readNo()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

public:
    Demo()
    {
        readNo();
    }
    void factorial()
    {
        if (num > 16)
        {
            cout << "The factorial of the number " << num 
                 << " is to long thats why I'm not going to calcualate it." << endl;
            return;
        }
        else if (num < 0)
        {
            cout << "The factorial of " << num << " can not be find." << endl;
            return;
        }
        int fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact *= i;
        }
        cout << "The factorial of the number is " << fact << endl;
    }
    void reverse()
    {
        int remainder, rev = 0, temp = num;
        while (temp != 0)
        {
            remainder = temp % 10;
            rev = rev * 10 + remainder;
            temp /= 10;
        }
        cout << "The reverse of the number " << num << " is " << rev << endl;
    }
    void isPalinidrome()
    {
        int rem, rev = 0, temp = num;
        while (temp != 0)
        {
            rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if (rev == num)
        {
            cout << "The number you entered is a Palindrome." << endl;
        }
        else
        {
            cout << "The number you entered is not a Palindrome." << endl;
        }
    }
    void isArmstrong()
    {
        int arm = 0, temp = num, digit = 0, rem = 1;
        while (temp != 0)
        {
            temp /= 10;
            digit++;
        }
        temp = num;
        while (temp != 0)
        {
            for (int i = 0; i < digit; i++)
            {
                rem *= (temp % 10);
            }
            arm += rem;
            rem = 1;
            temp /= 10;
            cout << arm << endl;
        }
        if (arm == num)
        {
            cout << "The number you entered is an Armstrong number." << endl;
        }
        else
        {
            cout << "The number you entered is not an Armstrong number." << endl;
        }
    }
};

int main()
{
    Demo d1;
    d1.factorial();
    d1.reverse();
    d1.isPalinidrome();
    d1.isArmstrong();

    return 0;
}