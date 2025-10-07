#include <iostream>
#include <vector>
using namespace std;
int main()
{// Dutch national flag problem O(n) time complexity, O(1) space complexity
    vector<int> arr = {2, 0, 2, 1, 1, 0};
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
