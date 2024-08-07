#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo = 169;
};

class Test : protected Student
{
protected:
    int ppc = 75, dbms = 76, clds = 77, dla = 70, tcs = 40;
};

class Sport : protected Student
{
protected:
    float hockey = 90, cricket = 80, football = 70;
};

class Result : protected Test, protected Sport
{
protected:
    int total1 = ppc + dbms + clds + dla + tcs;
    int total2 = hockey + cricket + football;
    int total3 = total1 + total2;
public:
    void display()
    {
        cout << "Total marks in test out of 500 is " << total1 << endl;
        cout << "Total marks in sports out of 300 is " << total2 << endl;
        cout << "Total score is " << total3 << endl;
    }
};

int main()
{
    Result khan;
    khan.display();

    return 0;
}