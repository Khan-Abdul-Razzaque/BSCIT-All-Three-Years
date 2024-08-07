#include <iostream>
using namespace std;

class Vehicle
{
    int vNo;
    string vModel, company;
    void vData()
    {
        cout << "Enter the vehical number: ";
        cin >> vNo;
        cout << "Enter the vahicle model: ";
        cin >> vModel;
        cout << "Enter the company name: ";
        cin >> company;
    }
public:
    Vehicle()
    {
        vData();
    }
    void display()
    {
        cout << "The vehicla number is: " << vNo << endl;
        cout << "The vehicla model is: " << vModel << endl;
        cout << "The vehicla company name is: " << company << endl;
    }
};

class Electric : public Vehicle
{
    int milage;
    string color;
    void getData()
    {
        cout << "How much milage does the vehicle give in one charge: ";
        cin >> milage;
        cout << "What is the color of the vehical: ";
        cin >> color;
    }
public:
    Electric()
    {
        getData();
    }
    void EVdata()
    {
        display();
        cout << "The vehicle gvies the milage of " << milage << " km in one charge" << endl;
        cout << "The color of the vehicle is " << color << endl;
    }
};

class Diesel : public Vehicle
{
    int milage;
    string color;
    void getData()
    {
        cout << "How much milage does the vehicle give in one liter of diesel: ";
        cin >> milage;
        cout << "What is the color of the vehical: ";
        cin >> color;
    }
public:
    Diesel()
    {
        getData();
    }
    void DVdata()
    {
        display();
        cout << "The vehicle gvies the milage of " << milage << " km in one liter of diesel" << endl;
        cout << "The color of the vehicle is " << color << endl;
    }
};

int main()
{
    cout << "**************** For Electric Vehicle *****************" << endl<< endl;
    Electric tesla;
    cout << endl << "**************** For Diesel Vehicle *****************" << endl<< endl;
    Diesel nissan;
    cout << endl << endl;
    tesla.EVdata();
    cout << endl << endl;
    nissan.DVdata();
    return 0;
}