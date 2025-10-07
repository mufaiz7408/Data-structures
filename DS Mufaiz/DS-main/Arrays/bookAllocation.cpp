#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> &arr, int n, int m, int maxAllowedPages)
{
    int students = 1, pages = 0;

    for (int i = 0; i < n; i++)
    {
        if (pages + arr[i] <= maxAllowedPages)
        {
            pages = pages + arr[i];
        }
        else
        {
            students++;
            pages = arr[i];
        }
    }
    return students > m ? false : true; // if students are more than m, then return false
}

int allocateBooks(vector<int> &arr, int n, int m)
{
    if (m > n)
    {
        return -1; // Not enough books for students
    }

    int sum = 0;
    for (int i = 0; i < n; i++) // O(n)
    {
        sum += arr[i];
    }
    int start = 0;
    int end = sum, ans = -1; // range of pages

    while (start <= end) // O(logN*n)
    {
        int mid = start + (end - start) / 2;

        if (isValid(arr, n, m, mid))
        {
            // valid -left
            ans = mid;
            end = mid - 1;
        }
        else
        {
            // invalid - right
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {15, 17, 20};
    int n = 4, m = 2;

    cout << allocateBooks(arr, n, m) << endl;
    return 0;
}