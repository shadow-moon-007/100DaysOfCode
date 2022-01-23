#include <bits/stdc++.h>
using namespace std;

void subSeq(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subSeq(ros, ans);
    subSeq(ros, ans + ch);
}
void subSeqAsc(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subSeqAsc(ros, ans);
    subSeqAsc(ros, ans + ch);
    subSeqAsc(ros, ans + to_string(code));
}

int main()
{
    subSeq("ABC", "");
    cout << endl;
    subSeqAsc("AB", "");
}
