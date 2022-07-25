class Solution {
public:
    char repeatedCharacter(string s) {
        int cnt[26] = {};
        for(char c : s) {
            if(cnt[c - 'a']++ > 0) return c;
        }
        return {};
    }
};