/*
    Write a program to store elements in 1-D array and perform operations like searching, sorting and reversing the elements.
*/
#include <iostream>
using namespace std;
bool searchElement(int *, int);
void sortArray(int *, int);
void displayElements(int *, int);
void reverseArray(int *, int);

int main()
{
    int size, choice;
    cout << "Enter array size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Choose the operation you want to perform on the array\n1.Searching\n2.Sorting\n3.Reverse\nEnter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        if (searchElement(arr, size))
        {
            cout << "Element found in the array";
        }
        else
        {
            cout << "Element is not found in the array";
        }
        break;
    case 2:
        sortArray(arr, size);
        cout << "\nArray after Sorting in Ascending order: ";
        displayElements(arr, size);
        break;
    case 3:
        reverseArray(arr, size);
        cout << "Reversed array is: ";
        displayElements(arr, size);
        break;
    default:
        cout << "Invalid!, Please enter a choice b/w 1 to 3";
    }
    return 0;
}

//! Searching an element in the array.
bool searchElement(int *array, int size)
{
    int data, i = 0;
    bool found = false;
    cout << "Enter an element to search: ";
    cin >> data;
    for (i = 0; i < size; i++)
    {
        if (array[i] == data)
        {
            found = true;
            break;
        }
    }
    return found;
}

//! Sorting the array.
void sortArray(int *array, int size)
{
    int temp;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

//! Reversing the array.
void reverseArray(int *array, int size)
{
    int temp;
    for (int i = 0; i < size / 2; i++)
    {
        temp = array[i];
        array[i] = array[size - (i + 1)];
        array[size - (i + 1)] = temp;
    }
}

//! Display the elements of the array.
void displayElements(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << ", ";
    }
}