#include <iostream>
using namespace std;

class A
{
public:
    void message(void)
    {
        cout << "Class A" << endl;
    }
};
class B : public A
{
public: 
    void message(void)
    {
        cout << "Class B" << endl;
    }
};

int main()
{
    B b;
    b.message();
    return 0;
}