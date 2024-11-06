#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int arr[50];
    int size, i, search, start, end, middle;
    cout << "\nEnter the size of array: ";
    cin >> size;
    cout << "\nEnter the element of the array in sorted order: ";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to search: ";
    cin >> search;
    start = 0;
    end = size - 1;
    while (start<=end)
    {
        middle = round((start+end)/2);
        if (arr[middle] == search)
        {
            cout << "\nElement found at index position " << middle;
            return 0;
        }
        if (arr[middle] < search)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }       
    }
    cout << "\nElement does not exist in the array.";
    return 0;
}