#include <iostream>
using namespace std;
int main()
{
    int arr[] = {6, 2, 7, 4, 98, 1};
    int arrUser[6];

    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++)
    {
        cin >> arrUser[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arrUser[j] > arrUser[j + 1])
            {
                swap(arrUser[j], arrUser[j + 1]);
            }
        }
    };
    cout << "The sorted array is : ";
    for (int i = 0; i < n; i++)
    {

        cout << arrUser[i] << " ";
    }
}