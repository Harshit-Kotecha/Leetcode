class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0, hi = nums.size() - 1, m = 0;
        while(m <= hi) {
            if(nums[m] == 2) {
                swap(nums[m], nums[hi--]);
            } else if(nums[m] == 0) {
                swap(nums[m++], nums[lo++]);
            } else {
                m++;
            }
        }
        
    }
};