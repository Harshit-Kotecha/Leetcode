class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int cnt[26] = {};
        
        for(char& c : chars) cnt[c - 'a']++;
        int res = 0;
        for(auto& s : words) {
            int c[26] = {};
            for(char ch : s) {
                c[ch - 'a']++;
            }
            bool flag = true;
            for(int i = 0; i < 26 && flag; i++) {
                if(c[i] > cnt[i]) flag = false;
            }
            if(flag) res += s.length();
        }
        return res;
    }
};