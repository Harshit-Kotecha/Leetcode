class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> res(nums.size(), -1);
        if(2*k >= nums.size()) return res;
        if(k == 0) return nums;
        long long s = 0;
        for(int i = 0; i <= 2*k; i++) {
            s += nums[i];
        }
        
        for(int i = 0, l = (2*k) + 1; i+l <= nums.size(); i++) {
            res[i+k] = s / l;
            if(i+l < nums.size())s += nums[i+l] - nums[i];
        } 
        return res;
    }
};