class Solution {
public:
    string removeDuplicates(string s, int k) {
        string res;
        stack<pair<char, int>> st;
        for(int i = 0; i < s.length(); i++) {
            
            if(!st.empty() && st.top().first == s[i])
                st.top().second++;
            else
                st.push({s[i], 1});
            
            if(!st.empty() && st.top().second == k)
                st.pop();
        }
        while(!st.empty()) {
            res.append(st.top().second, st.top().first);
            st.pop();
        }
        reverse(res.begin(), res.end());
        return res;
            
    }
};