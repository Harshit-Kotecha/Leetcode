class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int res = 0;
        set<char> st(s.begin(), s.end());
        for(auto& c : words) {
            if(c[0] != s[0] || c.length() > s.length()) continue;
            int i = 0, j = 0;
            bool pre = true;
            while(i < c.length() && j < s.length() && pre) {
                if(st.count(c[i]) == 0) {
                    pre = false;
                } else if(s[j] != c[i]) {
                    pre = false;
                }
                if(c[i] == s[j]) j++;
                i++;
            }
            if(pre) res++;
        }
        return res;
    }
};