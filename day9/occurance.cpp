#include <bits/stdc++.h>
using namespace std;
int firstOcc(int arr[], int n, int i, int key)
{
    if (i == n)
    {
        return -1;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return firstOcc(arr, n, i + 1, key);
}
int lastOcc(int arr[], int n, int i, int key)
{
    int restArr = lastOcc(arr, n, i + 1, key);
    if (i == n)
    {
        return -1;
    }
    if (restArr != -1)
    {
        return restArr;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}
int main()
{
    int arr[] = {4, 3, 1, 4, 6, 5};
    cout << firstOcc(arr, 6, 0, 4) << endl;
    cout << lastOcc(arr, 6, 0, 4);
}