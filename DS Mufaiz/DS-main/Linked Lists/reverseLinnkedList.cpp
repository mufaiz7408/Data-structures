#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = tail = NULL;
    }

    void pushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == 0)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void reverseLL()
    {
        Node *prev = NULL;
        Node *curr = head;
        Node *next = NULL;

        tail = head;

        while (curr != NULL)
        {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        head = prev;
    }

    void PrintInLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL \n";
    }
};

int main()
{
    List kum;
    kum.pushFront(3);
    kum.pushFront(2);
    kum.pushFront(1);

    kum.PrintInLinkedList();
    kum.reverseLL();
    kum.PrintInLinkedList();
    return 0;
}