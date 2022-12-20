class MyStack {
public:
    queue<int>q;
    queue<int>q1;
    MyStack() {
    }
    
    void push(int x) {
        q1.push(x);
        while(!q.empty())
        {
            q1.push(q.front());
            q.pop();
        }
        swap(q,q1);
       /* q.push(x);
        for(int i=0;i<q.size()-1;i++)
        {
            q.push(top());
            q.pop();
        }
        */
    }
    
    int pop() {
        int result=top();
        q.pop();
       return result;
        
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */