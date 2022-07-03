class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int> st;
        for(auto& c : t) {
            if(isdigit(c.back())) {
                st.push(stoi(c));
            } else {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                if(c == "+") st.push(a + b);
                else if(c == "-") st.push(a - b);
                else if(c == "*") st.push(a * b);
                else st.push(a / b);
            }
        }
        return st.top();
    }
};