class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> res;
        int i = 0;
        for(auto s : words) {
            unordered_map<char, int> m1, m2;
            for(i = 0; i < s.length(); i++) {
                if(m1[s[i]] != m2[p[i]]) {
                    break;
                } else {
                    m1[s[i]] = m2[p[i]] = i + 1;
                }
            }
            if(i == s.length()) {
                res.push_back(s);
            }
        }
        
        return res;
    }
};