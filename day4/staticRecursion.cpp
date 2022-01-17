#include <bits/stdc++.h>
using namespace std;
int fun1(int n)
{
    if (n > 0)
    {
        return fun1(n - 1) + n;
    }
    return 0;
}
int fun2(int n)
{
    static int z = 0;
    if (n > 0)
    {
        z++;
        return fun2(n - 1) + z;
    }
    return 0;
}
int main()
{
    int x, y;
    x = fun1(5);
    cout << x << endl;
    y = fun2(5);
    cout << y;
}