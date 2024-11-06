// sort an array A with 'n' elements using insertion sort technique.

// step1: repeat step 2 to 4 for i = 1 to n - 1
// step2: set temp = a[i] and k = i -1
// step3: repeat while Temp < A[k] and k > 0
//        set A[K + 1] = A[k]
//        set k = k + 1
//        [End Loop]
// step4: set A[k + 1] = temp
//        [End Loop]
// step5: exit

#include <iostream>
using namespace std;
void insertSort(int[], int);
void printArray(int[], int);

int main()
{
    int arr[50];
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    cout << "Enter " << size << " elements in the array:";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    insertSort(arr, size);
    cout << "\nSorted Array using Insertion Sort:";
    printArray(arr, size);
    return 0;
}
void insertSort(int A[], int n)
{
    int temp, k;
    for (int i = 1; i <= n - 1; i++)
    {
        temp = A[i];
        k = i - 1;
        while (temp < A[k] && k >= 0)
        {
            A[k + 1] = A[k];
            k = k - 1;
        }
        A[k + 1] = temp;
    }
}
void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << "\t";
    }
}