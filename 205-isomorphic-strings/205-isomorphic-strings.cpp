class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return 0;
        vector<int> c1(256, -1), c2(256, -1);
        int k1 = -1, k2 = -1; 
        for(int i = 0; i < s.length(); i++) {
            
            if(c1[s[i]] == -1) {
                c1[s[i]] = i;
            } 
            if(c2[t[i]] == -1) {
                c2[t[i]] = i;
            } 
            if(c1[s[i]] != c2[t[i]]) return 0;
        }
        return 1;
    }
    
    
};