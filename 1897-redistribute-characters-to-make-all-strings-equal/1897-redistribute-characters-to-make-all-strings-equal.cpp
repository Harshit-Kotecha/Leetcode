class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int cnt[26] = {};
        for(auto& c : words) {
            for(auto& ch : c) cnt[ch - 'a']++;
        }
        for(int i = 0; i < 26; i++) {
            if(cnt[i] && cnt[i] % words.size() != 0) return 0;
        }
        return 1;
    }
};