#include <iostream>
using namespace std;
int main()
{
    char str[] = {"kumail Ahmad"};
    // cout << "enter a string:" << endl;
    // cin.getline(str, 100);

    // cout << "your output is : " << str;

    int length = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "The length of the string is: " << length << endl;

    return 0;
}