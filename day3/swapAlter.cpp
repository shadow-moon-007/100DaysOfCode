#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlter(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

int main()
{
    int even[8] = {3, 5, 6, 2, 1, 8, 7, 9};
    int odd[5] = {11, 33, 9, 45, 87};
    swapAlter(even, 8);
    printArr(even, 8);
}