class MinStack {
 stack<long long>s;
  long long mini;  
public:
    MinStack() {
        mini=INT_MAX;
    }
    
    void push(int val) {
        long long value=val;
        if(s.empty())
        {
            mini=value;
            s.push(value);
        }
           
        else
        {
            if(mini>value)
            {
              s.push(2*value*1LL-mini);
               mini=value; 
            }
            else
            {
              s.push(value);  
            }
        }
        
    }
    
    void pop() {
        if(s.empty())return;
        long long element=s.top();
        s.pop();
        if(element<mini)
            mini=2*mini-element;
        
    }
    
    int top() {
        if(s.empty())return -1;
        long long element=s.top();
        if(element<mini)
            return mini;
        return element;
        
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */