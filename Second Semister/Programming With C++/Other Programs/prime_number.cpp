#include <iostream>
using namespace std;

class prime
{
    int number;

public:
    void setData()
    {
        cout << "Enter the number to check whether the number is Prime number or composite: ";
        cin >> number;
    }
    void getNumber()
    {
        int count = 0;
        for (int i = 1; i <= number; i++)
        {
            if (number % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << "The number " << number << " is a prime number." << endl;
        }
        else
        {
            cout << "The number " << number << " is a composite number." << endl;
        }
    }
};

int main()
{
    prime p;
    p.setData();
    p.getNumber();
}

// I start every thing with the name of allah.
// I start every thing with the name of allah.
// I start every thing with the name of allah.
// I start every thing with the name of allah.
// I start every thing with the name of allah.
// I will start every thing with the name of allah in the future.
// My name is khan abdul razzaque khan abdul razzaque khan abdul razzaque
// I will start every work with the name of allah.
// I will start every thing with the name of allah.
// I will start every thing with the name of allah.