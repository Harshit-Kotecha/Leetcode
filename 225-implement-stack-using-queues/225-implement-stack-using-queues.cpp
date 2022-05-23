class MyStack {
public:
    queue<int> q1, q2;
    int val;
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
        val = x;
    }
    
    int pop() {
        while(q1.size() > 1) {
            q2.push(q1.front()); 
            q1.pop();
        }
        int x = q1.front();
        q1.pop();
        if(q2.size()) val = q2.back();
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
        return x;
    }
    
    int top() { 
        return val;
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
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