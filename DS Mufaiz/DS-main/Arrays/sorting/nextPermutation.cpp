#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 5, 4, 3};
    int n = arr.size();

    // find the pivot

    int pivot = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            pivot = i;
            break;
        }
        if (pivot == -1)
        {
            // if pivot is not found, it means the array is in descending order
            // so we reverse the array to get the smallest permutation
            reverse(arr.begin(), arr.end());
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            return 0;
        }
        
    }
    for (int i = n - 1; i > pivot; i--)
    {
        if (arr[i] > arr[pivot])
        {
            swap(arr[i], arr[pivot]);
            break;
        }
    }
    int i = pivot + 1;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    // print the next permutation
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return -1;
}