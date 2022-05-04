class Solution {
public:
    vector<int> nums;
    unordered_map<int, vector<int>> m;
    Solution(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            m[nums[i]].push_back(i);
        }
    }
    
    int pick(int t) {
        // vector<int> v = m[t];
        // int r = m[t].size() - 1; cout<<r<<" ";
        int lo = 0, hi = m[t].size() - 1;
        int x = (rand() % (hi - lo + 1)) + lo;
        return m[t][x];
        // return v[x];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */