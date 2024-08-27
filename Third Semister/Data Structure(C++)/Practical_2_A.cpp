/*
    !practical 2:
        !Title: Linked List
        !A: write a program to create a single linked list and insert the nodes at the beginng and display the node elements
*/
#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};
Node *start = NULL;
void insert_at_begin(int);
void display(Node *);

int main()
{
    int info;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Insert Info: ";
        cin >> info;
        insert_at_begin(info);
        cout << "Do you want insert more nodes?(y/n): ";
        cin >> ch;
    }
    display(start);
    return 0;
}

void insert_at_begin(int d)
{
    Node *ptr = new Node;
    ptr->info = d;
    ptr->next = start;
    start = ptr;
}

void display(Node *np)
{
    while (np != NULL)
    {
        cout << np->info << "-->";
        cout << np->next << "  ";
        np = np->next;
    }
    cout << "\n";
}