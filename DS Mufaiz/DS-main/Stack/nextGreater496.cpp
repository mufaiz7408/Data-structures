#include <iostream>
#include <vector>
#include <stack>
#include <unordered_map>
using namespace std;

int main()
{

    vector<int> num1 = {4, 1, 2};
    vector<int> num2 = {1, 3, 4, 2};

    unordered_map<int, int> map;


    stack<int> st;

    for (int i = num2.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= num2[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            map[num2[i]] = -1;
        }
        else
        {
            map[num2[i]] = st.top();
        }
        st.push(num2[i]);
    }

    vector<int> ans;
    for (int i = 0; i < num1.size(); i++)
    {
        ans.push_back(map[num1[i]]);
    }
    for (int val : ans)
    {
        cout << val << " ";
    }
    return 0;
}