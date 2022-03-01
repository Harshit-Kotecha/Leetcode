class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int, int> s;
        vector<int> res;
        for(int x : nums) {
            if(s.find(x) != s.end())
                res.push_back(x);
            s[x]++;
        }
        return res;
    }
};