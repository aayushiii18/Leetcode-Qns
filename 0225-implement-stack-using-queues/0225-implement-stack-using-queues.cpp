class MyStack {
public:
    queue<int> q;
    MyStack() {}

    void push(int x) {
        int oldsize = q.size();
        q.push(x);
        for (int i = 0; i < oldsize; i++) {
            int value = q.front();
            q.pop();
            q.push(value);
        }
    }

    int pop() {
        int value = q.front();
        q.pop();
        return value;
    }

    int top() {
        int value = q.front();
        return value;
    }

    bool empty() { return q.empty(); }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */