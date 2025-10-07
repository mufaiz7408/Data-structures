#include <iostream>
#include <deque>

using namespace std;
int main()
{

    deque<int> deq;
    deq.push_front(3);
    deq.push_front(2);
    deq.push_front(1);
    deq.pop_front();
    deq.push_back(4);
    while (!deq.empty())
    {
        cout << deq.front() << " -> ";
        deq.pop_front();
    }
    cout << "NULL" << endl;

    return 0;
}