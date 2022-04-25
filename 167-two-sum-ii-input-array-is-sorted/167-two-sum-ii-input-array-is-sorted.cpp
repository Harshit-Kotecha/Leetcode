class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); i++) {
            int t = target - nums[i];
            int lo = i + 1, hi = nums.size() - 1, mid;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(t > nums[mid])
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(nums[lo] == t) return {i+1, lo+1};
        }
        return {};
    }
};