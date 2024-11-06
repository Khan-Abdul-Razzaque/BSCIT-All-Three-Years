// 30/08/24
// to imlement the concept of Queue with insert delete and display

#include <iostream>
using namespace std;
void Q_Insert();
void Q_Delete();
void Q_Display();
const int MAX = 5;
int Q_Array[MAX];
int rear = -1;
int front = -1;

int main()
{
    int choice;
    while (1)
    {
        cout << "\n\nChoose an option to perform operation:\n\n1.Insertion\n2.Deletion\nDisplay\n4.Exit\n\nEnter choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            Q_Insert();
            break;
        case 2:
            Q_Delete();
            break;
        case 3:
            Q_Display();
            break;
        case 4:
            return 0;
        default:
            cout << "\nPlease enter a valid choice !!";
        }
    }

    return 0;
}

void Q_Insert()
{
    int data;
    cout << "Enter the element to insert: ";
    cin >> data;
    if (rear == MAX - 1)
    {
        cout << "Queue overflow\n";
    }
    else
    {
        if (front == -1 || front > rear)
        {
            front = 0;
        }
        rear += 1;
        Q_Array[rear] = data;
    }
}

void Q_Delete()
{
    if (front == -1 || front > rear)
    {
        cout << "\nQueue Underflow\n";
    }
    else
    {
        cout << "\nElement dleted from queue is: " << Q_Array[front] << endl;
        front += 1;
    }
}

void Q_Display()
{
    if (front == -1)
    {
        cout << "\nQueue is empty.";
    }
    else
    {
        cout << "\nQueue is:\n\n";
        for (int i = front; i <= rear; i++)
            cout << Q_Array[i] << endl;
    }
}