class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1, -1};
        int lo = 0, hi = nums.size() - 1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(target > nums[mid])
                lo = mid + 1;
            else 
                hi = mid;
        }
        if(nums[lo] != target) return {-1, -1};
        int f  = lo;
        hi = nums.size() - 1;
        while(lo < hi) {
            mid = lo + (hi - lo + 1) / 2;
            if(target < nums[mid])
                hi = mid - 1;
            else
                lo = mid;
        }
        return {f, lo};
    }
};