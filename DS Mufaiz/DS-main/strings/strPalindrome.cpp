#include <iostream>
using namespace std;
int main()
{
    string str = "madam";
    int start = 0, end = str.size() - 1;
    bool isPalindrome = true;
    while (start <= end)
    {
        if (str[start++] != str[end--])
        {
            isPalindrome = false;
            break;
        }
    }
    if (isPalindrome)
    {
        cout << "The string is  a  palindrome!!! ";
    }
    else
        cout << "The string is not a  palindrome!!! ";

    return 0;
}