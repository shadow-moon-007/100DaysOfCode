#include <iostream>
using namespace std;
int main()
{

    int n;
    int ar[n];
    int a[n];
    // int arr[6] = {11, 5, -3, 1, -2, 6};
    cout << "enter length: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        {
            if (a[i] > -1)
            {
                ar[c] = a[i];
                c++;
            }
        }
    }
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << ar[i] << endl;
    // }
    if (c % 2 == 0)
    {
        cout << ar[c / 2 - 1];
    }
    else
    {
        cout << ar[c / 2];
    }
}