#include <bits/stdc++.h>
using namespace std;
void sort012(int arr[], int n)
{
    int c0 = 0, c1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            c0++;
        }
        if (arr[i] == 1)
        {
            c1++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i < c0)
        {
            arr[i] = 0;
        }
        else if (c0 <= i && i < c0 + c1)
        {
            arr[i] = 1;
        }
        else
        {
            arr[i] = 2;
        }
    }
}
int main()
{
    int arr[6] = {2, 2, 1, 0, 2, 0};
    sort012(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
}