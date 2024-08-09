//     b: wrtie a program to search the element in the linked list and display the same also insert the node at the end of the linked list

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
        cout << "Enter the info for node: ";
        cin >> info;
        cout << "\nCreating New Node";
        insert_at_end(info);
        cout << "\nNode successfull added at the end of the list";
        cout << "\nLinked List: ";
        display(head);
        cout << "\n\nWant to enter more nodes? ";
        cin >> ch;
    }
    cout << "\nEnter the element you want to search? ";
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
    {
        head = ptr;
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}

void search_LL(int s)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->info == s)
        {
            cout << "\nElement found in the Linked List at address " << temp << "\n\n";
            exit(0);
        }
        else
        {
            temp = temp->next;
        }
    }
    cout << "\nElement not found in the Linked List\n\n";
}

void display(Node *np)
{
    while (np != NULL)
    {
        cout << np->info << "-->";
        cout << np->next << "\t";
        np = np->next;
    }
    cout << "\n";
}