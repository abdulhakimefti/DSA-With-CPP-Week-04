#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *Next;
    Node(int val)
    {
        value = val;
        Next = NULL;
    }
};

void insertHeadAndTail(Node *&head, int val)
{
    Node *newNodeHead = new Node(val);
    Node *newNodeTail = new Node(val);
    if (head == NULL)
    {
        head = newNodeTail;
        newNodeHead->Next = head;
        head = newNodeHead;
        return;
    }
    Node *temp = head;
    while (temp->Next != NULL)
    {
        temp = temp->Next;
    }
    temp->Next = newNodeTail;
    newNodeHead->Next = head;
    head = newNodeHead;
}
void display(Node *n)
{
    while (n != NULL)
    {

        cout << n->value << " ";
        if (n->Next != NULL)
            cout << " -> ";
        n = n->Next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    int n;
    cout << "Choice 1: Insertion at Head" << endl
         << "Choice 2:Insertion at Head" << endl
         << "Choice 3: Exit" << endl;
    char choice = 'y';
    while (toupper(choice) == 'Y')
    {

        cout << "Enter the value: ";
        cin >> n;

        if (choice == 'y')
        {
            insertHeadAndTail(head, n);
        }

        cout << "Want to continue (y/n): ";
        cin >> choice;
    }

    display(head);

    return 0;
}