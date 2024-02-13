// P_2_C: Write a c++ program to generate all prime number between 1 to n accept n from user.

#include <iostream>
using namespace std;

int main()
{
    int num, count = 0;
    cout << "Enter the number: ";
    cin >> num;
    cout << "List of all the prime numbers between 1 and " << num << " is:" << endl;
    for (int i = 2; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << i << endl;
        }
        count = 0;
    }

    return 0;
}