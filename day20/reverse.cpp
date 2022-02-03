#include <bits/stdc++.h>
using namespace std;
int getLength(char name[])
{
    int c = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        c++;
    }
    return c;
}
void reverse(char name[], int n)
{
    int st = 0, e = n - 1;
    while (st < e)
    {
        swap(name[st++], name[e--]);
    }
}
int main()
{
    char name[20];
    cin >> name;
    int len = getLength(name);
    cout << len << endl;
    reverse(name, len);
    cout << name << endl;
}