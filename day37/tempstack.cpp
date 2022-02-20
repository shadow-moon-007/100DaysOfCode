class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temp)
    {
        int n = temp.size();
        vector<int> ans(n);
        stack<int> tempStack;
        for (int i = n - 1; i >= 0; i--)
        {

            while (!tempStack.empty() && temp[tempStack.top()] <= temp[i])
            {
                tempStack.pop(); // pop all the elemtment (index) which has smaller value than current index value
            }
            if (tempStack.empty())
            {
                ans[i] = 0; // if stack is empty that means no greater temp value is present.
            }
            else
            {
                ans[i] = tempStack.top() - i;
            }
            tempStack.push(i);
        }

        return ans;
    }
};