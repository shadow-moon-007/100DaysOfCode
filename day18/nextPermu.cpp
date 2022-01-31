void nextPermutation(vector<int> &nums)
{
    int n = nums.size();
    int c = 0;
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] < nums[i + 1])
        {
            c = 1;
            sort(nums.begin() + i + 1, nums.end());
            for (int j = i; j < n; j++)
            {

                if (nums[j] > nums[i])
                {

                    swap(nums[i], nums[j]);
                    break;
                }
            }
            break;
        }
    }
    if (c != 1)
        sort(nums.begin(), nums.end());
}