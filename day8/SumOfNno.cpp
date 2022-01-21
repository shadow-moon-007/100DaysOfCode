#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    return n * (n + 1) / 2;
}
int sum2(int n)
{
    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}
int main()
{
    int n = 6;
    cout << sum(n) << endl;
    cout << sum2(n) << endl;
}