class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt[26] = {0};
        for(char c : allowed)
            cnt[c - 'a']++;
        int res = 0,i = 0;
        for(auto s : words) {
            for(i = 0; i < s.length(); i++) {
                if(cnt[s[i] - 'a'] < 1)
                    break;
            }
            if(i == s.length())
                res++;
            
        }
        return res;
    }
};