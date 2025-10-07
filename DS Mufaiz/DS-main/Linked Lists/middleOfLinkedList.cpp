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
    };
    void pushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }

        newNode->next = head;
        head = newNode;
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
    // slow fast pointer approach
    int middleofLinkedList()
    {

        Node *fast = head;
        Node *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow->data;
    }
};
int main()
{
    List LinkedList1;
    LinkedList1.pushFront(6);
    LinkedList1.pushFront(9);
    LinkedList1.pushFront(4);
    LinkedList1.pushFront(5);

    LinkedList1.PrintInLinkedList();
    cout << LinkedList1.middleofLinkedList();
    return 0;
}