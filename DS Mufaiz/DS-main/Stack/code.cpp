#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> vec;

public:
    void pushBack(int val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        vec.pop_back();
    }
    int top()
    {
        return vec[vec.size() - 1];
    }
    bool empty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack st;

    st.pushBack(3);
    st.pushBack(2);
    st.pushBack(1);

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
