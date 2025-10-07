#include <iostream>
using namespace std;
#include <vector>
int main()
{
    int ans = 0;
    vector<int> vec = {1, 5, 1, 3, 5};
    for (int value : vec)
    {
        ans = ans ^ value;
    }
    cout << ans;
};