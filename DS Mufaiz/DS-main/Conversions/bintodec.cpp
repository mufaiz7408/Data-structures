#include <iostream>
using namespace std;
int binToDec(int binNum)
{
    int answer = 0, power = 1;
    while (binNum > 0)
    {
        int remainder = binNum % 10;
        binNum /= 10;
        answer = answer + (remainder * power);
        power *= 2;
    }

    return answer;
}
int main()
{
    cout << binToDec(1010) << endl;

}