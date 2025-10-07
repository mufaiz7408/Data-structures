#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 4};
    vector<char> alpha = {'a', 'b', 'c', 'd'};
    // cout << vec[0] << endl;
    for (int i : vec)
    {
        cout << i << endl;
    };
    for (char j : alpha)
    {
        cout << j << endl;
    }
}