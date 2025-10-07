#include <iostream>
using namespace std;

bool isFreqSame(int freq1[], int freq2[])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusions(string s1, string s2)
{
    // string s1 = "ab", s2 = "eidbaooo";
    int freq[26] = {0};

    for (int i = 0; i < s1.size(); i++)
    {
        int idx = s1[i] - 'a';
        freq[idx]++;
    }

    int windSize = s1.size();

    for (int i = 0; i < s2.size(); i++)
    {
        int windIdx = 0, idx = i;
        int windFreq[26] = {0};

        while (windIdx < windSize && idx < s2.size())
        {
            windFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if (isFreqSame(freq, windFreq))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    string s1 = "ab", s2 = "eidbaooo";

    if (checkInclusions(s1, s2))
        cout << "YES: Permutation exists!" << endl;
    else
        cout << "NO: Not found." << endl;
}