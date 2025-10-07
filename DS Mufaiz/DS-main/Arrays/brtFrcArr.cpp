#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int maxSum = INT_MIN;
    for (int start = 0; start < size; start++)
    {
        int currentSum = 0;
        for (int end = start; end < size; end++)
        {
            currentSum = currentSum + arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << maxSum << endl;
}