class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> rs;
        int cnt[26] = {};
        for(char c : p) cnt[c - 'a']++;
        
        int i = 0, j = 0;
        while(j < s.length()) {
            if(j - i + 1 < p.length()) {
                j++;
            } else {
                int c[26] = {};
                for(int k = i; k <= j; k++) c[s[k] - 'a']++;
                int k = 0;
                while(k < 26) {
                    if(c[k] != cnt[k]) break;
                    k++;
                }
                if(k >= 26) rs.push_back(i);
                i++, j++;
            }
        }
        return rs;
    }
};