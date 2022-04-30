class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> m;
        for(auto& x : nums) {
            for(int i : x)
                m[i] += i;
        }
        vector<int> res;
        for(auto& i : m) {
            if(i.first * nums.size() == i.second)
                res.push_back(i.first);
        }
        sort(res.begin(), res.end());
        return res;
    }
};