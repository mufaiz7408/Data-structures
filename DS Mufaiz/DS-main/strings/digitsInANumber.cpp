#include <iostream>
using namespace std;
int main()
{
    int n = 3455;
    int count = 0;
    while (n != 0)
    {
        int rem = n % 10;
        count = count + rem;
        n = n / 10;
    }
    cout << count << endl;

    return 0;
}