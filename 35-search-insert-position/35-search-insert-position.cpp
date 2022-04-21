class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size(), mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return lo;
    }
};