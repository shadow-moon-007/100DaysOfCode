#include <string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string name = "keshav";
    string lname = " bhagat";
    cout << "Hello from " << name + lname << "!!\n";
    string fullName = name.append(lname);
    cout << fullName;
}