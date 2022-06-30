class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return 0;
        
        return transform(s) == transform(t);
    }
    string transform(string s) {
        vector<int> cnt(256, -1);
        string res; 
        for(int i = 0; i < s.length(); i++) {
            
            if(cnt[s[i]] == -1) {
                res += to_string(i) + ' ';
                cnt[s[i]] = i;
            } else {
                res += to_string(cnt[s[i]]) + ' ';
            }
        }
        return res;
    }
};