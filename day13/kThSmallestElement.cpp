#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k)
{
    sort(arr + l, arr + r + 1);
    return arr[k - 1];
}
int main()
{

    int arr[5] = {1, 6, 3, 8, 9};
    cout << kthSmallest(arr, 0, 5, 2);
}