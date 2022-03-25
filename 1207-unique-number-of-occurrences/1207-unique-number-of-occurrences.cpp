class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int cnt[2001] = {};
        for(int x : nums) {
            cnt[x + 1000]++;
        }
        sort(begin(cnt), end(cnt));
        for(int i = 0; i < 2000; i++) {
            if(cnt[i] && cnt[i] == cnt[i+1])
                return 0;
        }
        
        return 1;
    }
};