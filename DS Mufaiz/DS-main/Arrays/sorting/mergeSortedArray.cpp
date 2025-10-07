#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> A = {1, 2, 3, 0, 0, 0}; // TC:O(m + n), SC:O(1)
    vector<int> B = {2, 5, 6};
    int m = 3;
    int n = 3;
    int i = m - 1,
        j = n - 1, index = m + n - 1; // i and j are the last indices of A and B respectively, index is the last index of A
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[index] = A[i];
            i--;
            index--;
        }
        else
        {
            A[index] = B[j];
            j--;
            index--;
        }
    }
    while (j >= 0)
    {
        A[index] = B[j];
        j--;
        index--;
    }
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << " ";
    }

    return 0;
}