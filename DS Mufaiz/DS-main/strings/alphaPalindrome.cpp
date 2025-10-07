#include <iostream>
using namespace std;

bool isAlphaNum(char ch)
{
    return (ch >= '0' && ch <= '9') || 
           (ch >= 'a' && ch <= 'z') || 
           (ch >= 'A' && ch <= 'Z');
}

int main()
{
    string str = "madam";
    int start = 0, end = str.size() - 1;

    while (start < end)
    {
        if (!isAlphaNum(str[start]))
        {
            start++;
            continue;
        }
        if (!isAlphaNum(str[end]))
        {
            end--;
            continue;
        }

        if (tolower(str[start]) != tolower(str[end]))
        {
            cout << "Not a palindrome\n";
            return 0;
        }

        start++;
        end--;
    }

    cout << "Palindrome\n";
    return 0;
}
