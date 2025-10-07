#include <iostream>
#include <vector>
using namespace std;

// void input(vector<int> &arr, int size)
// {
//     cout << "enter elements:  ";
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }

int main()
{
    int size, product = 1;

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arrProd;

    // input(arr, size);

    for (int i = 0; i < arr.size(); i++)
    {
        product = product * arr[i];
        arrProd.push_back(product);
    }
    for (int i = 0; i < arr.size(); i++)
    {

        cout << arrProd[i] << " ";
    }

    return 0;
}