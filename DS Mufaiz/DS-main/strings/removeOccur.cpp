#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";

    while (str.size() > 0 && str.find(part) < str.size())
    {

        str.erase(str.find(part), part.size());
    }

    cout << str << endl;
    return 0;
}