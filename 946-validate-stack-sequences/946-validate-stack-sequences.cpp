class Solution {
public:
    bool validateStackSequences(vector<int>& a, vector<int>& b) {
        stack<int> st;
        for(int i = 0, j = 0; i < a.size(); i++) {
            st.push(a[i]);
            while(!st.empty() && st.top() == b[j]) {
                st.pop();
                j++;
            }
        }
        
        return st.empty();
    }
};