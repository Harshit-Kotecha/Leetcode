class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return 0;
        unordered_map<char, char> m1, m2;
        for(int i = 0; i < s.length(); i++) {
            if(m1.find(s[i]) == m1.end()) {
                m1[s[i]] = t[i];
            } else if(m1[s[i]] != t[i]) {
                return 0;
            }
            if(m2.find(t[i]) == m2.end()) {
                m2[t[i]] = s[i];
            } else if(m2[t[i]] != s[i]) {
                return 0;
            }
        }
        return 1;
    }
};