
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2)
    {
        ListNode *s1 = head1;
        ListNode *s2 = head2;

        while (s1 != s2)
        {
            if (s1 == NULL)
                s1 = head2;
            else
                s1 = s1->next;
            if (s2 == NULL)
                s2 = head1;
            else
                s2 = s2->next;
        }
        return s1;
    }
};