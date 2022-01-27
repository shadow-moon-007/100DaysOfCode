long long maxSubarraySum(int arr[], int n)
{
    int maxEnd = arr[0];
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        maxEnd = max(maxEnd + arr[i], arr[i]);
        res = max(maxEnd, res);
    }
    return res;
}