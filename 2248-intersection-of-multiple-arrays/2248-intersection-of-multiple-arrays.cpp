class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> res;
        int cnt[1001] = {0};
        for(auto& x : nums)
            for(int i : x) cnt[i]++;
        for(int i = 1; i < 1001; i++)
            if(cnt[i] == nums.size()) res.push_back(i);
        return res;
    }
};
