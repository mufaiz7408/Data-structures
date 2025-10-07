#include <iostream>
using namespace std;
int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {

        cin >> marks[i];
    }
    cout << "The marks are:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << marks[i] << ",";
    }
}