#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int cur = 0;
    int Max = 0;
    for (int i = 1; i < n; i++)
    {
        cur += prices[i] - prices[i - 1];
        if (cur < 0)
            cur = 0;
        else
            Max = std::max(Max, cur);
    }
    return Max;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices);
}