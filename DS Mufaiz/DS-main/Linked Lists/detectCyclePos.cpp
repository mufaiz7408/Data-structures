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

    //  create a loop
    void createLoop(int position)
    {
        if (position == 0)
            return;

        Node *loopNode = head;
        int count = 1;
        while (count < position && loopNode != NULL)
        {
            loopNode = loopNode->next;
            count++;
        }
        if (loopNode != NULL)
        {
            tail->next = loopNode; // last node points to position node
        }
    }
    int detectCyclePos()
    {
        Node *fast = head;
        Node *slow = head;
        bool isCycle = false;

        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
            {
                isCycle = true;
                break;
            }
        }
        if (!isCycle)
        {
            return -1;
        }
        slow = head;
        Node *prev = NULL;
        while (slow != fast)
        {
            slow = slow->next;
            prev = fast;
            fast = fast->next;
        }
        prev->next = NULL; // remove cycle
        return slow->data;
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

    cout << "Loop found at index : \n" << l.detectCyclePos();
    cout << "Loop found at index : " << l.detectCyclePos(); // no  loop
    return 0;
}
