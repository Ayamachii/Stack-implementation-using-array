class Stack
{
private:
    int capacity;
    int top;
    int *data;
public:
    Stack(int cap);
    ~Stack();
    void push(int val);
    int pop();
    bool isFull();
    bool isEmpty();
};

