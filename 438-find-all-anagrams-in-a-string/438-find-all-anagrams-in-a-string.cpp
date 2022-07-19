class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> rs;
        int cnt[26] = {}, c[26] = {};
        
        for(char c : p) cnt[c - 'a']++;
        
        int i = 0, j = 0;
        while(j < s.length()) {
            if(j - i + 1 < p.length()) {
                c[s[j] - 'a']++;
                j++;
            } else {
                c[s[j] - 'a']++;
                if(equal(begin(cnt), end(cnt), begin(c))) rs.push_back(i);
                c[s[i++] - 'a']--;
                j++;
            }
        }
        return rs;
    }
};