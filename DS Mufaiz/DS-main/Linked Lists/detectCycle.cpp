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
            tail = newNode;
        }
    }

    // Function to create a loop
    void createLoop(int position)
    {
        if (position == 0)
            return; // No loop

        Node *loopNode = head;
        int count = 1;
        while (count < position && loopNode != NULL)
        {
            loopNode = loopNode->next;
            count++;
        }
        if (loopNode != NULL)
        {
            tail->next = loopNode; // last node points to 'position' node
        }
    }
    bool detectCycle()
    {
        Node *fast = head;
        Node *slow = head;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};

int main()
{
    List l;
    l.pushBack(1);
    l.pushBack(2);
    l.pushBack(3);
    l.pushBack(4);
    l.pushBack(5);

    l.createLoop(2);

    cout << l.detectCycle();
    return 0;
}
