#include <iostream>
#include <unordered_map>
using namespace std;

class Node
{
public:
    int data;

    Node *next;
    Node *random;
    Node(int val)
    {
        data = val;
        next = NULL;
        random = NULL;
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
    void PushFront(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    };
    Node *copyNode()
    {
        if (head == NULL)
        {
            return head;
        }

        unordered_map<Node *, Node *> m;
        Node *newHead = new Node(head->data);
        Node *oldTemp = head->next;
        Node *newTemp = newHead;

        while (oldTemp != NULL)
        {

            Node *copyNode = new Node(oldTemp->data);

            m[oldTemp] = copyNode;

            newTemp->next = copyNode;

            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }
        oldTemp = head;
        newTemp = newHead;
        while (oldTemp != NULL)
        {
            newTemp->random = m[oldTemp->random];
            oldTemp = oldTemp->next;
            newTemp = newTemp->next;
        }

        return newHead;
    }
    void printLinkedList(Node *node)
    {
        Node *temp = head;
        while (node != NULL)
        {
            cout << node->data;
            if (node->random)
                cout << "(Random: " << node->random->data << ") -> ";
            else
                cout << "(Random: NULL) -> ";
            node = node->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    List Linked1;
    Linked1.PushFront(5);
    Linked1.PushFront(4);
    Linked1.PushFront(3);
    Linked1.PushFront(2);
    Linked1.PushFront(1);
    // setted some random pointers
    Linked1.head->random = Linked1.head->next->next;                         // 1 ka random -> 3
    Linked1.head->next->random = Linked1.head;                               // 2 ka random -> 1
    Linked1.head->next->next->random = Linked1.head->next->next->next->next; // 3 ka random -> 5

    cout << "Original List:\n";
    Linked1.printLinkedList(Linked1.head);

    Node *copiedHead = Linked1.copyNode();

    cout << "Copied List:\n";
    Linked1.printLinkedList(copiedHead);

    return 0;
}