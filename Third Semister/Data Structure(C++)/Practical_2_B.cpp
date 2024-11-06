//!     b: wrtie a program to search the element in the linked list and display the same also insert the node at the end of the linked list

#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};
Node *head = NULL;
void insert_at_end(int);
void display(Node *);
void search_LL(int);

int main()
{
    int info, search;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        cout << "Insert Info: ";
        cin >> info;
        insert_at_end(info);
        cout << "Want to enter more nodes?(y/n): ";
        cin >> ch;
    }
    display(head);
    cout << "Enter node's info to search? ";
    cin >> search;
    search_LL(search);
    return 0;
}

void insert_at_end(int d)
{
    Node *ptr = new Node;
    ptr->info = d;
    ptr->next = NULL;
    if (head == NULL)
        head = ptr;
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = ptr;
    }
}

void search_LL(int s)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->info == s)
        {
            cout << "Element found in the LL at address ==> " << temp;
            exit(0);
        }
        temp = temp->next;
    }
    cout << "Element not found in the LL";
}

void display(Node *np)
{
    while (np != NULL)
    {
        cout << np->info << "-->";
        cout << np->next << " ";
        np = np->next;
    }
    cout << "\n";
}