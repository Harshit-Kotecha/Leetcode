class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res, n = nums.size()-1, x;
        res = (nums[n] * nums[n-1]) * nums[n-2];
        if(nums[1] < 0)
            res = max(res, nums[0] * nums[1] * nums[n]);
        return res;
    }
};