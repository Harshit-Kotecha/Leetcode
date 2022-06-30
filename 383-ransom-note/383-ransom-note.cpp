class Solution {
public:
    bool canConstruct(string r, string m) {
        if(m.length() < r.length()) return 0;
        
        int cnt[26] = {};
        for(char& c : m) cnt[c - 'a']++;
        
        for(int i = 0; i < r.length(); i++) {
            if(--cnt[r[i] - 'a'] < 0) return 0;
        }
        
        return 1;
    }
};