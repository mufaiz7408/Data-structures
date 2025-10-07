#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    bool isSwap = false;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true; // Set the flag to true if a swap occurs
            }
        }
    if (isSwap)
    {
        // array already sorted
        return;
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    PrintArray(arr, n);

    return 0;
}