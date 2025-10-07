#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
class DoublyList
{
public:
    Node *head;
    Node *tail;

    DoublyList()
    {
        head = tail = NULL;
    }

    void pushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {

            newNode->next = head;
            newNode->prev = NULL;
            head->prev = newNode;
            head = newNode;
        }
    };

    void pushBack(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    };
    void popFront()
    {
        if (head == NULL)
        {
            cout << "List is empty";
        }
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    };

    void popBack()
    {
        if (head == NULL)
        {
            cout << "Linked List is Empty";
            return;
        }
        else
        {
            Node *temp = tail;

            tail = tail->prev;
            if (tail != NULL)
            {
                tail->next = NULL;
            }
            temp->prev = NULL;

            delete temp;
        }
    };

    void printLinkedList()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        };
        if (head != NULL)
        {

            cout << "NULL" << endl;
        }
    };
};

int main()
{
    DoublyList LinkedDb1;
    LinkedDb1.pushFront(4);
    LinkedDb1.pushFront(3);
    LinkedDb1.pushFront(2);
    LinkedDb1.pushFront(1);

    LinkedDb1.pushBack(20);
    LinkedDb1.printLinkedList();
    LinkedDb1.popFront();
    LinkedDb1.printLinkedList();
    LinkedDb1.popBack();
    LinkedDb1.printLinkedList();

    return 0;
}