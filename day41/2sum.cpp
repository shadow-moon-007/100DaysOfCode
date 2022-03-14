#include <iostream>
using namespace std;
#include <vector>
vector<int> twoSum(vector<int> &nums, int target)

{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    return v;
}
int main()
{
    vector<int> i;
    vector<int> nums;
    int target;
    int x;
    int n;
    cout << "enter size:";
    cin >> n;
    cout << endl;
    cout << "enter numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    cout << "enter target: " << endl;
    cin >> target;
    i = twoSum(nums, target);
    for (auto it = i.begin(); it != i.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}