#include <bits/stdc++.h>
using namespace std;

vector<int> pairSum(vector<int> arr, int S)
{
    unordered_set<int> s;
    vector<int> res;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (s.find(x) != s.end())
        {
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        s.insert(arr[i]);
    }
    return {};
}

int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;

    auto p = pairSum(arr, S);
    if (p.size() == 0)
    {
        cout << "no such pair!!";
    }
    else
    {
        cout << p[0] << "," << p[1] << endl;
    }
}