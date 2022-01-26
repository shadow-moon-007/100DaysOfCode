#include <bits/stdc++.h>
using namespace std;

void reverseArr(int arr[], int start, int end)
{
    while (start < end)
    {
        int t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;
        start++;
        end--;
    }
}
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[] = {1, 5, 3, 7, 8, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, n);
    reverseArr(arr, 0, n - 1);
    printArr(arr, n);
}