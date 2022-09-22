class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> rs;
        if(nums.back() < 0) return {};
        for(int i = 0, n = nums.size(); i+2 < n && nums[i] <= 0; i++) {
            int lo = i+1, hi = n - 1;
            while(lo < hi) {
                if((nums[lo] + nums[hi]) == -nums[i]) {
                    rs.push_back({nums[lo], nums[hi], nums[i]});
                    lo++, hi--;
                    while(lo < hi && nums[lo] == nums[lo-1]) lo++;
                    while(lo < hi && nums[hi] == nums[hi+1]) hi--;
                } else if(nums[lo] + nums[hi] + nums[i] < 0) lo++;
                else hi--;
            }
            while(i < n-1 && nums[i] == nums[i+1]) i++;
        }
        return rs;
    }
};
