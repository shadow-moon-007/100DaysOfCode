#include <iostream>
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
int main()
{
    char name[20];
    cin >> name;
    cout << getLength(name) << endl;
}