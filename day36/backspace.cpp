class Solution
{
public:
    bool backspaceCompare(string s, string t)
    {
        int n1 = s.size(), n2 = t.size();
        string x, y;
        for (int i = 0; i < n1; i++)
        {
            if (s[i] == '#' and x.size() == 0)
                continue;
            else if (s[i] == '#' and x.size() != 0)
                x.pop_back();
            else
                x.push_back(s[i]);
        }

        for (int i = 0; i < n2; i++)
        {
            if (t[i] == '#' and y.size() == 0)
                continue;
            else if (t[i] == '#' and y.size() != 0)
                y.pop_back();
            else
                y.push_back(t[i]);
        }
        if (x == y)
            return true;
        return false;
    }
};