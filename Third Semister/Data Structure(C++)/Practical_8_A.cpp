#include <iostream>
using namespace std;

int arr[] = {8, 9, 15, 2, 7};

int main()
{
    int data, isPresent = false;
    cout << "Enter an element to search:";
    cin >> data;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == data)
        {
            isPresent = true;
            break;
        }
    }
    if (!isPresent)
    {
        cout << "Element is not found in the array";
    }
    else
    {
        cout << "Element found in the array";
    }
    return 0;
}