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
class Queue
{
public:
    Node *head;
    Node *tail;

    Queue()
    {
        head = tail = NULL;
    }

    void push(int val)
    {
        Node *newNode = new Node(val);
        if (empty())
        {

            head = tail = newNode;
        }
        else
        {
            Node *temp = head;
            // while (temp->next != NULL)
            // {
            //     temp = temp->next;
            // }
            // temp->next = newNode;
            tail->next = newNode;
            tail = newNode;
        }
    };

    void pop()
    {
        if (empty())
        {
            cout << " Queue is empty! \n";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            if (head == NULL)
            {
                tail = NULL;
            }

            delete temp;
        }
    };

    int front()
    {
        if (empty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return head->data;
    }

    bool empty()
    {

        return head == NULL;
    };
    void printQueue()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    };
};

int main()
{
    Queue q;
    q.push(3);
    q.push(2);
    q.push(1);

    q.printQueue();
    q.pop();
    cout << "Front : " << q.front() << endl;
    q.printQueue();
    return 0;
}