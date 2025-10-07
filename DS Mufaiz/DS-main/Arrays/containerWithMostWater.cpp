#include <iostream>
using namespace std;
int main()
{
    //one method 
    int height[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int maxWater = 0;

    int n = sizeof(height) / sizeof(height[0]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int width = j - i;
            int ht = min(height[i], height[j]);
            int area = ht * width;
            maxWater = max(maxWater, area);
        }
    }
    cout << "the maximum water that can be contained is  : " << maxWater << endl;

    return 0;
}
// 11 prob leetcode