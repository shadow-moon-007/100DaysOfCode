void removeLoop(Node *head)
{
    // code here
    // just remove the loop without losing any nodes
    Node *p = head;
    Node *q = head;
    while (p && q && q->next)
    {
        p = p->next;
        q = q->next->next;
        if (p == q)
        {
            if (p == head)
            {
                q = head;
                while (q->next != p)
                {
                    q = q->next;
                }
                q->next = NULL;
                return;
            }
            q = head;
            while (p->next != q->next)
            {
                p = p->next;
                q = q->next;
            }
            p->next = NULL;
            return;
        }
    }
    return;