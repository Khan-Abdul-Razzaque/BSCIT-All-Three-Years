// Write a program in c++ to generate the n terms of fibonacci series

#include <iostream>
using namespace std;

int main()
{
    int terms, f1 = 0, f2 = 1, f3 = 0;
    cout << "How many terms you want to generate of fibonacci series: ";
    cin >> terms;
    cout << f1 << endl << f2 << endl;
    for (int i = 0; i < terms - 2; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
        cout << f3 << endl;
    }
    
    return 0;
}