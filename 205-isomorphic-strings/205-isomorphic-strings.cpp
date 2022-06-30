class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return 0;
        
        unordered_map<char, char> m, p;
        for(int i = 0; i < s.length(); i++) {
            if(m.find(s[i]) == m.end()) {
                m[s[i]] = t[i];
            } else if(m[s[i]] != t[i]) {
                return 0;
            }
            if(p.find(t[i]) == p.end()) {
                p[t[i]] = s[i];
            } else if(p[t[i]] != s[i]) {
                return 0;
            }
        }
        
        return 1;
    }
};