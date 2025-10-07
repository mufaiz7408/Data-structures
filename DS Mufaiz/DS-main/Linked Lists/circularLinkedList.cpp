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

class CircularList
{
public:
    Node *head;
    Node *tail;

    CircularList()
    {

        head = tail = NULL;
    }
    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL || tail == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = newNode;
        }
    };
    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
            newNode->next = head;
        }
    }
    void deleteAtHead()
    {
        Node *temp = head;
        if (head == NULL)
        {
            cout << "List is empty!!!" << endl;
            return;
        }
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }
    void deleteAtTail()
    {
        Node *temp = head;
        if (head == NULL || tail == NULL)
        {
            cout << "List is empty!!!" << endl;
            return;
        }
        if (head == tail)
        {

            delete head;
            head = tail = NULL;
            return;
        }

        while (temp->next != tail)
        {
            temp = temp->next;
        }
        delete tail;
        tail = temp;
        temp->next = head;
    }

void printLinkedList()
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "Back to head" << endl;
};
};
int main()
{
    CircularList circular1;

    circular1.insertAtHead(2);
    circular1.insertAtHead(5);
    circular1.insertAtHead(10);

    // circular1.insertAtTail(19);
    circular1.printLinkedList();
    // circular1.deleteAtHead();
    circular1.deleteAtTail();
    circular1.printLinkedList();
    return 0;
}