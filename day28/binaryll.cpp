class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        string str = "";
        while (head != NULL)
        {
            str += head->val + '0';
            head = head->next;
        }
        // converting into int from str
        int ans = stoi(str, 0, 2);
        return ans;
    }
};