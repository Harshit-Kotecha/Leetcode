class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        int cnt[26] = {};
        for(int i = 0; i < s.length(); i++) {
            cnt[s[i] - 'a'] = i - cnt[s[i] - 'a'] + 1;
            
        }
        for(int i = 0; i < 26; ++i) {
            if(cnt[i] == 0) continue;
            else if(cnt[i] - 1 != d[i]) return 0;
        }
        return 1;
    }
};