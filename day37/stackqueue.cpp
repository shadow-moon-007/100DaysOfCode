class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        int size = q1.size();
        while (size > 1)
        {
            q2.push(q1.front());
            q1.pop();
            size--;
        }
        int x = q1.front();
        q1.pop();
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }

    int top()
    {
        return q1.back();
    }

    bool empty()
    {
        return q1.empty();
    }
};
