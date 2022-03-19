#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 6, 54};
    arr.push_back(16);
    cout << arr.size() << endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}