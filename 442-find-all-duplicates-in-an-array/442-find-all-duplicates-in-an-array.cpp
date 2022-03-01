class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++)
            if(nums[i] == nums[i-1])
                res.push_back(nums[i]);
        return res;
    }
};