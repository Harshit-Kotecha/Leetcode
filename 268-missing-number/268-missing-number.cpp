class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        for(int  i = 1; i <= nums.size(); i++)
            res ^= i;
        for(int x : nums)
            res ^= x;
        
        return res;
    }
};