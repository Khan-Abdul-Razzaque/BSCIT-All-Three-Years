// P5: WAP to demonstrate bubble sort.

#include <iostream>
using namespace std;

int main()
{
    int temp;
    int arr[] = {8, 7, 5, 11, 15, 2};
    cout << "\n Original Array:";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "\nArray after Sorting in bubble sort:";
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}