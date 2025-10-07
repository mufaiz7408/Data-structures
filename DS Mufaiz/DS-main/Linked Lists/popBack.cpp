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
    void pushBack(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    void popFront()
    {
        if (head == NULL)
        {
            return;
        }
        else
        {
            cout << "List is empty\n";
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void popBack()
    {
        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;

            tail = temp;
        }
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
    kum.pushBack(1);
    kum.pushBack(4);

    kum.popFront();
    kum.PrintLinkedList();
    kum.popBack();
    kum.PrintLinkedList();
    return 0;
}