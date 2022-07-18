class Solution {
public:
    string reverseParentheses(string s) {
        string str;
        stack<char> st;
        for(auto& c : s) {
            if(c == '(') {
                st.push(c);
            } else if(c == ')') {
                str = "";
                while(!st.empty() && st.top() != '(') {
                    str += st.top();
                    st.pop();
                }
                st.pop();
                for(auto& ch : str) st.push(ch);
            } else {
                st.push(c);
            }
        }
        str = "";
        while(!st.empty()) {
            str += st.top();
            st.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};