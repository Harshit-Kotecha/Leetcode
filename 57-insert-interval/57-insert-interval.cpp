class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& m) {
        vector<vector<int>> res;
        nums.push_back(m);
        sort(nums.begin(), nums.end());
        for(auto x : nums) {
            if(res.empty() || res.back()[1] < x[0]) {
                res.push_back(x);
            } else {
                res.back()[1] = max(res.back()[1], x[1]);
            }
        }
        
        return res;
        
    }
};