class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size(); i++) {
            if(res.size() == 0 || res.back()[1] < nums[i][0]) {
                res.push_back({nums[i]});
            } else {
                res.back()[1] = max(res.back()[1], nums[i][1]);
            }
        }
        
        return res;
    }
};