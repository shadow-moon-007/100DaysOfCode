class Solution
{
public:
    int carry;
    Node *addOne(Node *head)
    {
        add(head);
        Node *next = head, *new_head = head;
        if (carry)
        {
            Node *temp = new Node(carry % 10);
            temp->next = next;
            new_head = temp;
            next = new_head;
        }
        return (new_head);
    }
    void add(Node *node)
    {
        if (!node)
            return;

        add(node->next);

        int data;
        if (!node->next)
            data = node->data + 1;
        else
            data = node->data + carry;
        node->data = data % 10;
        carry = data / 10;
    }
};