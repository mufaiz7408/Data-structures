#include <iostream>
using namespace std;

class circularQueue
{
    int *arr;
    int currSize, capac;
    int f, r;

public:
    circularQueue(int size)
    {
        capac = size;
        currSize = 0;
        arr = new int(capac);
        f = 0;
        r = -1;
    }
    void push(int data)
    {
        if (currSize == capac)
        {
            cout << "queue is full !\n";
        }
        r = (r + 1) % capac;
        arr[r] = data;
        currSize++;
    }
    void pop()
    {
        if (empty())
        {
            cout << "List is empty \n";
        }
        f = (f + 1) % capac;
        currSize--;
    }
    int front()
    {
        if (empty())
        {
            cout << "List is empty \n";
        }
        return arr[f];
    }
    bool empty()
    {
        return currSize == 0;
    }
    void printArr()
    {
        cout << "arr pov: ";
        for (int i = 0; i < currSize; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    circularQueue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cq.pop();
    cq.push(4);

    cq.printArr();

    cout << "Cq.pov:";
    while (!cq.empty())
    {
        cout << cq.front() << " ";
        cq.pop();
    }
    return 0;
}