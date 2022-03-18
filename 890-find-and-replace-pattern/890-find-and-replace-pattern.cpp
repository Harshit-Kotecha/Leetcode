class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        vector<string> res;
        int i = 0;
        for(auto s : words) {
            int cnt1[26] = {}, cnt2[26] = {};
            for(i = 0; i < s.length(); i++) {
                if(cnt1[s[i] - 'a'] != cnt2[p[i] - 'a']) {
                    break;
                } else {
                    cnt1[s[i] - 'a'] = cnt2[p[i] - 'a'] = i + 1;
                }
            }
            if(i == s.length()) {
                res.push_back(s);
            }
        }
        
        return res;
    }
};