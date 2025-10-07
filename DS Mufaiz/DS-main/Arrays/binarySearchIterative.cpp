#include <iostream>
#include <vector>
using namespace std;
//BinarySearch-Iterative
int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size() - 1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2; // to avoid overflow
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            return mid; // target was found
        }
    }
    return -1; // target was  not found
}
int main()
{
    vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // odd
    int target1 = 4;
    cout << binarySearch(arr1, target1) << endl;

    vector<int> arr2 = {-1, 0, 3, 5, 9, 12}; // even
    int target2 = 9;
    cout << binarySearch(arr2, target2) << endl;

    return 0;
}