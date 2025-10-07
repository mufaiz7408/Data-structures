#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1 = "kumail Ahmad";
    cout << str1 << endl;

    str1 = "burn hall school";
    cout << str1 << endl;

    char str2[] = "kumail ahmad";
    cout << str2 << endl;
    // str2 = 'Senorita'; /expression must be a modifiable lvalue - wont work
    str2[0] = 'H';

    cout << str2 << endl;
    return 0;
}