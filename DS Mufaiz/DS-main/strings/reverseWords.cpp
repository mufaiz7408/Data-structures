#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s1 = "a good   example";
    reverse(s1.begin(), s1.end());
    // cout << s1 << endl;

    int n = s1.size();
    string word = "", answer = "";

    for (int i = 0; i <= n; i++)
    {

        while (i < n && s1[i] != ' ')
        {
            word += s1[i];
            i++;
        }
        reverse(word.begin(), word.end());

        if (word.size() > 0)
        {
            answer = answer + " " + word;
            word.clear();
        }
    }
    cout << answer << endl;
    return 0;
}