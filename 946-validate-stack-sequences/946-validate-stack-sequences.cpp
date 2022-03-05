class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        for(int i = 0, j = 0; i < pushed.size(); i++) {
            st.push(pushed[i]);
            while(!st.empty() && popped[j] == st.top()) {
                st.pop();
                j++;
            }
        }
        return st.empty();
    }
};