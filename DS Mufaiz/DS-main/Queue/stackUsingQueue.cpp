#include <iostream>
#include <queue>
using namespace std;

class myStack
{
public:
    queue<int> q1;
    queue<int> q2;

    myStack()
    {
    }
    void push(int data) // O(n)
    {
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }
    int pop() // O(1)
    {
        if (empty())
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        int ans = q1.front();
        q1.pop();
        return ans;
    }
    int top()
    {
        if (empty())
        {
            cout << "Stack is empty!\n";
            return -1;
        }
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
    void printStack()
    {
        queue<int> temp = q1;
        while (!temp.empty())
        {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;
    };
};
int main()
{
    myStack s;
    s.push(1);
    s.push(2);
    s.push(3);

    s.printStack(); // 3 2 1
    cout << "Top: " << s.top() << endl;
    s.pop();
    s.printStack(); // 2 1

    return 0;

    return 0;
}