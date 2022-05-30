class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        
        if(nums.size() == 1) return 0;
        int m1 = INT_MIN, m2 = INT_MIN, ind = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] > m1) {
                m2 = m1;
                m1 = nums[i];
                ind = i;
            } else if(nums[i] > m2) {
                m2 = nums[i];
            }
        }
        return m1 >= 2*m2 ? ind : -1;
    }
};