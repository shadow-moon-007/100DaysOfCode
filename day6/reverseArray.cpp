#include <bits/stdc++.h>
using namespace std;
// using 2 pointers
// f1(int l, int r, int a[])
// {
//     if (l >= r)
//         return;
//     swap(a[l], a[r]);
//     f1(l + 1, r - 1, a);
// }
// 1 ptr approch
void f2(int i, int a[], int n)
{
    if (i >= n / 2)
        return;
    swap(a[i], a[n - i - 1]);
    f2(i + 1, a, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    f2(0, arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}