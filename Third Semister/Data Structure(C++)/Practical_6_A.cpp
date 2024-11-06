// P6: write a c++ program to demonstrate selection sort.

// selection sort is comparision based sorting algorithm, primary idia is to divide the input list in sorted sub list and unsorted sublist (contains all the element)
// The algorithm repeatedly selects smallest (or largest) element from unsorted sublist and moves it to end of the sorted sublist. the process continue untill the unsorted sublist is empty. and sorted sublist contains all the elements.

#include <iostream>
using namespace std;
void selectionSort(int[], int);
void display(int[], int);

int main()
{
    int arr[] = {3, 2, 13, 0, 5};
    int n = 5;
    cout << "\nOriginal Array:\n";
    display(arr, n);
    selectionSort(arr, n);
    cout << "\nArray sorted with selection sort:\n";
    display(arr, n);
    return 0;
}

void selectionSort(int A[], int size)
{
    int indexOfMin, temp;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfMin = i;
        for (int j = i + 1; j < size; j++)
        {
            if (A[j] < A[indexOfMin])
            {
                indexOfMin = j;
            }
        }
        temp = A[i];
        A[i] = A[indexOfMin];
        A[indexOfMin] = temp;
    }
}

void display(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << A[i] << "\t";
    }
}