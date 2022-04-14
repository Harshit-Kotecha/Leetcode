class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1, mid;
        while(lo < hi) {
            mid = lo + (hi - lo) / 2;
            if(target > nums[mid])
                lo = mid + 1;
            else
                hi = mid;
        }
        return nums[lo] == target ? lo : -1;
    }
};