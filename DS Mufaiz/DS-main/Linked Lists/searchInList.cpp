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

    int Search(int key)
    {
        Node *temp = head;
        int idx = 0;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    void PrintInLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    List kum;
    kum.pushFront(3);
    kum.pushFront(2);
    kum.pushFront(1);

    cout << kum.Search(2) << endl;
    ;
    kum.PrintInLinkedList();
    return 0;
}