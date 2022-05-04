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
        vector<int> v = m[t];
        int lo = 0, hi = v.size() - 1;
        // for(int i : v) cout<<i<<" ";
        // if(hi == lo) return v[lo];
        int x = (rand() % (hi - lo + 1)) + lo;
        return v[x];
        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */