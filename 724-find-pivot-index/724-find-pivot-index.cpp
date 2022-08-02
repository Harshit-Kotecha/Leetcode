class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        partial_sum(nums.begin(), nums.end(), nums.begin());
        if(nums.size() == 1 || nums.back() - nums[0] == 0) return 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i-1] == (nums.back() - nums[i])) return i;
        }
        if(nums.size() >= 2 && nums[nums.size()-2] == 0) return nums.size() - 1;

        return -1;
    }
};