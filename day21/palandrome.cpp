#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.size();
    int st = 0;
    int e = n - 1;
    while (st <= e)
    {
        if (s[st] != s[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
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
    cout << toLowerCase('A') << endl;
}