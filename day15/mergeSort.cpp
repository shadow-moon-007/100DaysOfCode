#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int p1 = m - 1;
    int p2 = n - 1;
    int i = m + n - 1;

    while (p1 >= 0 && p2 >= 0)
    {
        if (nums2[p2] >= nums1[p1])
        {
            nums1[i] = nums2[p2];
            p2--;
        }
        else
        {
            nums1[i] = nums1[p1];
            p1--;
        }
        i--;
    }

    while (p1 >= 0)
    {
        nums1[i] = nums1[p1];
        i--;
        p1--;
    }
    while (p2 >= 0)
    {
        nums1[i] = nums2[p2];
        i--;
        p2--;
    }
}
int main()
{
    vector<int> nums1 = {7, 1, 5, 3, 6, 4};
    vector<int> nums2 = {9, 2, 7};
    merge(nums1, nums1.size(), nums2, nums2.size());
}