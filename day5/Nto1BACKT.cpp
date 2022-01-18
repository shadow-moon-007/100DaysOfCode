#include <bits/stdc++.h>
using namespace std;
void f(int i, int n)
{
    if (n < i)
    {
        return;
    }
    f(i + 1, n);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    f(1, n);
}