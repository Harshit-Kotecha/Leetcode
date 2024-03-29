class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int cnt[1001] = {}, res = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] == key) {
                cnt[nums[i]]++;
                if(cnt[nums[i]] > cnt[res])
                    res = nums[i];
            }
        }
        return res;
    }
};