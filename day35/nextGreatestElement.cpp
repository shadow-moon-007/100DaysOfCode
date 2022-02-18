class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int m = nums1.size(), n = nums2.size();
        vector<int> ans(m, -1);
        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
            mp[nums2[i]] = i;
        for (int i = 0; i < m; ++i)
        {
            int x = nums1[i];
            int idx = mp[x];
            for (int j = idx + 1; j < n; ++j)
            {
                if (nums2[j] > x)
                {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }
        return ans;
    }
};