class Solution {
public:
    unordered_map<int, vector<int>> m;
    Solution(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            this->m[nums[i]].push_back(i);
        }
    }
    
    int pick(int t) {
        int lo = 0, hi = m[t].size() - 1;
        int x = (rand() % (hi - lo + 1)) + lo;
        return m[t][x];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */