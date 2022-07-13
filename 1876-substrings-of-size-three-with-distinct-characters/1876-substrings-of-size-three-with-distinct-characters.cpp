class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.length() < 3) return 0;
        int res = 0;
        for(int i = 1; i + 1 < s.length(); i++) {
             if(s[i] != s[i-1] && s[i] != s[i+1] && s[i-1] != s[i+1]) res++;
        }
        return res;
    }
};