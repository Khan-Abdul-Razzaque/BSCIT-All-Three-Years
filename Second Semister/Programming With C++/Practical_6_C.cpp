#include <iostream>
using namespace std;
class grandfather
{
protected:
    char name[20], occu[20];

public:
    void getinfo()
    {
        cout << "Enter name and occupation of grandfather: ";
        cin >> name >> occu;
    }
    void display()
    {
        cout << "\n\tname: " << name;
        cout << "\n\toccupation: " << occu << endl;
    }
};
class father : public grandfather
{
protected:
    char name[20], occu[20];

public:
    void getdetail()
    {
        cout << "\nEnter the name and the occupation of the father: ";
        cin >> name >> occu;
    }
    void show()
    {
        cout << "\n\tname: " << name;
        cout << "\n\toccupation: " << occu << endl;
    }
};
class child : public father
{
private:
    char name[20], buis[20];

public:
    void get()
    {
        cout << "\nEnter the name and occupation of the child: ";
        cin >> name >> buis;
    }
    void view()
    {
        cout << "\n\tname: " << name;
        cout << "\n\toccupation: " << buis << endl;
    }
    void call()
    {
        cout << "\nGrandfather:\n";
        display();
        cout << "Father:\n";
        show();
        cout << "Child:\n";
        view();
    }
};
int main()
{
    child c;
    c.getinfo();
    c.getdetail();
    c.get();
    c.call();
    return 0;
}