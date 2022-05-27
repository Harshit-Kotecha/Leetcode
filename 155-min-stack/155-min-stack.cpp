class Node {
public:
    int mini;
    int val;
    Node *next;
    
    Node(int mini, int val, Node *next) {
        this->mini = mini;
        this->val = val;
        this->next = next;
    }
};

class MinStack {
public:
    Node *head = NULL;

    MinStack() {
    }
    
    void push(int val) {
        if(head == NULL) {
            head = new Node(val, val, NULL);
        } else {
            int mini = min(val, head->mini);
            head = new Node(mini, val, head);
        }
    }
    
    void pop() {
        head = head->next;
    }
    
    int top() {
        return head->val;
    }
    
    int getMin() {
        return head->mini;
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