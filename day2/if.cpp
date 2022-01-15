#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 20;
    int y = 18;
    if (x > y)
    {
        cout << "x is greater than y" << endl;
    }
    int time = 20;
    if (time < 18)
    {
        cout << "Good day.";
    }
    else
    {
        cout << "Good evening.";
    }
    cout << endl;
    string result = (time < 18) ? "Good day." : "Good evening.";
}