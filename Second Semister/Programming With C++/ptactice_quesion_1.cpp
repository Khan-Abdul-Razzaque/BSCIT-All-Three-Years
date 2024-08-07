// to display table of 2 5 and 10 in a tabular fasshion using looping statement

#include <iostream>
using namespace std;

int main()
{
    int num[] = {2, 5, 10}, n = 0;

    while (n < 3)
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << num[n] << " x " << i << " = " << i * num[n] << endl;
        }
        n++;
        cout << endl << "***********************************" << endl <<endl;
    }

    return 0;
}