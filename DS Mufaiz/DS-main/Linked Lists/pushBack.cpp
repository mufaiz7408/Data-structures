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
  

    void push_back(int value)
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

    void printLinkedList()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ->  ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List kum;
    kum.push_back(4);
    kum.push_back(7);
    kum.push_back(10);
    kum.printLinkedList();
    return 0;
}