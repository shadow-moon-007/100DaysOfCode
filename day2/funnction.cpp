#include <bits/stdc++.h>
using namespace std;
void myFunction1(string fname, int age)
{
    cout << fname << " Refsnes. " << age << " years old. \n";
}
void myFunction(string country = "Norway")
{
    cout << country << "\n";
}
int mysum(int x)
{
    return 5 + x;
}

int main()
{
    myFunction("Sweden");
    myFunction("India");
    myFunction();
    myFunction("USA");
    myFunction1("keshav", 20);
    cout << mysum(4);
    return 0;
}
