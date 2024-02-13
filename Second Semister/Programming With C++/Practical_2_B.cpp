// P_2_B: Write a c++ program to find sum of even and odd n numbers.

#include <iostream>
using namespace std;

int main()
{
    int num, eSum = 0, oSum = 0, eCount = 0, oCount = 0;
    cout << "Enter the number: ";
    cin >> num;
    for (int i = 1;; i++)
    {
        if (i % 2 == 0 && eCount < num)
        {
            eSum += i;
            eCount++;
        }
        else if (i % 2 == 1 && oCount < num)
        {
            oSum += i;
            oCount++;
        }
        else
            break;
    }
    cout << "The sum of even numbers is: " << eSum << endl;
    cout << "The sum of odd numbers is: " << oSum << endl;

    return 0;
}