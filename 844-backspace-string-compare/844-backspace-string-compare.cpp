class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int k1 = 0, k2 = 0;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '#') {
                if(k1 > 0) k1--;
            }
            else s[k1++] = s[i];
            
        }
        for(int i = 0; i < t.length(); i++) {
            if(t[i] == '#') {
                if(k2 > 0) k2--;
            }
            else
                t[k2++] = t[i];
        } 
        if(k1 != k2) return 0;
        for(int i = 0; i < k1; i++) {
            if(s[i] != t[i]) return 0;
        }
        return 1;
    }
};