class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0, m = 0, hi = nums.size();
        while(m < hi) {
            if(nums[m] == 0) {
                swap(nums[lo++], nums[m++]);
            } else if(nums[m] == 2) {
                swap(nums[m], nums[--hi]);
            } else
                m++;
        }
        
    }
};