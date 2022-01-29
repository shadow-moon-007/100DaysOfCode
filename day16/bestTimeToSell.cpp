int maxProfit(vector<int> &prices)
{
    int netProfit = 0;
    int n = prices.size();
    for (int i = 1; i < n; i++)
    {
        if (prices[i] > prices[i - 1])
            netProfit += (prices[i] - prices[i - 1]);
    }
    return netProfit;
}