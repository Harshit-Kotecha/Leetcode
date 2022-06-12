class Solution {
public:
    int findMin(vector<int>& nums) {
        int lo = 0, hi = nums.size()-1, mid;
        if (nums[lo] <= nums[hi]) return nums[lo];
        while (lo < hi) {
            mid = lo + hi >> 1;
            //move to unsorted side
            if (nums[mid] > nums[hi]) 
                lo = mid + 1;
            else 
                hi = mid;
        }
        return nums[lo];
    }
};