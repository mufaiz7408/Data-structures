#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl; // prints first element of array

    int a = 12;
    int *ptr = &a;
    cout << ptr << endl;
    // ptr++;
    ptr = ptr + 1;
    cout << ptr << endl;
    // ptr--;
    ptr = ptr - 1;
    cout << ptr << endl;
    return 0;
}