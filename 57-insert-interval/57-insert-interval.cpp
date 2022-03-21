class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& m) {
        if(nums.size() == 0) return {m};
        if(m.size() == 0) return {nums};
        vector<vector<int>> res;
        bool done = false;
        for(auto& x : nums) {
            if(res.empty() || res.back()[1] < x[0]) {
                res.push_back(x);
            } else {
                res.back()[1] = max(res.back()[1], x[1]);
            }
            if(done == false) {
                if(res.back()[0] > m[0] && res.back()[0] > m[1]) {
                    res.insert(res.end()-1, m);
                    done = true;
                }
                else if(res.back()[1] >= m[0]) {
                    res.back()[0] = min(res.back()[0], m[0]);
                    res.back()[1] = max(res.back()[1], m[1]);
                    done = true;
                }
            }
        }
        if(done == false) {
            if(res.back()[1] < m[0])
                res.push_back(m);
            else
                res.back()[1] = max(res.back()[1], m[1]);
        }
        return res;
        
    }
};