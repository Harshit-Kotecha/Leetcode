class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        set<int> s;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(s.find(nums[i] + nums[i+1]) != s.end()) return 1;
            s.insert(nums[i] + nums[i+1]);
        }
        return 0;
    }
};