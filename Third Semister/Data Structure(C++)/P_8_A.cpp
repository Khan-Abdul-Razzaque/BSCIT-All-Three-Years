#include <iostream>
using namespace std;

int arr[] = {8, 9, 15, 2, 7};

int main()
{
    int data, counter = 0;
    cout << "Enter an element to search:";
    cin >> data;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == data)
        {
            counter = 1;
            break;
        }
    }
    if (counter == 0)
    {
        cout << "Element is not found in the array";
    }
    else
    {
        cout << "Element found in the array";
    }
    return 0;
}