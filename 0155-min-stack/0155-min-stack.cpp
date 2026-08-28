class MinStack {
public:
    stack <int> stack1;
    stack <int> stack2;
    MinStack() {
        
    }
    
    void push(int value) {
        stack1.push(value);
        if (stack2.empty() || value<=stack2.top()){
            stack2.push(value);
        }
        
    }
    
    void pop() {
        if(stack1.top()==stack2.top()){
            stack2.pop();
        }
        stack1.pop();
        
    }
    
    int top() {
        return stack1.top();
        
    }
    
    int getMin() {
        return stack2.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */