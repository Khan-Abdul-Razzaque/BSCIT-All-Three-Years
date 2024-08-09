#include <iostream>
using namespace std;

int main()
{
    int sizeA1, sizeA2;
    cout << "Enter the size of A1: ";
    cin >> sizeA1;
    int A1[sizeA1];
    cout << "Enter the elements for A1.\n\n";
    for (int i = 0; i < sizeA1; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> A1[i];
    }

    cout << "\nEnter the size of A2: ";
    cin >> sizeA2;
    int A2[sizeA2];
    cout << "Enter the elements for A2.\n\n";
    for (int i = 0; i < sizeA2; i++)
    {
        cout << "Enter the number " << i + 1 << " : ";
        cin >> A2[i];
    }
    int A3[sizeA1 + sizeA2];
    int i = 0, j = 0, k = 0;
    while (i < sizeA1 && j < sizeA2)
    {
        if (A1[i] < A2[j])
        {
            A3[k] = A1[i];
            i++;
            k++;
        }
        else
        {
            A3[k] = A2[j];
            j++;
            k++;
        }
    }
    if (i >= sizeA1)
    {
        while (j < sizeA2)
        {
            A3[k] = A2[j];
            j++;
            k++;
        }
    }
    else if (j >= sizeA2)
    {
        while (i < sizeA1)
        {
            A3[k] = A1[i];
            i++;
            k++;
        }
    }

    for (int i = 0; i < sizeA1 + sizeA2; i++)
    {
        cout << A3[i] << " , ";
    }
    return 0;
}