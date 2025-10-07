#include <iostream>
using namespace std;
int DecToBinary(int number)
{
    int answer = 0, power = 1;
    while (number > 0)
    {
        int remainder = number % 2;
        number /= 2;

        answer = answer + (remainder * power);
        power *= 10;
    }
    return answer;
}
int main()
{
    for (int i = 0; i < 40; i++)
    {
        cout << DecToBinary(i) << endl;
    }

    return 0;
}