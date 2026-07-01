class MinStack {
public:
    stack<int>s;
    stack<int>minstack;
    MinStack() {
        
    }
    
    void push(int value) {
        s.push(value);
        if(!minstack.empty())
        {
                if(minstack.top()>value)
                    minstack.push(value);
                else
                    minstack.push(minstack.top());
        }
        else
            minstack.push(value);
    }
    
    void pop() {
        minstack.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minstack.top();
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