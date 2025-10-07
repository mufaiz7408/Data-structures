#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1, 2, 4};
    vector<char> alpha = {'a', 'b', 'c', 'd'};

    cout << vec.size() << endl;
    vec.push_back(25);
    cout << vec.size() << endl;
    vec.pop_back();
    cout << vec.size() << endl;

    cout << vec.front() << endl;
    cout << vec.back() << endl;
}