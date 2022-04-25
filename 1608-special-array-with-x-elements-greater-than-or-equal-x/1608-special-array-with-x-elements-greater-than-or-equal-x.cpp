class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int lo = 0, hi = nums.size() - 1, mid;
        for(int i = 1; i <= nums.size(); i++) {
            hi = nums.size() - 1;
            while(lo < hi) {
                mid = lo + (hi - lo) / 2;
                if(i > nums[mid])
                    lo = mid + 1;
                else
                    hi = mid;
            }
            if(lo < nums.size() && nums[lo] < i) lo++;
            if(lo < nums.size() && (nums.size() - lo) == i) return i;
        }
        return -1;
        
    }
};