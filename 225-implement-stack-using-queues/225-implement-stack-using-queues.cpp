class MyStack {
public:
    queue<int>q;
    MyStack() {
     
    }
    
    void push(int x) {
        q.push(x);
        int sz=q.size();
         for(int i=0;i<sz-1;i++){
            int f=q.front();
            q.pop();
            q.push(f);
        }
    }
    
    int pop() {
        int ans=q.front();
            q.pop();
        return ans;
        
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