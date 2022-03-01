class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        
        sort(nums.begin(), nums.end());
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] - nums[i-1] > 1) {
                int k = nums[i-1] + 1;
                while(k < nums[i])
                    res.push_back(k++);
            }
        }
        int k = nums.back();
        while(k < nums.size())
            res.push_back(++k);
        k = 1;
        while(k < nums[0])
            res.push_back(k++);
        return res;
    }
};