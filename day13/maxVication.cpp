#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int profit = 0;
        int x;
        cin >> x;
        int a = x - 1;
        int c = x + 1;

        cout << a << " " << x << " " << c << endl;
        t--;
    }
}