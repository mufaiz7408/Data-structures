#include <iostream>
using namespace std;
int main()
{
    string str1 = "kumail ";
    string str2 = "Ahmad";

    string str3 = str1 + str2;
    string str4;

    // concatenation
    cout << " concatenated string: " << str3 << endl;
    // compare
    cout << "are the string same: " << (str1 == str2) << endl;
    // length
    cout << " The length of the string is: " << str1.length() << endl;

    // input a string
    cout << "Enter a string: ";
    // cin >> str4; // stored only one word
    getline(cin, str4); // to store a full line including spaces
    cout << "The string you entered is: " << str4 << endl;
    return 0;
}