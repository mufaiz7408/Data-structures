#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
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
    void pushFront(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head = newNode;
        }
    }

    void Insert(int val, int pos)
    {
        if (pos < 0)
        {
            cout << "Invalid position";
            return;
        }
        if (pos == 0)
        {
            pushFront(val);
            return;
        }
        Node *temp = head;
        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "invalid position ";
                return;
            }

            temp = temp->next;
        }
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void PrintLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List kum;
    kum.pushFront(3);
    kum.pushFront(2);
    kum.pushFront(1);

    kum.Insert(14, 0);
    kum.PrintLinkedList();

    return 0;
}