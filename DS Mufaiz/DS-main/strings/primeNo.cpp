#include <iostream>
using namespace std;
string isPrime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return "Not prime ";
        }
    }
    return "Prime";
}
int main()
{
    int n;
    cout << "Enter the Number:";
    cin >> n;
    cout << isPrime(n);
    return 0;
}