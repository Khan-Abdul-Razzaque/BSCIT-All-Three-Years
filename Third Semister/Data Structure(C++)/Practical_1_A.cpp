#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

    int arr[50];
    int size, i, j, temp, choice, data, counter = 0;
    cout << "Enter array size:";
    cin >> size;
    cout << "Enter the elements of the array:";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Choose the operation you want to perform on trhe array\n1.Searching\n2.Sorting\n3.Reverse\n";
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter an element to search:";
        cin >> data;
        for (i = 0; i < size; i++)
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
            cout << "Element found at index position " << i << " in the array";
        }
        break;
    case 2:
        for (i = 0; i < size; i++)
        {
            for (j = 0; j < size; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "\nArray after Sorting in Ascending order:";
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
        break;
    case 3: // Reverse
        i = 0;
        j = size - 1;
        while (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        cout << "Reversed array is:";
        for (i = 0; i < size; i++)
        {
            cout << arr[i] << "\t";
        }
    default:
        cout << "Please enter a choice betwen 1 to 3";
    }
    return 0;
}