class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        vector<int> res;
        for(auto x : nums)
            m[x]++;
        for(int i = 1; i <= n; i++) {
            if(m[i] < 1)
                res.push_back(i);
        }
        return res;
    }
};