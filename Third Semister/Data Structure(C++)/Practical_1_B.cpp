/*
    Read two array's from the user and merge them, Display the elements in sorted order.
*/

#include <iostream>
using namespace std;

void createArray(int *, int);                   // Creates an array.
void displayArray(int *, int);                  // Display the array elements.
void mergeArray(int *, int, int *, int, int *); // Merge two arrays.

int main()
{
    int sizeA1, sizeA2;
    cout << "Enter the size of the first array: ";
    cin >> sizeA1;
    int A1[sizeA1];          // First array.
    createArray(A1, sizeA1); // Creates the first array.
    cout << "Enter the size of the second array: "; 
    cin >> sizeA2;
    int A2[sizeA2];                         // Second array.
    createArray(A2, sizeA2);                // Creates the second array.
    int A3[sizeA1 + sizeA2];                // Third array (new array).
    mergeArray(A1, sizeA1, A2, sizeA2, A3); // Merge the first array and the second array in sorted order. and store it in a new array.
    displayArray(A3, (sizeA1 + sizeA2));
    return 0;
}

//! Creates array.
void createArray(int *array, int size)
{
    cout << "* Enter elements of the array *\n\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << (i + 1) << " : ";
        cin >> array[i];
    }
}

//! Merge two arrays.
void mergeArray(int *array1, int size1, int *array2, int size2, int *mergedArray)
{
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2)
    {
        if (array1[i] < array2[j])
        {
            mergedArray[k] = array1[i];
            k++;
            i++;
        }
        else
        {
            mergedArray[k] = array2[j];
            k++;
            j++;
        }
    }
    if (i < size1)
    {
        while (i < size1)
        {
            mergedArray[k] = array1[i];
            k++;
            i++;
        }
    }
    else if (j < size2)
    {
        while (j < size2)
        {
            mergedArray[k] = array2[j];
            k++;
            j++;
        }
    }
}

//! Display the array elements.
void displayArray(int *array, int size)
{
    cout << "\nDisplaying the array:  ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}