#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int mid = size / 2;
    int target = 12;
    cout << "mid: " << arr[mid] << endl;
    if (arr[mid] < target)
    {
        for (int i = arr[mid]; i < size; i++)
        {
            if (arr[i] == target)
            {
                cout << "Target found at index : " << i << endl;
            }
        }
    }
    else if (arr[mid] > target)
    {
        for (int i = 0; i < arr[mid]; i++)
        {
            if (arr[i] == target)
            {
                cout << "Target found at index : " << i << endl;
            }
        }
    }
    else if (arr[mid] == target)
    {
        cout << "Target found at index : " << mid << endl;
    }

    return 0;
}