// P_1_C: Write a c++ program to find volume of a square, cone and rectangle.

#include <iostream>
using namespace std;

int main()
{
    int side, length, breadth, height, radius;
    const float PI = 3.14;
    float volume;
    char choice;
    cout << "Enter 's' or 'r' or 'c' to find the volume of Square, Rectangle or Cone respectively: ";
    cin >> choice;
    switch (choice)
    {
    case 's':
        cout << "Enter the side length of square: ";
        cin >> side;
        volume = side * side * side;
        cout << "The volume of the square is: " << volume << "cc" << endl;
        break;
    case 'r':
        cout << "Enter length of the rectangle: ";
        cin >> length;
        cout << "Enter breadth of the rectangle: ";
        cin >> breadth;
        cout << "Enter height of the rectangle: ";
        cin >> height;
        volume = length * breadth * height;
        cout << "The volume of the rectangle is: " << volume << "cc" << endl;
        break;
    case 'c':
        cout << "Enter the radius of the cone: ";
        cin >> radius;
        cout << "Enter the height of the cone: ";
        cin >> height;
        volume = (PI * radius * radius * height) / 3;
        cout << "The volume of the cone is: " << volume << "cc" << endl;
        break;
    default:
        cout << "Sorry, You have entered an invalid choice !!" << endl;
    }
    return 0;
}