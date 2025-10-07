#include <iostream>
using namespace std;
int main()
{
    
    int prices[] = {7, 1, 5, 3, 6, 4};
    int maxProfit = 0;
    int bestBuy = prices[0];
    int size = (sizeof(prices) / sizeof(prices[0]));
    for (int i = 1; i < size; i++)
    {
        if (prices[i] > bestBuy)
        {
            maxProfit = max(maxProfit, prices[i] - bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    cout << "the bestbuy is at :" << bestBuy << endl;
    cout << "the maximun profit will be :" << maxProfit << endl;
    return 0;
}