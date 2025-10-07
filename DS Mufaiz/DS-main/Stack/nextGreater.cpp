#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{

    vector<int> elem = {6, 8, 0, 1, 3};
    vector<int> ans(elem.size(), 0);
    stack<int> st;

    for (int i = elem.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= elem[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            ans[i] = -1;
        }

        else
        {
            ans[i] = st.top();
        }

        st.push(elem[i]);
    }

    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}