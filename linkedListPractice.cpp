#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int value) : data(value), next(nullptr) {}
};

void printList(Node *head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

Node *reverseList(Node *head)
{
    Node *next = nullptr;
    Node *prev = nullptr;
    Node *current = head;

    while (current != nullptr)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

int middleLinkedList(Node *head)
{
    Node *fast = head;
    Node *slow = head;
    int count = 0;
    while (fast != nullptr)
    {
        fast = fast->next;
        // fast = fast->next;
        count++;
        if (count % 2 == 0)
        {
            slow = slow->next;
        }
    }

    return slow->data;
}
using namespace std;
int main()
{
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);

    printList(head);
    int mid = middleLinkedList(head);
    cout << "the middle of the linked list is" << mid << endl;

    head = reverseList(head);
    printList(head);

    return 0;
}