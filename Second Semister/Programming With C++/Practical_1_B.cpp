// P_1_B: Write a c++ program to convert seconds into hours and minutes 

#include <iostream>
using namespace std;

int main()
{
    int second;
    cout << "Enter how many seconds you want to convert into minutes and hours: ";
    cin >> second;
    cout << "The value of " << second << " in minutes is: " << (float)second/60 << endl;
    cout << "The value of " << second << " in hours is: " << (float)second/3600 << endl;
    return 0;
}