class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size() == 0) return -1;
        
        int lo = 0, hi = nums.size()-1, mid, rot;
        while (lo < hi) {
            mid = lo + hi >> 1;
            //move to unsorted side. thats where pivot lies
            if (nums[mid] > nums[hi]) //find where it's unsorted. 
                lo = mid + 1;
            else 
                hi = mid;
        }
        rot = lo;
        lo = 0, hi = nums.size() - 1;
        if (target >= nums[rot] && target <= nums[hi])
            lo = rot;
        else 
            hi = rot - 1;
        while (lo < hi) {
            mid = lo + hi >> 1;
            if (target > nums[mid])
                lo = mid + 1;
            else 
                hi = mid;
        }
        if (nums[lo] == target) return lo;
        return -1;
    }
};