class Solution {
public:
    bool uniqueOccurrences(vector<int>& nums) {
        int cnt[2002] = {0};
        for(int i = 0; i < nums.size(); i++) {
            cnt[nums[i] + 1000]++;
        }
        sort(begin(cnt), end(cnt));
        int i = 0;
        while(cnt[i] == 0) i++;
        while(i < 2001) {
            if(cnt[i] == cnt[i+1])
                return 0;
            i++;
        }
        return 1;
    }
};