// WAP to search the element in the LL and display the same also insert the node at the end of the LL

#include <iostream>

struct ListNode
{
    int data;
    ListNode *next;
};

ListNode *head = nullptr;

void insertAtEnd(int value, ListNode **head)
{
    ListNode *l1 = new ListNode();
    l1->data = value;

    if (*head == nullptr)
    {
        l1->next = *head;
        *head = l1;
        return;
    }
    ListNode *current = *head;
    while (current->next != nullptr)
    {
        current = current->next;
    }
    l1->next = current->next;
    current->next = l1;
}

void printLinkedList(ListNode *head)
{
    ListNode *current = head;
    std::cout << current;
    while (current != nullptr)
    {
        std::cout << "--->|" << current->data;
        std::cout << "|" << current->next << "|";
        current = current->next;
    }
    std::cout << "\n";
}

void searchLinkedList(int key, ListNode *head)
{
    ListNode *current = head;
    while (current != nullptr)
    {
        if (current->data == key)
        {
            std::cout << "The element " << key << " is found at " << current;
            return;
        }
        current = current->next;
    }
    std::cout << "Element is not found in the Liked List";
}

int main()
{
    int search;
    std::string ch = "y";
    while (ch == "y" || ch == "Y")
    {
        int value;
        std::cout << "Insert Data:";
        std::cin >> value;
        insertAtEnd(value, &head);
        std::cout << "Done. Need more nodes ?(y/n):";
        std::cin >> ch;
    }
    printLinkedList(head);
    std::cout << "Enter a element to search:";
    std::cin >> search;
    searchLinkedList(search, head);
    return 0;
}