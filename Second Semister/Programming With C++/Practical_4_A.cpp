// 29/01/24 - P_2_A: Write a program to demonstrate the use of friend function.

#include <iostream>
using namespace std;

class Distance
{
    int meter;
    friend int addFive(Distance);

public:
//  Distance() : meter(0){} // Line 12 and 13 have same meaning.
    Distance() {meter = 0;}
};

int addFive(Distance d)
{
    d.meter = 5;
    return d.meter;
}

int main()
{
    Distance D;
    cout << "The distance is: " << addFive(D) << endl;
    return 0;
}