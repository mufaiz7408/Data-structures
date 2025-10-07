#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(12);
    vec.push_back(43);
    vec.push_back(67);
    vec.push_back(56);
    vec.push_back(56);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
}