#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) // O(n^2) time complexity, O(1) space complexity
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
    }
}

void printArray(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {4, 1, 5, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}